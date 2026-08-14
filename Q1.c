
//WAP for the factorial of a no
#include<stdio.h>
int fact(int n);
int main()
{
	int n;
	printf("enter the no");
	scanf("%d", &n);
	printf("factorial is %d", fact(n));
}
int fact(int n)
{
	if(n==0)
		return 1;
	else
		return(n* fact(n-1));
} 

	