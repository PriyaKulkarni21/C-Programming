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
	printf("given arrray of string before sorting is\n");
 	for(i=0;i<n;i++)
	{
		printf("%s,\n ", str[i]);
	}
	char temp[len];
	int j;
	for(i=0;i<n;i++)
	{	
		for(j=i+1;j<n;j++)
		{
			if(strcmp(str[i],str[j])>0)
			{
				strcpy(temp,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],temp);
			}
		}
	}
	printf("given arrray of string after sorting is\n");
	for(i=0;i<n;i++)
	{
		printf("%s,\n ", str[i]);
	}


}
 