//Input and output string using scanf and printf
#include<stdio.h>
int main()
{
	int size;
	printf("enter the size of the  string ");
	scanf("%d", &size);
	char str[size];
	printf("enter a string");
	scanf("%s" , str);
	printf("you have entered %s ", str);
}