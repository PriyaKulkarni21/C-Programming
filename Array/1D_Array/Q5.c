//insertion sort
#include<stdio.h>
int insertion(int arr[],int size);
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
 
	insertion(arr,size);
	printf("sorted array is ");
	for(i=0;i<size;i++)
	{
		printf("%d ", arr[i]);
	}

	
} 
int insertion(int arr[],int size)
{
	for(int i=0;i<size-1;i++)
	{
		for(int j=i+1;j<=size;j++)
			{
				if (arr[i]>arr[j])
				{	
					int temp;
					temp=arr[j];
					arr[j]=arr[i];
					arr[i]=temp;
				}
			}
	}
}