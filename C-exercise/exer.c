//̷������
//1������һԪ���η��̵�����֮��
/*#include <stdio.h>
#include < math.h>
double fun(double x, double y, double z)
{
	double disc = y*y - 4 * x*z;
	double x1;
	double x2;
	if (disc < 0)
	{
		return 0;
	}
	else
	{
		x1 = ((-y) + sqrt(disc)) / (2.0 * x);
		x2 = ((-y) - sqrt(disc)) / (2.0 * x);
	}
	return (x1+x2);
}

int main()
{
	double a, b, c;
	printf("������a,b,c��ֵ->");
	scanf_s("%lf %lf %lf",&a,&b,&c);
	double ret = fun(a, b, c);
	if (0 == ret)
		printf("�˷�����ʵ����");
	else
	    printf("%7.2f\n",ret);
	return 0;
}*/
//2�������������������մ���ֵ�ɴ�С��˳�������������
/*#include <stdio.h>
int main()
{
	int a = 0, b = 0;
	printf("������������->");
	scanf_s("%d %d",&a,&b);
	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	printf("˳��Ϊ��%d %d",a,b);
	return 0;
}*/
//3��������������Ҫ�����ɴ�С��˳�����
/*#include <stdio.h>
int main()
{
	int a=0, b=0, c=0;
	printf("������������->");
	scanf_s("%d %d %d",&a,&b,&c);
	if (a < b)
	{
		int t = a;
		a = b;
		b = t;
	}
   if (a < c)
	{
		int t = a;
		a = c;
		c = t;
	}
   if (b < c)
   {
	   int t = b;
	   b = c;
	   c = t;
   }
   printf("����˳��Ϊ��%d %d %d",a,b,c);
	return 0;
}*/
//4������һ���ַ����ж����Ƿ�Ϊ��д��ĸ������ǣ�����ת����Сд��ĸ�����������ֱ�ӽ������
/*#include <stdio.h>

char JustChar(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		char tmp = c + 32;
		return tmp;
	}
	else
		return c;
}

int main()
{
	char c=' ';
	printf("������һ���ַ�->");
	scanf_s("%c",&c);
	char ret = JustChar(c);
	printf("%c\n",ret);
	return 0;
}*/
//5����һ����������x<0ʱ��y=-1;x=0ʱ��y=0;x>0ʱ��y=1
/*#include <stdio.h>
int main()
{
	int x = 0, y = 0;
	printf("������x��ֵ->");
	scanf_s("%d",&x);
	if (x < 0)
		y = -1;
	else if (x == 0)
		y = 0;
	else
		y = 1;
	printf("y��ֵΪ->%d\n",y);
	return 0;
}*/
//6��Ҫ���տ��Գɼ��ĵȼ���������Σ�A->85~100��B->70~84��C->60~69��D->60����
/*#include <stdio.h>
int main()
{
	char ch = ' ';
	printf("������ȼ�->");
	scanf_s("%c",&ch);
	switch (ch)
	{
	case'A':
		printf("85~100\n");
		break;
	case'B':
		printf("70~84\n");
		break;
	case'C':
		printf("60~69\n");
		break;
	case'D':
			printf("0~60\n");
			break;
	default:
		printf("error enter!\n");
	}
	return 0; 
}*/
//7��//�Ӽ��̼����ַ��������A����a����ִ��fun1�����������B����b����ִ��fun2����
/*#include <stdio.h>

int fun1(int x, int y)
{
	return x + y;
}

int fun2(int x, int y)
{
	return x - y;
}
int main()
{
	int a = 10, b = 20;
	char ch = getchar();
	switch (ch)
	{
	case'A':
	case'a':
	{
		int ret1 = fun1(a, b);
		printf("%d\n",ret1);
	}
		break;
	case'B':
	case'b':
	{
		int ret2 = fun2(a, b);
		printf("%d\n",ret2);
	}
		break;
	}
	return 0;
}*/