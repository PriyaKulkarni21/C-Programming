#include<stdio.h>
int main()
{
        int size;

        printf("enter the size of the array");
        scanf("%d", &size);
        int arr[size];
	int sum=0;
        for(int i=0; i<size;i++)
        {
                printf("enter the %d element of an array", i);
                scanf("%d", &arr[i]);
		
                sum= sum+arr[i];
        }
	printf("\n The sum of array elements is%d\n", sum);

        printf("elemts of the array are:\n");
        for(int i =0;i<size; i++)
	{
                printf("\nthe elemnts of the array are:  arr[%d]:%d",i, arr[i]);
	}

}



