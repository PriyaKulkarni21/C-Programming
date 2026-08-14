//sum of numbers in a digit

#include<stdio.h>
int sum(int n);

int main()
{
	int n;
	printf("enter the number");
	scanf("%d", &n);
	printf("the sum is %d", sum(n));
}
int sum(int n)
{	
	//rem= n%10;
	//n=n/10;
	if(n==0)
		return 0;
	else
		return(n%10+sum(n/10));

}


