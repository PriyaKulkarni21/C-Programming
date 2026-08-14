//Bubble sort
#include<stdio.h>
int bubble(int arr[],int size);
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
 
	bubble(arr,size);
	printf("sorted array is ");
	for(i=0;i<size;i++)
	{
		printf("%d ", arr[i]);
	}

	
} 
int bubble(int arr[],int size)
{
	for(int i=0;i<size-1;i++)
	{
		for(int j=0;j<=size-i-1;j++)
			{
				if (arr[j]>arr[j+1])
				{	
					int temp;
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
			}
	}
}