//Input and output string using gets and puts
#include<stdio.h>
int main()
{
	int size;
	printf("enter the size of the  string ");
	scanf("%d", &size);
	getchar();
	char str[size];
	printf("enter a string");
	gets(str);
	puts(str);
}