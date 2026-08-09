//print the  square of given no of stars(given no of stars is 5)
//*****
//*****
//*****
//*****
//*****
#include<stdio.h>
int main()
{
	int no;
	printf("enter the no to print the starts");
	scanf("%d", &no);
	for (int i=0; i<=no-1;i++)
	{
		for(int j=0;j<=no-1;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}




