//1������Ļ�����Hello Word!
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

//2������1��100�ĺͣ�ѭ����
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

//3����ӡ9*9�˷��ھ���ѭ����
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

//4�������������Ľϴ�ֵ����֧�жϣ�
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
	printf("����������������");
	scanf_s("%d %d",&a,&b);
	int ret = Max2(a, b);
	printf("�����нϴ���ǣ�%d\n",ret);
	return 0;
}*/

//5����10�������е����ֵ��ѭ����
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
	printf("��10�����������ǣ�%d\n",ret);
	return 0;
}*/
//6����1-100֮�������
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
	printf("����%d������\n", k);
	return 0;
}*/
//7�����������������Լ����շת�����
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
	printf("��������������->");
	scanf_s("%d %d",&a,&b);
	int ret = GreatDiv(a, b);
	printf("�������������Լ��Ϊ��%d",ret);
	return 0;
}*/
//8����������������С������(�������Լ��)
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
	printf("��������������->");
	scanf_s("%d %d", &a, &b);
	int ret = LestMultiple(a, b);
	printf("������������С������Ϊ��%d", ret);
	return 0;
}*/
//9����������������ֵ
/*#include <stdio.h>
int main()
{
	int a, b;
	printf("��������������->");
	scanf_s("%d %d",&a,&b);
	int tmp = a;
	a = b;
	b = tmp;
	printf("������Ľ��Ϊ��%d %d",a,b);
	return 0;
}*/
//10����дһ�������������Ĺ����ǽ�����������ֵ
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
	printf("������������->");
	scanf_s("%d %d",&a,&b);
	Swap(&a,&b);
	printf("������Ľ��Ϊ��%d %d",a,b);
	return 0;
}*/