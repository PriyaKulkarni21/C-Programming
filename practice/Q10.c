//WAP to print natural numbers till n and odd and even no
#include<stdio.h>
int main()
{
	int n;
	printf("how many natural nos u eant to dispay?");
	scanf("%d", &n);
	for(int i=1; i<=n; i++)
	{
		printf("%d ", i);
	}
	printf("\neven no are");

	for(int i=1; i<=n;i++)
	{
			if(i%2==0)
				printf("%d ", i);
	}
	printf("\nodd no are");
	for(int i=1;i<=n;i++)
	{
		if(i%2==1)
			printf("%d ", i);
	}

	

}
