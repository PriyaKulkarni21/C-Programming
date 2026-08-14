//WAP to calculate GCD of a no
#include<stdio.h>
int GCD(int a, int b);
int main()
{
	int a,b;
	printf("enter the two numbers");
	scanf("%d %d", &a,&b);
	printf(" GCD is %d",GCD(a,b));
}
int GCD(int a,int b)
{
	
	 if(b==0)
		return a;
	return GCD(b, a%b);
}