//WAP to print the fibonacci series
#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the no of terms you want ");
	scanf("%d", &n);
	int a;

	int a1=0;
	int a2=1;
	printf("%d, %d  ", a1 , a2);
	a=a1+a2; 
	for(i=3; i<=n;i++)
	{
		printf("%d  ", a);
		a1=a2;
		a2=a;
		a=a1+a2;
	}
	
}



