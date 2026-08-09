#include<stdio.h>
int isprime(int n);
int main()
{
	int  num;
	printf("enter a number");
	scanf("%d", &num);
	if(isprime(num))
		printf("the no is prime");
	else
		printf("the no is not prime");
}
int isprime(int n)
{
	
	for(int i=2; i<n; i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
	
}
