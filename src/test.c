#include <stdio.h>
#include "test.h"

/*
void test() {
    printf("Hello test file\n");
}
*/

/*
//一起学C语言。。。
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


void test(){
	int num = 0;
	
	for (int i = 0; i < 100; i++)
	{
		if (i % 2 == 1)
		{
			printf("%d\t", i);
		}
	}
	printf("\n");



	return 0;

}
