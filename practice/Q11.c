//WAP to reverse an array
#include<stdio.h>
int main()
{
	int size;
	printf("enter the size of the array");
	scanf("%d", &size);
	int arr[size];
	int ele;
	for(int i=0;i<size;i++)
	{
		printf("enter the %d element of the array", i);
		scanf("%d", &arr[i]);
	}
	printf("given array is");
	for(int i=0;i<size;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("reverse array is");
	for(int i=size-1; i>=0;i--)
	{
		printf("%d ",arr[i]);
	}	
}


