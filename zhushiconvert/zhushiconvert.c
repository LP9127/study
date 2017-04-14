#include "zhushiconvert.h"

enum STATE state = NULL_convert;
int first = 0;
int second = 0;
int third = 0;

void NULL_convert_(FILE *pread, FILE *pwrite)
{
	first = fgetc(pread);//�ȶ�ȡ��һ���ַ�
	switch (first)
	{
	case'/'://�����һ���ַ��ǡ�/��������Ҫ�жϵڶ����ַ�
	{
	           second = fgetc(pread);//��ȡ�ڶ����ַ�
			   if ('*' == second)//����ڶ����ַ��ǡ�*�����򽫡�//��д�룬��ת��ΪC״̬
			   {
				   fputc(first, pwrite);
				   fputc('/', pwrite);
				   state = C_convert;
			   }
			   else if ('/' == second)//����ڶ����ַ��ǡ�/�����򽫶�ȡ���������ַ�д�룬��ת��ΪCPP״̬
			   {
				   fputc(first, pwrite);
				   fputc(second, pwrite);
				   state = CPP_convert;
			   }
			   else//����������������ֱ��д�뼴��
			   {
				   fputc(first, pwrite);
				   fputc(second, pwrite);
			   }
	}
		break;
	case EOF://�����ļ�������־��ֱ�ӽ������״̬
		state = END_convert;
		break;
	default:
		fputc(first, pwrite);
		break;
	}
}
void C_convert_(FILE *pread, FILE *pwrite)
{
	first = fgetc(pread);
	switch (first)
	{
	case '*':
		second = fgetc(pread);
		switch (second)
		{
		case '*':
			third = fgetc(pread);
			fputc(first, pwrite);
			if ('/'== third)
			{
				state = NULL_convert;
			}
			break;
		case '/':
			third = fgetc(pread);
	       if (third != '\n')     //   /* int i = 0; */int j = 0;  
		     {
			      fputc('\n', pwrite);
		     }
		   if (third == '/')       //5.������ע������/**//**/  
		    {
			      ungetc('/', pread);
				  state = NULL_convert;
			      break;
           }
		    fputc(third, pwrite);   //   /* int i = 0; */ \n int j = 0;  
			state = NULL_convert;
			break;
		default:
			fputc(first, pwrite);
		    fputc(second, pwrite);
			break;
		}
		break;
	case '\n':
			fputc('\n', pwrite);
			fputc('/', pwrite);
			fputc('/', pwrite);
			break;
	case EOF:
			state = END_convert;
			break;
	default:
			fputc(first, pwrite);
			break; 
	}
}
	


void CPP_convert_(FILE *pread, FILE *pwrite)
{
	first = fgetc(pread);
	switch (first)
	{
	case'\n'://�����'\n'д�룬��ת��Ϊ��״̬
	{
				fputc(first, pwrite);
				state = NULL_convert;
	}
		break;
	case EOF://�������EOF����ֱ�ӽ�ȥ����״̬
		state = END_convert;
		break;
	default:
		fputc(first, pwrite);
		break;
	}
}
void CommentConvert(FILE *pread, FILE *pwrite)
{
	state = NULL_convert;//�տ�ʼ������״̬
	while (state!=END_convert)
	{
		switch (state)
		{
		case NULL_convert:
			NULL_convert_(pread, pwrite);
			break;
		case C_convert:
			C_convert_(pread, pwrite);
			break;
		case CPP_convert:
			CPP_convert_(pread, pwrite);
			break;
		}
	}
}