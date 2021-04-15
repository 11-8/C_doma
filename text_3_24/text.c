#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//																		输入三个数 按从大到小排列。
//int main()
//{
//	int a, b, c,x;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a<b)
//	{
//		x = a;
//		a = b;
//		b = x;
//	}
//	if (a < c)
//	{
//		x = a;
//		a = c;
//		c = x;
//	}
//	if (b < c)
//	{
//		x = b;
//		b = c;
//		c = x;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0; 
//}

//#include<stdio.h>															1到100 三的倍数；
//
//int main()
//{
//	int i =0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//
//}
//#include <stdio.h>//															分数求和
//int main()
//{
//	int i=1;
//	float sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += 1.0 / i * flag;
//		flag *= -1;
//	}
//	printf("%f", sum);
//	return 0;
//}
//																			求两个数的最大公约数

//#include <stdio.h>
//int main()
//{
//	int a, b;
//	int tmp = 0;
//	scanf("%d %d", &a, &b);
//	while(a % b)
//	{
//		tmp = a % b;
//		a = b;
//		b = tmp;
//	}
//	printf("最大公约数是:%d", b);
//	return 0;
//
//}
//																			打印闰年
//#include<stdio.h>
//int main()
//{
//	int i = 1000;
//	for (i = 1000; i <= 2000; i++)
//		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//			printf("%d ", i);
//	return 0;
//
//}
//																		打印素数
//#include<stdio.h>
//int main()
//{
//	int i;
//	for (i = 100; i <= 200; i++)
//	{
//		int j;
//		for (j = 2; j <= i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if(i==j)
//			printf("%d ", i);
//	}
//}
//														 求1到100有9的数
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 10 == 9)
//			printf("%d ", i);
//		if (i / 10 == 9)
//			printf("%d ",i);
//	}
//	return 0;
//
//}
//													 求是十个数的最大值
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int zf = sizeof(arr) / sizeof(arr[0]);
//	int i = 1;
//	for (i = 1; i < zf; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//
//}
//													打印99乘法口诀
//#include<stdio.h>
//int main()
//{
//	int j = 1, i = 1;
//	for (i = 1; i <=9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			int m;
//			m = i * j;
//			printf("%d*%d=%-2d ", i, j, m);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//#include<math.h>
//int main()
//{
//    int a, b, c;
//    while (1)
//    {
//        scanf("%d%d%d", &a, &b, &c);
//        if ((a + b > c) && (a + c > b) && (b + c > a))
//        {
//            float k, s;
//                k = (a + b + c) / 2.0;
//                s = sqrt(k * (k - a) * (k - b) * (k - c));
//                printf("%.2f", s);
//                return 0;
//        }
//        printf("输入错误，请重新输入\n");
//    }
//}


#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[] = { 0 };
    int  i, a, b;
    for (i = 0; i < n; i++)
    {
        scanf("%d%d", &a, &b);
        arr[i] = a + b;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}