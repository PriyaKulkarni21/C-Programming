//WAP to print characters of the string and address of each character using pointer
#include<stdio.h>
int main()
{
	char str[]="Priya";
	int i=1;
	char *p;
	p=str;

	while(*p!='\0')
	{
		printf("%d character= %c ",i, *p );
		printf("Address=%p\n", p);
		p++;
		i++;
	}
} 