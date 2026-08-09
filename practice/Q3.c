//swapping of to numbers without using third variable
#include<stdio.h>
int main()
{
	int a=2;
	int b=3;
	printf("before swapping a=%d, b=%d", a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf(" after swapping a=%d, b=%d", a,b);
}


