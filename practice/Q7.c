//WAP tp calculate factorial of a number
#include<stdio.h>
int main()
{
	int no;
	printf("enter a number");
	scanf("%d", &no);
	int fact=1;
	for(int i=1;i<=no;i++)
	{
		fact=fact*i;
	}
	printf("factorial of a given no is:%d", fact);
}
