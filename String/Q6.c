//strcmp fun
#include<stdio.h>
#include<string.h>
int main()
{
	int size;
	printf("enter the size of the  string 1");
	scanf("%d", &size);
	char str1[size];
	char str2[40];
	printf("\nenter a string");
	scanf("%s" , str1);
	printf("\nyou have entered %s ", str1);
	printf("\nenter 2nd string");
	scanf("%s", str2);
	printf("\nu have entered %s", str2);


	if(strcmp(str1,str2)==0)
		printf("\nboth strings are same");
	else
		printf("\nboth strings are not same");
}