//WAp Bineary search of an array
#include<stdio.h>
int binsearch(int arr[], int start,int end,int ele,int size);
int main()
{
	int size,i,j,ele,start,end;
	printf("enter the size of the array");
	scanf("%d", &size);
	int arr[size];

	for(i=0;i<size;i++)
	{
		printf("enter the %d element of the array ", i);
		scanf("%d", &arr[i]);
	}printf("given array is\n");
	for(i=0;i<size;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("enetr the element to search in the array");
	scanf("%d", &ele);
	int index= binsearch(arr,start,end,ele,size);
	printf("%d is at %d index", ele,index);
}
int binsearch(int arr[], int start,int end,int ele,int size)
{
	int mid;
	start=0;
	end=size-1;
	while(end>=start)
	{
			int mid= start+ (end-start)/2;
	
		if(arr[mid]==ele)
			{return mid;}
		else if(arr[mid]>ele)
			end=mid-1;
		else
			start=mid+1;
	}
}

	
 