//find the largest  no among three numbers
#include<stdio.h>
int main()
{
	int a=5,b=6,c=7;
	if(a>b && a>c)
		printf("%d is largest no", a);
	else if(b>a && b>c)
		printf("%d is larrgest no", b);
	else
		printf("%d is largest no", c);
}
