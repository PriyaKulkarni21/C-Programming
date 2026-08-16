//WAP to print characters of the string and address of each character
#include<stdio.h>
int main()
{
	char str[]="Priya";
	int i;
	for(i=0; str[i]!='\0';i++)
	{
		printf("%d character= %c ",i+1, str[i] );
		printf("Address=%p\n", &str[i]);
	}
} 