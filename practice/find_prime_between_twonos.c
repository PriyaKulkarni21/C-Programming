#include<stdio.h>
int findprime(int n1, int n2);
int isprime(int n1);
int main()
{
	int n1,n2;
	printf("enter 2 numbers");//to find the prime numbers between these two numbers
	scanf("%d %d", &n1, &n2);
	findprime( n1, n2);
	isprime(n1);
}
int isprime(int n1)
{
	for(int i=2;i<n1; i++)
	{
		if(n1%i==0)
			return 0;
	}
	return 1;
}
int findprime(int n1, int n2)

{	
	printf("prime numbers are:");
	for(int i=n1; i<n2;i++)
	{
		if(isprime(i))
				printf("  %d\n", i);
	}
}

