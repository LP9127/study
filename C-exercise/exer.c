//谭第四章
//1、计算一元二次方程的两根之和
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
	printf("请输入a,b,c的值->");
	scanf_s("%lf %lf %lf",&a,&b,&c);
	double ret = fun(a, b, c);
	if (0 == ret)
		printf("此方程无实根！");
	else
	    printf("%7.2f\n",ret);
	return 0;
}*/
//2、输入两个函数，按照代数值由大到小的顺序输出这两个数
/*#include <stdio.h>
int main()
{
	int a = 0, b = 0;
	printf("请输入两个数->");
	scanf_s("%d %d",&a,&b);
	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	printf("顺序为：%d %d",a,b);
	return 0;
}*/
//3、输入三个数，要求按照由大到小的顺序输出
/*#include <stdio.h>
int main()
{
	int a=0, b=0, c=0;
	printf("请输入三个数->");
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
   printf("最终顺序为：%d %d %d",a,b,c);
	return 0;
}*/
//4、输入一个字符。判断它是否为大写字母？如果是，将它转换成小写字母；如果不是则直接进行输出
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
	printf("请输入一个字符->");
	scanf_s("%c",&c);
	char ret = JustChar(c);
	printf("%c\n",ret);
	return 0;
}*/
//5、有一个函数，当x<0时，y=-1;x=0时，y=0;x>0时，y=1
/*#include <stdio.h>
int main()
{
	int x = 0, y = 0;
	printf("请输入x的值->");
	scanf_s("%d",&x);
	if (x < 0)
		y = -1;
	else if (x == 0)
		y = 0;
	else
		y = 1;
	printf("y的值为->%d\n",y);
	return 0;
}*/
//6、要求按照考试成绩的等级输出分数段：A->85~100；B->70~84；C->60~69；D->60以下
/*#include <stdio.h>
int main()
{
	char ch = ' ';
	printf("请输入等级->");
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
//7、//从键盘键入字符：如果是A或者a，则执行fun1函数；如果是B或者b，则执行fun2函数
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