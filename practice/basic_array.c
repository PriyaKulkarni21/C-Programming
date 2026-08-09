#include<stdio.h>
int main()
{
	int size;
	
	printf("enter the size of the array");
	scanf("%d", &size);
	int arr[size];
	for(int i=0; i<size;i++)
	{
		printf("enter the %d element of an array", i);
		scanf("%d", &arr[i]);

	}
	printf("elemts of the array are:\n");
	for(int i =0;i<size; i++)
	{
		printf("\nthe elemnts of the array are:  arr[%d]:%d",i, arr[i]);
	}
}

