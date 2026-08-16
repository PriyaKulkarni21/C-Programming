//WAP to reverse the letters in the word of a string 
#include<stdio.h>
#include<string.h>
void rev_letters(char str[]);
int main()
{
	int len,i,j;
	char str[50]=" Hello guys, Namaste!";
	puts(str);
	rev_letters(str);
	puts(str);
}
void rev_letters(char str[])
{
	int start=0;
	int end;
	char temp;
	for(int i=0;i<=strlen(str);i++)
	{
		if(str[i]==' ' ||  str[i]=='\0')
		{
			end=i-1;
		
			while(start<end)
			{
				temp=str[start];
				str[start]=str[end];
				str[end]=temp;
				start++;
				end--;
			}
		//if(str[i]=='\0')
		//	break;
			start=i+1;
		}
	}
}
