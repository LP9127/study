#define _CRT_SECURE_NO_WARNINGS 1
//《谭浩强C语言》练习
//第一章
//例1.1：在屏幕上输出  This is a C program
//#include <stdio.h>//#include是指令，把库函数调用并使用
//int main()//int表示函数的返回值类型是整型，main是函数的名称——“主函数”
//{
//	printf("This is a C program.\n");//分号表示语句结束
//	return 0;//函数执行完毕时返回函数值0，返回到调用函数处
//}
//例1.2：求两个整数之和
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = a + b;
//	printf("sum=%d\n",sum);
//	return 0;
//}
//任意两个整数之和
//#include <stdio.h>
//int main()
//{
//	int a, b,sum;
//	printf("请输入：");
//	scanf_s("%d %d",&a,&b);
//	printf("sum=%d\n",a+b);
//	return 0;
//}
//例1.3：求任意两个整数中的较大者
//#include <stdio.h>
//int main()
//{
//	int a, b,max;
//	printf("请输入：");
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
//单独封装一个比较任意两个整数大小的函数
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
//第一章课后习题
//习题5：参照例题，编写一个C程序，输出以下信息
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
//习题6：编写一个程序，输入a,b,c三个值，输出其中的最大者
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	int max = 0;
//	printf("请输入三个数：");
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
//	printf("请输入三个数：");
//	scanf_s("%d %d %d",&a,&b,&c);
//	int max = a;
//	if (max < b)
//		max = b;
//	if (max < c)
//		max = c;
//	printf("max=%d\n",max);
//	return 0;
//}
//单独封装一个函数
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
//	printf("请输入三个数：");
//	scanf_s("%d %d %d",&x,&y,&z);
//	int max = Max(x,y,z);
//	printf("max=%d\n",max);
//	return 0;
//}
//习题7：运行程序，掌握注释的方法；分析运行结果，掌握注释的用法。
//#include <stdio.h>
//int main()
//{
//	printf("How do you do!\n"); //这是行注释，注释范围从//起，至换行符止
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("How do you do!\n"); /*这是块注释*/
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("How do you do!\n"); /*这是块注释，如在本行内写不完，可以在下一行继续写。这部分内容均不产生目标代码*/
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
//	printf("//How do you do!\n");//在输出的字符串中加入//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	/*printf("How do you do!\n");
//	return 0;*/
//}
//第二章
//例2.1 求1*2*3*4*5
//#include <stdio.h>
//int main()
//{
//	int p = 1, i = 0;
//	for (i = 2; i <=5; i++)
//	{
//		p *= i;
//	}
//	printf("结果为：%d\n",p);
//	return 0;
//}
//求 1*3*5*7*9*11的值
//#include <stdio.h>
//int main()
//{
//	int p = 1, i = 0;
//	for (i = 3; i <= 11; i += 2)
//	{
//		p *= i;
//	}
//	printf("结果为：%d\n",p);
//	return 0;
//}
//拓展：求n的阶乘
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int p = 1;
//	int n = 0;
//	printf("请输入数值：");
//	scanf_s("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		p *= i;
//	}
//	printf("n的阶乘为：%d\n",p);
//	return 0;
//}

//例2.2 有50个学生，要求输出成绩在80分以上的学生的学号和成绩
//#include <stdio.h>
//int main()
//{
//	int i = 0;//i代表学生数目，取值范围为1-50
//	int g = 0;//g代表学生的成绩
//	int n = 0;//n代表学生的学号
//	for (i = 1; i <= 50; i++)
//	{
//		if (g > 80)
//			printf("%d %d\n",n,g);
//	}
//	return 0;
//}
//例2.3 判定2000-2500年中的每一年是否为闰年，并将结果输出
//方案一：
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
//方案二：
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
//例2.4 求1-1/2+1/3-1/4+...+1/99-1/100的值
//#include <stdio.h>
//int main()
//{
//	int sign = 1;//sign代表符号
//	double sum = 1.0, deno = 2.0, term;//sum代表所有数的和,deno代表当前的分母
//	for (deno = 2; deno <= 100; deno++)
//	{
//		sign = (-1)*sign;
//		term = sign*(1 / deno);
//		sum += term;
//	}
//	printf("sum=%1f\n",sum);
//}
//例2.5 给出一个大于或等于3的正整数，判断它是不是一个素数
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
//	printf("请输入一个大于3的数：");
//	scanf_s("%d",&n);
//	int ret = Judge_sushu(n);
//	if (0 == ret)
//	{
//		printf("不是素数！\n");
//	}
//	else
//	{
//		printf("是素数！\n");
//	}
//	return 0;
//}
//习题2-4（1） 有两个瓶子A和B，分别盛放醋和酱油，要求将它们互换
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
//习题2-4（2） 依次将10个数输入，要求输出其中最大的数
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
//	printf("请输入10个数：");
//	scanf_s("%d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
//	int ret = Max(a, b, c, d, e, f, g, h, i, j);
//	printf("max=%d\n",ret);
//	return 0;
//}
//习题2-4（3）有三个数a,b,c,要求按大小顺序把它们输出
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	printf("请输入三个数：");
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
//	printf("大小顺序为：%d %d %d\n",a,b,c);
//	return 0;
//}
//习题2-4（4）求1+2+3+4+...+100是的值
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
//	printf("请输入一个数字：");
//	scanf("%d",&n);
//	int ret = Sum(n);
//	printf("总和为：%d\n",ret);
//}
//习题2-4（5）判断一个数能否同时被m和n整除
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
//	printf("请输入一个被判断的数和两个原数据：");
//	scanf("%d %d %d",&i,&m,&n);
//	int ret = Judge(i,m, n);
//	if (1 == ret)
//	{
//		printf("能整除\n");
//	}
//	else
//	{
//		printf("不能整除\n");
//	}
//	return 0;
//}
//习题2-4（6）将100-200之间的素数输出
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
//				return 0;//不是素数
//			if (j>=k+1)
//          return i;
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int m = 0, n = 0;
//	printf("请输入范围：");
//	scanf("%d %d",&m,&n);
//	int ret = Print_sushu(m,n);
//	if (0 == ret)
//	{
//		printf("该范围内没有素数！\n");
//	}
//	else
//		printf("该范围内的素数有：%d  \n",ret);
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
//习题2-4（7）求两个数的最大公约数(辗转相除法)
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
//	printf("请输入两个数：");
//	scanf("%d", &a);
//	scanf("%d", &b);
//	int ret = GCM(a, b);
//	printf("最大公约数为：%d\n", ret);
//	return 0;
//}
//例3.1  华氏温度转化为摄氏温度
//#include <stdio.h>
//int main()
//{
//	float f = 64;
//	float c = 0.0;
//	printf("请输入一个华氏温度：");
//	scanf_s("%f",&f);
//	//5.0不能写成5
//	c = (5.0/ 9)*(f - 32);
//	printf("该华氏温度转化后的摄氏温度为：%f\n",c);
//	return 0;
//}
//例3.2  计算利息
//#include <stdio.h>
//int main()
//{
//	//a是本金，b是活期一年本金和，c是定期一年本金和，d是两次半年定期的本金和
//	float a, b , c , d ;
//	//r1是活期一年的年利率
//	//r2是定期一年的年利率
//	//r3是活期两次半年定期的年利率
//	float r1 = 0.0036, r2 = 0.0225, r3 = 0.0198;
//	printf("请输入本金：");
//	scanf_s("%f",&a);
//	b = a*(1 + r1);
//	c = a*(1 + r2);
//	d = a*(1 + (r3) / 2)*(1 + (r3) / 2);
//	printf("活期一年的本金和为：%f\n",b);
//	printf("定期一年的本金和为：%f\n", c);
//	printf("两次半年定期的本金和为：%f\n", d);
//	return 0;
//}
//数据类型检测小程序1
//#include <stdio.h>
//int main()
//{
//	 unsigned char c= 222;
//	printf("%d:%c\n",c,c);
//	return 0;
//}
//数据类型检测小程序2
//#include <stdio.h>
//int main()
//{
//	 unsigned short s = -3;
//	printf("%d\n",s);
//	return 0;
//}
//给定一个大写字母，用小写字母输出
//#include <stdio.h>
//int main()
//{
//
//	char c;
//	printf("请输入一个大写字母：");
//	scanf_s("%c", &c);
//	printf("该大写字母对应的小写字母为：%c\n",c+32);
//	return 0;
//}
//99乘法口诀表
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
//判断我的编译器对于负数是逻辑移位还是算术移位
//#include <stdio.h>
//int main()
//{
//	int a = -9;
//	printf("%d\n",a>>3);
//	return 0;
//}
//计算一个数的二进制中1的个数
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
//	printf("请输入一个数：");
//	scanf_s("%d",&value);
//    int ret = Count_One_Num3(value);
//	printf("二进制中1的个数为：%d\n",ret);
//}
