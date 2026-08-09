//print a fullpyramid
//           *
//          ***
//         *****
//        *******
//       *********
#include<stdio.h>

int main()
{
	int i,j;
	int rows, columns;
	printf("enter the no of rows and columns");
	scanf("%d %d", &rows, &columns);


	for(i=0;i<rows;i++)
	{
		
	//	for(j=i; j<=rows*2 ;j++)
	//	{
	//		if(j<rows)
	//			printf(" ");
	//		else
	//			printf("*");
	//	}
		for(j=i; rows-i<=j>=rows+i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

        
}




