//WAP to print 2D array, sum of 2 arrays and multiplication of 2 arrays. 

#include<stdio.h>
int main()
{
	int i,j,k;
	int rows1,columns1, rows2,columns2, rows,columns;
	//int mat1[rows1][columns1];
	//int mat2[rows2][columns2];
	//int mat3[rows3][columns3];
	printf("enter the no of rows and  colums for 1st matrix");
	scanf("%d %d", &rows1,&columns1);
	int mat1[rows1][columns1];

	printf("enter the no of rows and  colums for 2nd matrix");
	scanf("%d %d", &rows2,&columns2);
	int mat2[rows2][columns2];


	int mat3[rows1][columns1];
	int mat4[rows1][columns2];

	printf("enter the elements of the 1st matrix\n");
	for(i=0;i<rows1;i++)
	{
		for(j=0;j<columns1;j++)
		{
			printf("enter the %d rows and %d column element", i,j);
			scanf("%d", &mat1[i][j]);
		}
	}
	printf("matrix 1 is\n");
	for(i=0;i<rows1;i++)
	{
		for(j=0;j<columns1;j++)
		{
			printf("%d ", mat1[i][j]);
		}printf("\n");
	}

	printf("enter the elements of the 2nd matrix\n");
	for(i=0;i<rows2;i++)
	{
		for(j=0;j<columns2;j++)
		{
			printf("enter the %d rows and %d column element", i,j);
			scanf("%d", &mat2[i][j]);
		}
	}
	printf("matrix 2 is\n");
	for(i=0;i<rows2;i++)
	{
		for(j=0;j<columns2;j++)
		{
			printf("%d ", mat2[i][j]);
		}printf("\n");
	}
	
	printf("sum of 1st and 2nd matrix is\n");
	for(i=0;i<rows1;i++)
	{
		for(j=0;j<columns1;j++)
		{
			mat3[i][j]= mat1[i][j]+mat2[i][j];
			printf("%d ", mat3[i][j]);
		}printf("\n");
	}
	
	printf("multiplication of 1st and 2nd matrix is\n");
	for(i=0;i<rows1;i++)
	{
		for(j=0;j<columns1;j++)
		{
			for(int k=0;k<columns1;k++)
				{	
					mat4[i][j]=0;
					mat4[i][j]+= mat1[i][k]*mat2[k][j];
					//printf("%d ", mat4[i][j]);
				}
		}printf("\n");
	}
	for(i=0;i<rows1;i++)
	{
		for(j=0;j<columns1;j++)
				{	
					
					printf("%d ", mat4[i][j]);
				}
		printf("\n");
	}


			

			
}
			

