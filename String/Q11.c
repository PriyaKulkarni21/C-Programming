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
	int len=strlen(str);
	printf("length=%d", strlen(str));
	printf("\nreverse string is ");
	for(int i=strlen(str)-1; i>=0;i--)
	{
		printf("\n%c", str[i]);
	}
	int is_palindrome=1;
	for(int i=0; i<len;i--)
	{

		if(str[i]!=str[len-1-i])		
			is_palindrome=0;	
			break;
	}
		
	if(is_palindrome)
		printf("palindrome");

	else
		printf("not palindrome");

}