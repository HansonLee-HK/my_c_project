#include <stdio.h>
#include "test.h"

/*
void test() {
    printf("Hello test file\n");
}
*/

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
	
	
	
	
	
	
	
	
	
	
	
	
	

	return 0;

}
