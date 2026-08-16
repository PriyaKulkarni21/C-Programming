//WAp to print the string of the two dimensional character arrray
#include<stdio.h>
#include<string.h>
int main()
{
	int i,len,n;
	printf("enetr the size of  the string");
	scanf("%d", &n);
	printf("enetr the lenggth of  the string");
	scanf("%d", &len);
	char str[n][len];
	for(i=0;i<n;i++)
	{
		printf("enetr the string");
		scanf("%s", str[i]);
	}
	printf("given arrray of string is\n");
 	for(i=0;i<n;i++)
	{
		printf("%s,\n ", str[i]);
	}
}
 