//WAP to reverse the given no
#include<stdio.h>
int main()
{
	int no;
	printf("enetr the no");
	scanf("%d", &no);
	int temp=no;
	printf("original no is %d", temp);
	int rev=0;
	while(no!=0)
	{
		int rem;
		
		rem=no%10;
		rev= rev*10+rem;
		no=no/10;
	}
	printf("\nreverse no is %d", rev);

}
