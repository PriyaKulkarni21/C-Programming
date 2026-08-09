//check whether given no is prime or not
#include<stdio.h>
int main()

{
	int a;
	int count=0;
	printf("enter a number");
	scanf("%d", &a);
	if(a==1)
		printf("the no is  nor prime nor composite");
	for(int i=2; i<a; i++)
	{
		if(a%i==0)
			count++;
		
	}
	for(int i=2; i<a; i++)
	{

		if(count==0)
			printf("the no is prime");
	
		else
			printf("the no is not prime");
	}

	
	
}
