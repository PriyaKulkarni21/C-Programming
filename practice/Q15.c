//find the gcd of given nos
#include<stdio.h>
int main()
{
	int i, n1,n2,gcd, smaller;
	printf("enetr first number");
	scanf("%d", &n1);
	printf("enetr second number");
	scanf("%d", &n2);

	printf("common factors of %d and %d are", n1,n2);
	if(n1>n2)
	{
		 smaller=n2;
	}
	else
	{
		smaller=n1;
	}


	for( i=1;i<=smaller;i++)
	{
		if(n1%i==0 && n2%i==0)
		{
			gcd=i;
		}

	}
	printf("%d",gcd);

}

