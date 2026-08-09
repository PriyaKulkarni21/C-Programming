#include<stdio.h>
int sum(int num);

int main()
{
	int num;
	printf("enter the number:");
	scanf("%d", &num);
	sum(num);
}
int sum(int num)
{
	int n,no, s=0;
	while(num>0)
	{
	 	n=num%10;
		num= num/10;
		s= s + n;
	}
	printf("The Sum of digits is%d", s);
	return s;
}









