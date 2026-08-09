#include<stdio.h>
int main()
{
        int size;
	int even=0, odd=0;

        printf("enter the size of the array");
        scanf("%d", &size);
        int arr[size];
        for(int i=0; i<size;i++)
        {
                printf("enter the %d element of an array", i);
                scanf("%d", &arr[i]);
		if(arr[i]%2==0)
			even++;
		else
			odd++;

        }
	printf("even no count is %d and odd no count is %d\n", even , odd);
        printf("elemts of the array are:\n");
        for(int i =0;i<size; i++)
        {
                printf("\nthe elemnts of the array are:  arr[%d]:%d",i, arr[i]);
        }
}


