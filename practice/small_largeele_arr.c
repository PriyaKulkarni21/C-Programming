#include<stdio.h>
int main()
{
        int size;

        printf("enter the size of the aray:");
        scanf("%d", &size);
	int arr[size];

        for(int i=0; i<size;i++)
        {
                printf("enter the %d element of an array", i);
                scanf("%d", &arr[i]);
	}
	int small=arr[0];
        int large=arr[0];

	for(int i=0; i<size;i++)
	{
		if(small>arr[i])
			small=arr[i];
		if(large<arr[i])
			large=arr[i];

        }
        printf("small and large elemets of the array are: %d %d \n", small , large);
        
}

