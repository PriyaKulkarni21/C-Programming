//WAP to convert the binary no into decimal no
#include<stdio.h>
int main()
{
	int no=11011;
	int dec=0;
	int a=1;
	
	while(no!=0)
	{
		dec= dec+(no%10)*a;
		no=no/10;
		a=a*2;
	}
	printf("%d", dec);
}
