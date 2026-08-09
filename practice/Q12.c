//WAp to print maximum and minimum elemment in the array

#include<stdio.h>
int main()
{
        int size;
        printf("enter the size of the array");
        scanf("%d", &size);
        int arr[size];
        int ele;
	int min=arr[0];
	int max=arr[0];
	int i;
        for(i=0;i<size;i++)
        {
                printf("enter the %d element of the array", i);
                scanf("%d", &arr[i]);
        }
        printf("given array is");
        for( i=0;i<size;i++)
        {
                printf("%d ", arr[i]);
        }
        printf("\nmin and max  element are:");
	for(i=0; i<size;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("max=%d \n min=%d", max,min);

}


