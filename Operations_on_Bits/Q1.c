//WAP to check whether the no is even or odd
#include<stdio.h>
int main()
{
	int num;
	int mask=0x1;
	printf("enter the no");
	scanf("%d", &num);
	if((num&mask)==0)
		printf("the no is even");
	else
		printf("the no is odd");
}	