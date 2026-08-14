// selection sort
#include<stdio.h>
int selection(int arr[],int size);
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
 
	selection(arr,size);
	printf("sorted array is ");
	for(i=0;i<size;i++)
	{
		printf("%d ", arr[i]);
	}

	
} 
int selection(int arr[],int size)
{
	for(int i=0;i<size-1;i++)
	{
		int min=i;
		for(int j=i+1;j<=size;j++)
			{
				if (arr[min]>arr[j])
				{	
					min=j;
				}
			}
					int temp;
					temp=arr[i];
					arr[i]=arr[min];
					arr[min]=temp;
				
			
	}
}