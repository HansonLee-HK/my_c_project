#include <stdio.h>
#include "test1.h"
#include <math.h>

/*
//交换两个数
void change(int *px, int *py){
	int z = 0;
	z = *px;
	*px = *py;
	*py = *px;
}

void test1(){
	int a = 0;
	int b = 0;

	scanf("%d %d", &a, &b);
	printf("交换前%d %d\n", a, b);
	change(&a, &b);
	printf("交换后%d %d\n", a, b);
return;
}
*/

/*
//输出100-200的素数
void test1(){
	
	for(int i = 100; i <= 200; i++)
	{
		int n = 0;

		for(int j = 2; j <= 101; j++){
			if( (i%j == 0) ){
				n++;
				break;
			}
		}
		if (n == 0)
			printf("%d ", i);
	}
	
return;
}
*/

/*
//例如输入12345, 输出1 2 3 4 5
//引入pow求幂函数，CMakefile连接数学函数
void test1(){
	unsigned int num = 0;
	scanf("%u", &num);
	int a = num;
	int n = 0;
	while(a != 0)
	{
		a /= 10;
		n++;
	}
	a = num;
	for(int i = n-1; i >= 0; i--)
	{
		a = a / (int)pow(10,i);
		printf("%d ", a);

		num %= (int)pow(10,i);
		a = num;
	}
	printf("\n");

return;
}
*/

/*
//递归思路 输入12345,输出1 2 3 4 5
//鹏哥视频46 26:36
void print(unsigned int n)
{
	if(n>9)
	{
		print(n/10);
	}
	printf("%d ", n%10);
}

void test1()
{
	unsigned int num = 0;
	scanf("%u", &num);
	print(num);
	printf("\n");	
return;
}
*/

/*
//不允许创建临时变量，求字符串的长度
int my_strlen(char* str)
{
	if (*str == '\0')
	{
		return 0;
	}
	return (1 + my_strlen(str+1));
}

void test1()
{
	char arr[100] = {0};
	scanf("%s", arr);
	int len = my_strlen(arr);	
	printf("%d\n", len);
return;
}
*/

/*
//斐波那契数列 1 1 2 3 5 8 13 21 34...
//如果使用递归会导致运算过大 return fib(n) = fib(n-2)+fib(n-1)
//使用迭代计算
int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 0;

	if(n <= 2)
		return 1;
	else
	{
		for(int i = 2; i < n; i++)
		{
			c = a+b;
			a = b;
			b = c;
		}
		return b;
	}	
}

void test1()
{
	int n = 0;
	scanf("%d", &n);
	int value = fib(n);
	printf("%d\n", value);
}
*/

/*
//鹏哥 作业49 ,输入的数据从大到小输出
//方法一：self排序,找到最大值存下，然后再找下一个最大值……
//void max_min(int* arr_a, int n)
//{
//	int temp = 0;
//	for (int i = 0; i < n; i++){
//		for (int j = i+1; j < n; j++){
//			if (arr_a[i] < arr_a[j]){
//				temp = arr_a[j];
//				arr_a[j] = arr_a[i];
//				arr_a[i] = temp;
//			}
//		}
//	}
//}

//方法二：冒泡法，左右比较
void max_min(int* arr_a, int n){
	for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] < arr[j + 1]) {  // 从大到小
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
	}
}

void test1()
{
    int arr_a[100] = {0};

    int n = 0;
    printf("请输入整数（Ctrl+D 结束）：\n");
    while (scanf("%d", &arr_a[n]) != EOF) {
        n++;
    }
    printf("你输入的整数是：\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr_a[i]);
    }
	printf("\n");
	
    max_min(arr_a, n);
	printf("从大到小排序是：\n");
	for (int i = 0; i < n; i++){
		printf("%d ", arr_a[i]);
	}
	printf("\n");
	 
return;
}
*/

/*
//输入两个数，求两个数的最大公约数
int common(int a, int b){
	int common = 1;
	int temp = 0;
	if (a < b){
		temp = a;
		a = b;
		b = temp;
	}
	for (int i = 1; i <= b; i++){
		if ( (a % i == 0) && (b % i == 0) ){
			common = i;
		}
	}
	return common;
}

void test1(){
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);

	int c = common(a, b);
	printf("最大公约数是：%d\n", c);

return;
}
*/

//
void test1(){

return;
}


