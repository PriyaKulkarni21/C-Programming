//find the length using strlen
#include<stdio.h>
#include<string.h>

int main()
{
	int size;
	printf("enter the size of the  string ");
	scanf("%d", &size);
	char str[size];
	printf("enter a string");
	scanf("%s" , str);
	printf("you have entered %s ", str);
	printf("length=%d", strlen(str));

}