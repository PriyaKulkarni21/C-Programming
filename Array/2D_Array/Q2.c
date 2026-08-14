//WAP to print pascal triangle 
#include<stdio.h>
int main()
{
	int max=10;
 	int arr[max][max];
	int i,j,n;
	printf("enter the n");
	scanf("%d",  &n);
	for(i=0;i<=n;i++)
	{
		for(j=0; j<=i; j++)
		{
			if(j==0 || i==j)
				arr[i][j]=1;
			else
				arr[i][j]=arr[i-1][j-1]+ arr[i-1][j];
		}
	}
	for(i=0;i<=n;i++)
	{
		for(j=0; j<=i; j++)
		{
			printf("%d", arr[i][j]); 
		}printf("\n");
	}
}