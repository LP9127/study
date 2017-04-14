#include "zhushiconvert.h"

enum STATE state = NULL_convert;
int first = 0;
int second = 0;
int third = 0;

void NULL_convert_(FILE *pread, FILE *pwrite)
{
	first = fgetc(pread);//先读取第一个字符
	switch (first)
	{
	case'/'://如果第一个字符是‘/’，则需要判断第二个字符
	{
	           second = fgetc(pread);//读取第二个字符
			   if ('*' == second)//如果第二个字符是‘*’，则将‘//’写入，并转换为C状态
			   {
				   fputc(first, pwrite);
				   fputc('/', pwrite);
				   state = C_convert;
			   }
			   else if ('/' == second)//如果第二个字符是‘/’，则将读取到的两个字符写入，并转换为CPP状态
			   {
				   fputc(first, pwrite);
				   fputc(second, pwrite);
				   state = CPP_convert;
			   }
			   else//如果是其他情况，则直接写入即可
			   {
				   fputc(first, pwrite);
				   fputc(second, pwrite);
			   }
	}
		break;
	case EOF://遇到文件结束标志，直接进入结束状态
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
		   if (third == '/')       //5.连续的注释问题/**//**/  
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
	case'\n'://如果是'\n'写入，再转换为无状态
	{
				fputc(first, pwrite);
				state = NULL_convert;
	}
		break;
	case EOF://如果遇到EOF，则直接进去结束状态
		state = END_convert;
		break;
	default:
		fputc(first, pwrite);
		break;
	}
}
void CommentConvert(FILE *pread, FILE *pwrite)
{
	state = NULL_convert;//刚开始处于无状态
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