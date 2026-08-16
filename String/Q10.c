//WAP to print string and  print it in reverse order

#include<stdio.h>
#include<string.h>

int main()
{
	int size;
	printf("enter the size of the  string ");
	scanf("%d", &size);
	char str[size+1];
	printf("enter a string ");
	scanf("%s" , str);
	printf("you have entered %s ", str);
	printf("length=%d", strlen(str));
	printf("\nreverse string is");
	for(int i=strlen(str)-1; i>=0;i--)
	{
		printf("%c", str[i]);
	}
				


}