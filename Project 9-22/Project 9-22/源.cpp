#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>


//��֪������������������������Լ��

int main()
{
	int m = 0;
	int n = 0;
	int r = 0;
	scanf(" %d %d", &m, &n);
	if (m < n)
	{
		printf("���������룡\n");
		scanf(" %d %d", &m, &n);
	}
	//շת�����
	while (m % n)
	{
		r = m % n;
		m = n;
		n = r;
	}
	printf("%d\n", n);
	return 0;
}

//���1-100����3�ı���

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

//�Ӵ�С�������ֵ

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	//a�з����ֵ
//	//b��֮
//	//c�з���Сֵ
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


//��ϰ:���ַ�����

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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�����\n");
//	}
//	return 0;
//}

//��ϰ����д���룬��ʾ����ַ��������ƶ������м���

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

//��ϰ��ģ��һ�����������û������������룬���������ξ�����������˳�����

//int main()
//{
//	int i = 0;
//	char code[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺>\n");
//		scanf("%s", code);
//		if (strcmp(code, "123456") == 0)
//		{
//			printf("������ȷ��\n");
//			break;
//		}
//		else
//		{
//			printf("�����������������\n");
//		}
//		if (i == 3)
//		{
//			printf("���������������˳�����\n");
//		}
//	}
//	return 0;
//}