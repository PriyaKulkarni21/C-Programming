//sum of numbers from 1 to n

#include<stdio.h>
int sum(int n);
int main()
{
	int n;
	printf("enter the numbers upto u have to print sum of numbers");
	scanf("%d", &n);
	printf("the sum is %d", sum(n));
}
int sum(int n)
{
	if(n==0)
		return 0;
	else
		return(n+sum(n-1));
}


