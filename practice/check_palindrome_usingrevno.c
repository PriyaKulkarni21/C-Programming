#include<stdio.h>
int reverse(int num);
int is_palindrome(int num);

int main()
{
	int num;
	printf("enter the no");
	scanf("%d", &num);
	printf("reverse no is %d", reverse(num));
	is_palindrome(num);
}
int reverse(int num)
{
	int rev=0,n;
	while(num>0)
	{	
		n=num%10;
		rev= rev*10+n;
       		num=num/10;
	}
	return rev;
}
int is_palindrome(int num)
{
	if(num==reverse(num))
	{
		printf("\nno is palindrome");
	}
	else
		printf("\nno is not palindrome");
}

