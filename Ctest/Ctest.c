#define _CRT_SECURE_NO_WARNINGS 1
//��̷��ǿC���ԡ���ϰ
//��һ��
//��1.1������Ļ�����  This is a C program
//#include <stdio.h>//#include��ָ��ѿ⺯�����ò�ʹ��
//int main()//int��ʾ�����ķ���ֵ���������ͣ�main�Ǻ��������ơ�������������
//{
//	printf("This is a C program.\n");//�ֺű�ʾ������
//	return 0;//����ִ�����ʱ���غ���ֵ0�����ص����ú�����
//}
//��1.2������������֮��
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = a + b;
//	printf("sum=%d\n",sum);
//	return 0;
//}
//������������֮��
//#include <stdio.h>
//int main()
//{
//	int a, b,sum;
//	printf("�����룺");
//	scanf_s("%d %d",&a,&b);
//	printf("sum=%d\n",a+b);
//	return 0;
//}
//��1.3�����������������еĽϴ���
//#include <stdio.h>
//int main()
//{
//	int a, b,max;
//	printf("�����룺");
//	scanf_s("%d %d",&a,&b);
//	if (a > b)
//	{
//		max = a;
//	}
//	else
//	{
//		max = b;
//	}
//	printf("max=%d\n",max);
//	return 0;
//}
//������װһ���Ƚ���������������С�ĺ���
//int Max(int a, int b)
//{
//	int max = 0;
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	return max;
//}
//#include <stdio.h>
//int main()
//{
//	int ret=0;
//	ret = Max(30,10);
//	printf("max=%d\n",ret);
//	return 0;
//}
//��һ�¿κ�ϰ��
//ϰ��5���������⣬��дһ��C�������������Ϣ
//******************************
//V e r y  g o o d!
//******************************
//#include <stdio.h>
//int main()
//{
//	printf("******************************\n");
//	printf("V e r y  g o o d!\n");
//	printf("******************************\n");
//	return 0;
//}
//ϰ��6����дһ����������a,b,c����ֵ��������е������
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	int max = 0;
//	printf("��������������");
//	scanf_s("%d %d %d",&a,&b,&c);
//	if (a < b)
//	{
//		int tmp = a; a = b; b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a; a = c; c = tmp;
//	}
//	max = a;
//	printf("max=%d\n",max);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	printf("��������������");
//	scanf_s("%d %d %d",&a,&b,&c);
//	int max = a;
//	if (max < b)
//		max = b;
//	if (max < c)
//		max = c;
//	printf("max=%d\n",max);
//	return 0;
//}
//������װһ������
//int Max(int a, int b, int c)
//{
//	int max = a;
//	if (max < b)
//		max = b;
//	if (max < c)
//		max = c;
//	return max;
//}
//#include <stdio.h>
//int main()
//{
//	int x = 0, y = 0, z = 0;
//	printf("��������������");
//	scanf_s("%d %d %d",&x,&y,&z);
//	int max = Max(x,y,z);
//	printf("max=%d\n",max);
//	return 0;
//}
//ϰ��7�����г�������ע�͵ķ������������н��������ע�͵��÷���
//#include <stdio.h>
//int main()
//{
//	printf("How do you do!\n"); //������ע�ͣ�ע�ͷ�Χ��//�������з�ֹ
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("How do you do!\n"); /*���ǿ�ע��*/
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("How do you do!\n"); /*���ǿ�ע�ͣ����ڱ�����д���꣬��������һ�м���д���ⲿ�����ݾ�������Ŀ�����*/
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	//printf("How do you do!\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("//How do you do!\n");//��������ַ����м���//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	/*printf("How do you do!\n");
//	return 0;*/
//}
//�ڶ���
//��2.1 ��1*2*3*4*5
//#include <stdio.h>
//int main()
//{
//	int p = 1, i = 0;
//	for (i = 2; i <=5; i++)
//	{
//		p *= i;
//	}
//	printf("���Ϊ��%d\n",p);
//	return 0;
//}
//�� 1*3*5*7*9*11��ֵ
//#include <stdio.h>
//int main()
//{
//	int p = 1, i = 0;
//	for (i = 3; i <= 11; i += 2)
//	{
//		p *= i;
//	}
//	printf("���Ϊ��%d\n",p);
//	return 0;
//}
//��չ����n�Ľ׳�
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int p = 1;
//	int n = 0;
//	printf("��������ֵ��");
//	scanf_s("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		p *= i;
//	}
//	printf("n�Ľ׳�Ϊ��%d\n",p);
//	return 0;
//}

//��2.2 ��50��ѧ����Ҫ������ɼ���80�����ϵ�ѧ����ѧ�źͳɼ�
//#include <stdio.h>
//int main()
//{
//	int i = 0;//i����ѧ����Ŀ��ȡֵ��ΧΪ1-50
//	int g = 0;//g����ѧ���ĳɼ�
//	int n = 0;//n����ѧ����ѧ��
//	for (i = 1; i <= 50; i++)
//	{
//		if (g > 80)
//			printf("%d %d\n",n,g);
//	}
//	return 0;
//}
//��2.3 �ж�2000-2500���е�ÿһ���Ƿ�Ϊ���꣬����������
//����һ��
//#include <stdio.h>
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 2000; year <= 2500; year++)
//	{
//		if (0 == year % 4)
//		{
//			if (0 != year % 100)
//			{
//				count++;
//				printf("%d  ", year);
//			}
//				
//		}
//		if (0 == year % 400)
//		{
//			printf("%d  ", year);
//			count++;
//		}
//	}
//	printf("count=%d", count);
//	return 0;
//}
//��������
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 2000; i <= 2500; i++)
//	{
//		if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0))
//		{
//			count++;
//			printf("%d  ", i);
//		}	
//	}
//	printf("count=%d",count);
//	return 0;
//}
//��2.4 ��1-1/2+1/3-1/4+...+1/99-1/100��ֵ
//#include <stdio.h>
//int main()
//{
//	int sign = 1;//sign�������
//	double sum = 1.0, deno = 2.0, term;//sum�����������ĺ�,deno����ǰ�ķ�ĸ
//	for (deno = 2; deno <= 100; deno++)
//	{
//		sign = (-1)*sign;
//		term = sign*(1 / deno);
//		sum += term;
//	}
//	printf("sum=%1f\n",sum);
//}
//��2.5 ����һ�����ڻ����3�����������ж����ǲ���һ������
//#include <math.h>
//int Judge_sushu(int num)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(num); i++)
//	{
//		if (num%i == 0)
//		{
//			return 0;
//		}
//		return 1;
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	printf("������һ������3������");
//	scanf_s("%d",&n);
//	int ret = Judge_sushu(n);
//	if (0 == ret)
//	{
//		printf("����������\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}
//	return 0;
//}
//ϰ��2-4��1�� ������ƿ��A��B���ֱ�ʢ�Ŵ׺ͽ��ͣ�Ҫ�����ǻ���
//void swap(int *pa, int *pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(&a, &b);
//	printf("a=%d b=%d\n",a,b);
//	return 0;
//}
//ϰ��2-4��2�� ���ν�10�������룬Ҫ���������������
//int Max(int a, int b, int c, int d, int e, int f, int g, int h, int i,int j)
//{
//	int max = a;
//	if (max < b)
//		max = b;
//	if (max < c)
//		max = c;
//	if (max < d)
//		max = d;
//	if (max < e)
//		max = e;
//	if (max < f)
//		max = f;
//	if (max < g)
//		max = g;
//	if (max < h)
//		max = h;
//	if (max < i)
//		max = i;
//	if (max < j)
//		max = j;
//	return max;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0;
//	printf("������10������");
//	scanf_s("%d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
//	int ret = Max(a, b, c, d, e, f, g, h, i, j);
//	printf("max=%d\n",ret);
//	return 0;
//}
//ϰ��2-4��3����������a,b,c,Ҫ�󰴴�С˳����������
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	printf("��������������");
//	scanf_s("%d %d %d",&a,&b,&c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("��С˳��Ϊ��%d %d %d\n",a,b,c);
//	return 0;
//}
//ϰ��2-4��4����1+2+3+4+...+100�ǵ�ֵ
//int Sum(int n)
//{
//	int i=0,sum=0;
//	for (i = 1; i <= n; i++)
//	{
//		sum += i;
//	}
//	return sum;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	printf("������һ�����֣�");
//	scanf("%d",&n);
//	int ret = Sum(n);
//	printf("�ܺ�Ϊ��%d\n",ret);
//}
//ϰ��2-4��5���ж�һ�����ܷ�ͬʱ��m��n����
//int Judge(int i,int x,int y)
//{
//	if ((x%i == 0) && (y%i == 0))
//	{
//		return 1;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i=0, m = 0, n = 0;
//	printf("������һ�����жϵ���������ԭ���ݣ�");
//	scanf("%d %d %d",&i,&m,&n);
//	int ret = Judge(i,m, n);
//	if (1 == ret)
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}
//	return 0;
//}
//ϰ��2-4��6����100-200֮����������
//#include <math.h>
//int Print_sushu(int x,int y)
//{
//	int i ;
//	for (i = x; i <= y; i++)
//	{
//		int j = 0;
//		int k = sqrt(i);
//		for (j = 2; j <= k; j++)
//			if (i%j == 0)
//				return 0;//��������
//			if (j>=k+1)
//          return i;
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int m = 0, n = 0;
//	printf("�����뷶Χ��");
//	scanf("%d %d",&m,&n);
//	int ret = Print_sushu(m,n);
//	if (0 == ret)
//	{
//		printf("�÷�Χ��û��������\n");
//	}
//	else
//		printf("�÷�Χ�ڵ������У�%d  \n",ret);
//	return 0;
//}
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i;
//	for (i = 100; i <= 200; i ++)
//	{
//		int m = 0;
//		int k = sqrt(i);
//		for (m = 2; m <= k; m++)
//		{
//			if (i%m == 0)
//				break;
//		}
//			if (m >= k + 1)
//				printf("%d  ", i);
//	}
//	printf("\n");
//	return 0;
//}
//ϰ��2-4��7���������������Լ��(շת�����)
//#include <stdio.h>
//
//int GCM(int x, int y)
//{
//	int t=x%y;
//	int ret=0;
//	if (t == 0)
//		return y;
//	else
//	{
//		while (t != 0)
//		{
//			ret = t;
//			t = x%y;
//			x = y;
//			y = t;
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("��������������");
//	scanf("%d", &a);
//	scanf("%d", &b);
//	int ret = GCM(a, b);
//	printf("���Լ��Ϊ��%d\n", ret);
//	return 0;
//}
//��3.1  �����¶�ת��Ϊ�����¶�
//#include <stdio.h>
//int main()
//{
//	float f = 64;
//	float c = 0.0;
//	printf("������һ�������¶ȣ�");
//	scanf_s("%f",&f);
//	//5.0����д��5
//	c = (5.0/ 9)*(f - 32);
//	printf("�û����¶�ת����������¶�Ϊ��%f\n",c);
//	return 0;
//}
//��3.2  ������Ϣ
//#include <stdio.h>
//int main()
//{
//	//a�Ǳ���b�ǻ���һ�걾��ͣ�c�Ƕ���һ�걾��ͣ�d�����ΰ��궨�ڵı����
//	float a, b , c , d ;
//	//r1�ǻ���һ���������
//	//r2�Ƕ���һ���������
//	//r3�ǻ������ΰ��궨�ڵ�������
//	float r1 = 0.0036, r2 = 0.0225, r3 = 0.0198;
//	printf("�����뱾��");
//	scanf_s("%f",&a);
//	b = a*(1 + r1);
//	c = a*(1 + r2);
//	d = a*(1 + (r3) / 2)*(1 + (r3) / 2);
//	printf("����һ��ı����Ϊ��%f\n",b);
//	printf("����һ��ı����Ϊ��%f\n", c);
//	printf("���ΰ��궨�ڵı����Ϊ��%f\n", d);
//	return 0;
//}
//�������ͼ��С����1
//#include <stdio.h>
//int main()
//{
//	 unsigned char c= 222;
//	printf("%d:%c\n",c,c);
//	return 0;
//}
//�������ͼ��С����2
//#include <stdio.h>
//int main()
//{
//	 unsigned short s = -3;
//	printf("%d\n",s);
//	return 0;
//}
//����һ����д��ĸ����Сд��ĸ���
//#include <stdio.h>
//int main()
//{
//
//	char c;
//	printf("������һ����д��ĸ��");
//	scanf_s("%c", &c);
//	printf("�ô�д��ĸ��Ӧ��Сд��ĸΪ��%c\n",c+32);
//	return 0;
//}
//99�˷��ھ���
//#include <stdio.h>
//int main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d   ", j, i, j*i);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//�ж��ҵı��������ڸ������߼���λ����������λ
//#include <stdio.h>
//int main()
//{
//	int a = -9;
//	printf("%d\n",a>>3);
//	return 0;
//}
//����һ�����Ķ�������1�ĸ���
//#include <stdio.h>
//int Count_One_Num1(unsigned value)
//{
//	int count = 0;
//	for (int n = 0; n <= 31; n++)
//	{
//		if (value & 1 << n)
//			count++;
//	}
//	return count;
//}

//int Count_One_Num2(unsigned value)
//{
//	int count = 0;
//	for (; value != 0; value >>= 1)
//	{
//		if (value % 2 != 0)
//			count++;
//	}
//	return count;
//}

//int Count_One_Num3(unsigned value)
//{
//	int count = 0;
//	for (; value != 0; value >>= 1)
//	{
//		if ((value &1) != 0)
//			count++;
//	}
//	return count;
//}

//int main()
//{
//	unsigned int value = 0;
//	printf("������һ������");
//	scanf_s("%d",&value);
//    int ret = Count_One_Num3(value);
//	printf("��������1�ĸ���Ϊ��%d\n",ret);
//}
