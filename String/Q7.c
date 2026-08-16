//strcpy
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
	strcpy(str2,str1);
	printf("\nu have copied str1 in str2  %s", str2);

}