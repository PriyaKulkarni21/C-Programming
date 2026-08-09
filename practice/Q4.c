//swappping of two numbers using third variable
#include<stdio.h>
int main()
{
	int a=2; 
	int b=3;
	printf("before swapping a=%d, b=%d", a,b);

	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("after swapping a=%d, b=%d", a,b);
}

