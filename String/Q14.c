//WAp to search character  in the string and count the occurence of the element and replace the character by another character
#include<stdio.h>
#include<string.h>
int count(char *str, char ch);
int replace(char *str, char ch1, char ch2);
int main()
{
	char ch,ch1,ch2;
	 char str[30];
	strcpy(str, "hello dosto kaise ho?");
	puts(str);
	count(str, 'o');
	replace(str, 'o', 'z');	
	puts(str);
}
int count(char *str, char ch)
{int count=0;
	while(*str!='\0')
	{
		if(*str==ch)
		{
			count++;
		}str++;
	}printf("the %c occurs %d times", ch, count);
}
int replace(char *str, char ch1, char ch2)
{
	while(*str!='\0')
	{
		if(*str==ch1)
			*str=ch2;
		str++;
	}
}


 