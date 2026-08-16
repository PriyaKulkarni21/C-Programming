//WAP to accept the string from user with spaces and  write fun to reverse the string and another fun to rev some portion of string
#include<stdio.h>
#include<string.h>
void revstr(char str[]);
void  revportion(char str[],int start,int end); 
int main()
{
	char str[100];
	strcpy(str, "Hello guys, how are you?");
	puts(str);
	revstr(  str);
	puts(str);
	revportion( str, 1, 3);
	puts(str);

}

void revportion( char str[], int start,int end)
{
	while(start<=end)
		{
			char temp;
			temp=str[start];
			str[start]=str[end];
			str[end]=temp;
			start++;
			end--;
		}
	
}
void revstr(char str[])
{
	revportion( str, 0, strlen(str)-1);

}
