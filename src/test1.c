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

//
void test1()
{

return;
}
