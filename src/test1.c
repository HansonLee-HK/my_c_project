#include <stdio.h>
#include "test1.h"

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

