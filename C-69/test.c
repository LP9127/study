//1、在屏幕上输出Hello Word!
/*#include <stdio.h>
void Print()
{
	printf("Hello Word!\n");
}

int main()
{
	Print();
	return 0;
}*/

//2、计算1到100的和（循环）
/*#include <stdio.h>

int Add()
{
	int sum = 0;
	for (int i = 1; i <= 100; ++i)
	{
		sum += i;
	}
	return sum;
}

int main()
{
	int ret = Add();
	printf("The sum of 1 to 100 is: %d\n",ret);
	return 0;
}*/

//3、打印9*9乘法口诀表（循环）
/*#include <stdio.h>
void Print()
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d*%d=%d   ", j, i, i*j);
		}
		printf("\n");
	}
}

int main()
{
	Print();
	return 0;
}*/

//4、求两个整数的较大值（分支判断）
//#include <stdio.h>
/*int Max2(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}*/

/*int Max1(int x,int y)
{
	return (x > y ? x : y);
}*/

/*int main()
{
	int a = 0;
	int b = 0;
	printf("请输入两个整数：");
	scanf_s("%d %d",&a,&b);
	int ret = Max2(a, b);
	printf("两者中较大的是：%d\n",ret);
	return 0;
}*/

//5、求10个整数中的最大值（循环）
/*#include <stdio.h>
int Max(int* a)
{
	int max = 0;
	for (int i = 0; i < 10; i++)
	{
		if (max<a[i])
			max = a[i];
	}
	return max;
}

int main()
{

	int arr[10] = { 10, 9, 66, 11, 4, 20, 1, 8, 5, 6 };
	int ret = Max(arr);
	printf("这10个数中最大的是：%d\n",ret);
	return 0;
}*/
//6、求1-100之间的素数
/*#include <stdio.h>
#include <math.h>
int JustPrime(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n%i == 0)
			return 0;
	}
	if (n == 1)
		return 0;
	return 1;
}

int main()
{
	int k = 0;
	for (int j = 1; j <= 50; j++)
	{
		if (JustPrime(j))
		{
			k++;
			printf("%d  ", j);
		}	
	}
	printf("\n");
	printf("共有%d个素数\n", k);
	return 0;
}*/
//7、求两个整数的最大公约数（辗转相除）
/*#include <stdio.h>

int GreatDiv(int x, int y)
{
	int tmp = 0;
	while ((x%y)!=0)
	{
		tmp = y;
		y = x%y;
		x = tmp;
	}
	return y;
}

int main()
{
	int a = 0;
	int b = 0;
	printf("请输入两个整数->");
	scanf_s("%d %d",&a,&b);
	int ret = GreatDiv(a, b);
	printf("这两个数的最大公约数为：%d",ret);
	return 0;
}*/
//8、求两个整数的最小公倍数(借助最大公约数)
/*#include <stdio.h>

int GreatDiv(int x, int y)
{
	int tmp = 0;
	while ((x%y) != 0)
	{
		tmp = y;
		y = x%y;
		x = tmp;
	}
	return y;
}
int LestMultiple(int x, int y)
{
	int t = GreatDiv(x, y);
	int ret = (x*y) / t;
	return ret;
}

int main()
{
	int a = 0;
	int b = 0;
	printf("请输入两个整数->");
	scanf_s("%d %d", &a, &b);
	int ret = LestMultiple(a, b);
	printf("这两个数的最小公倍数为：%d", ret);
	return 0;
}*/
//9、交换两个整数的值
/*#include <stdio.h>
int main()
{
	int a, b;
	printf("请输入两个整数->");
	scanf_s("%d %d",&a,&b);
	int tmp = a;
	a = b;
	b = tmp;
	printf("交换后的结果为：%d %d",a,b);
	return 0;
}*/
//10、编写一个函数，函数的功能是交换两个数的值(传址)
/*#include <stdio.h>

void Swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

int main()
{
	int a = 0;
	int b = 0;
	printf("请输入两个数->");
	scanf_s("%d %d",&a,&b);
	Swap(&a,&b);
	printf("交换后的结果为：%d %d",a,b);
	return 0;
}*/
//11、有1、2、3、4四个数字，能组成多少个互不相同且无重复数字的三位数（循环）
/*#include <stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int k = 0;
	int count = 0;
	for (i = 1; i <= 4; ++i)
	{
		for (j = 1; j <= 4; ++j)
		{
			for (k = 1; k <= 4; ++k)
			{
				if ((i != j) && (i != k) && (j != k))
				{
					count++;
					printf("%d%d%d\n",i,j,k);
				}
			}
		}
	}
	printf("总共有%d个\n",count);
	return 0;
}*/
//12、输出2000年以前所有的闰年以及闰年的个数（闰年规则）
//四年一闰   百年不闰   四百年再闰
/*#include <stdio.h>
int main()
{
	int count = 0;
	for (int i = 1; i <= 2000; i++)
	{
		if (((i % 4 == 0) && (i % 100 != 0))|| ((i % 4 == 0) && (i % 400 == 0)))
		{
			count++;
			printf(" %d ", i);
		}
	}
	printf("共有%d个闰年\n", count);
	return 0;
}*/
//13、有一个分数数列：2/1,3/2,5/3,8/5,13/8,21/13...求出此序列前n项和
/*#include <stdio.h>

double CountSum(int n)
{
	int  k=0;
	double sum = 0, i = 2, j = 1;
	for (int t = 1; t <= n; ++t)
	{
		sum += i / j;
		k = i;
		i = j + i;
		j = k;
	}
	return sum;
}
int main()
{
	int n = 0;
	printf("请输入n值->");
	scanf_s("%d",&n);
	double ret = CountSum(n);
	printf("前n项之和为：%lf\n",ret);
	return 0;
}*/
//14、S=a+aa+aaa+aaaa+aaaaa，求S的值（共有5个数相加）
/*#include <stdio.h>

int Count(int n)
{
	int sum = n;
	int tmp = n;
	for (int i = 0; i < 4; ++i)
	{
		 tmp = tmp * 10 + n;
		sum +=tmp;
	}
	return sum;
}

int main()
{
	int a = 0;
	printf("请输入一个数->");
	scanf_s("%d",&a);
	int ret = Count(a);
	printf("和为：%d\n",ret);
	return 0;
}*/
//15、一个球从100米高度落下，每次落地后反弹回原高度的一半，再落下，求它在第10次落地时共经过多少米？第10次反弹多高？
/*#include <stdio.h>

double Meter(double x, int y)
{
	double sum = x;
	while (y>1)
	{
		sum += 2 * (x / 2);
		x = x / 2;
		y--;
	}
	return sum;
}

double High(double x, int y)
{
	double h = x;
	int i = 1;
	while (i<=y)
	{
		h /= 2;
		i++;
	}
	return h;
}

int main()
{
	double m =0;
	int n =0;
	printf("请输入高度—>");
	scanf_s("%lf",&m);
	printf("第几次落地？");
	scanf_s("%d",&n);
	double ret1 = Meter(m, n);
	printf("共经过%lf米\n",ret1);
	double ret2=High(m,n);
	printf("最后一次反弹%lf米\n",ret2);
	return 0;
}*/