#include <stdio.h>
#include "test.h"

/*
void test() {
    printf("Hello test file\n");
}
*/

/*
//C语言linux一起学
void test(int argc, char **argv){
//	unsigned int AHB1ENR = 0x00;
//	unsigned int b = 0x01;
//	AHB1ENR |= b << 3;
//	printf("AHB1ENR = %d\n", AHB1ENR);
	
	unsigned int a = 0x5a8c7f2d;
	unsigned char b;
//	int c = a >> 8;
//	b = *(char *)&c;
	b = *((char *)&a + 2);
	printf("b = 0x%x\n", b);	
	
//	int num = 1;
//	printf("num = %d\n", num);	
*/


//鹏哥C语言27
void test(){
	
//	printf("int %d", sizeof(int));
//	printf("char %d", sizeof(char));
//	printf("float %d", sizeof(float));
//	printf("double %d", sizeof(double));

	//int ch = '\0';
/*
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch > '9')
				continue;

		fflush(stdin);
		putchar(ch);
	}	
*/

/*
	int year  = 0;
	int month = 0;
    int date  = 0;

	printf("请输入初始日期，例如20130225\n");
	scanf("%4d%2d%2d", &year, &month, &date);
	
	printf("year:%d\n", year);
	printf("month:%02d\n", month);
	printf("date:%02d\n", date);
*/

/*
	int   num  = 0;
	float sub1 = 0.0f;
	float sub2 = 0.0f;
	float sub3 = 0.0f;

	printf("请输入数据格式如 124324;xx.xx,xx.xx,xx.xx\n");
	scanf("%d;%f,%f,%f", &num, &sub1, &sub2, &sub3);

	printf("The each subject score of No. ");
	printf("%d is %.2f, %.2f, %.2f\n", num, sub1, sub2, sub3);
*/

/*	//-------鹏哥36
	//查找数组元素
	//输入数组 & 需要查找的数据
	int n[] = {1,2,3,4,5,6,7,8,9,10};
	int c = 7;
	
	//计算最大循环次数
	int num = sizeof(n) / sizeof(n[0]);
	int num1 = 0;
	do
	{
		num /= 2;
		num1++;
	}
	while(num != 0);
	printf("最大循环次数：%d\n", num1);

	//定义左右端点,mid
	int l = 0;
	int r = sizeof(n) / sizeof(n[0]);
	int m = num / 2;

	for (int i = 0; i <= num1; i++)
	{
		if (n[m] < c)
		{
			l = m + 1;		
		}
		else if (n[m] > c)
		{
			r = m - 1;
		}
		else 
		{
			printf("找到了，下标为：%d\n", m);
			break;
		}
		
		m = (l + r) / 2;
		
		if (i == num1)
			printf("没有\n");
	}
*/
/*
	//鹏哥37
	char a[] = "hello world!!!!";
	char b[] = "xxxxxxxxxxxxxxx";

	int left = 0;
	int right = sizeof(a) / sizeof(a[0]) - 2;
	// int right = strlen(a) - 1;

	while (left <= right)
	{
		b[left] = a[left];
		b[right] = a[right];

		printf("%s\n", b);
		
		left++;
		right--;
	}	
*/
/*	
	//密码登录3次
	int a = 123;
	int b = 0;

	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &b);
		if (b == a )
		{
			printf("密码正确\n");
			break;
		}
		if (i < 2)
			printf("密码错误重新输入\n");
	}
	
	printf("密码错误3次\n");
*/

	/*
	int a = 0;
	printf("输入1-100随机数\n");
	scanf("%d", &a);

	int left = 0;
	int right = 100;

	int temp = 50;

	while(left <= right)
	{
		if (temp < a)
		{
			left = temp + 1;
			printf("值是 %d 小了\n", temp);
		}
		else if (temp > a)
		{
			right = temp - 1;
			printf("值是 %d 大了\n", temp);
		}
		else
		{
			printf("找到了,值是 %d\n", temp);
			break;
		}
		temp = (left + right) / 2;
	}
	*/

	return;

}

