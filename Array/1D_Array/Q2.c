//WAp to reverse the elements of the array
#include<stdio.h>
int linearsearch(int arr[],int size,int ele);
int main()
{
	int size,i,j,ele;
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
	printf("enter the elements to search in the array");
	scanf("%d", &ele);
	linearsearch(arr,size,ele);

			
}
int linearsearch(int arr[],int size,int ele)
{
	printf("element found at index ");
	for(int i=0;i<size;i++)
	{	if(ele==arr[i])
			{
				printf("%d",i);
		
			}
		else
			i++;
	}
}
