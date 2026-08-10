//WAP to sort array in ascending order
//WAP to reverse an array
#include<stdio.h>
int main()
{
        int size, i,j, temp;
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
        printf("ascending order of array is");
        for(i=0;i<size;i++)
	{
	 for(j=i+1;j<size;j++)
	 {
		 if(arr[i]>arr[j])
		 {
			 temp=arr[i];
			 arr[i]=arr[j];
			 arr[j]=temp;
		 }
	 }
	}
	printf("given sorted array is");
        for(int i=0;i<size;i++)
        {
                printf("%d ", arr[i]);
        }

}
