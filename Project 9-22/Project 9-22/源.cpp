#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>


//已知两个数，求出这两个数的最大公约数

int main()
{
	int m = 0;
	int n = 0;
	int r = 0;
	scanf(" %d %d", &m, &n);
	if (m < n)
	{
		printf("请重新输入！\n");
		scanf(" %d %d", &m, &n);
	}
	//辗转相除法
	while (m % n)
	{
		r = m % n;
		m = n;
		n = r;
	}
	printf("%d\n", n);
	return 0;
}

//求出1-100所有3的倍数

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

//从大到小输出三个值

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	//a中放最大值
//	//b次之
//	//c中放最小值
//	if (a < b)
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)
//	{
//		int temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)
//	{
//		int temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}


//复习:二分法查找

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (k - 1 > mid)
//		{
//			left = mid + 1;
//		}
//		else if (k - 1 < mid)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到了\n");
//	}
//	return 0;
//}

//复习：编写代码，演示多个字符从两端移动，向中间汇聚

//int main()
//{
//	char arr1[] = "Glory Glory Man United";
//	char arr2[] = "######################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		Sleep(250);
//		system("cls");
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//复习：模拟一个场景：让用户输入三次密码，若输入三次均密码错误，则退出程序

//int main()
//{
//	int i = 0;
//	char code[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：>\n");
//		scanf("%s", code);
//		if (strcmp(code, "123456") == 0)
//		{
//			printf("密码正确！\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入\n");
//		}
//		if (i == 3)
//		{
//			printf("多次输入密码错误，退出程序\n");
//		}
//	}
//	return 0;
//}