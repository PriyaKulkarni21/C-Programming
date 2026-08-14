//WAp to reverse the elements of the array
#include<stdio.h>
int main()
{
	int size,i,j;
	printf("enter the size of the array");
	scanf("%d", &size);
	int arr[size];
	for(i=0;i<size;i++)
	{
		printf("enter the %d element of the array ", i);
		scanf("%d", &arr[i]);
	}
	for(i=0;i<size;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("reverse array is");
	for(i=size-1 ;i>=0 ;i--)
	{
		printf("%d ", arr[i]);
	}		
} 