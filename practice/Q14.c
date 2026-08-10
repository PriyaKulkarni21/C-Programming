//WAP to  check wheteeher given no is armstrong no or not

#include<stdio.h>
#include<math.h>

int main()
{
	int n, i, a,j, sum=0, count=0;
	printf("enetr the no");
	scanf("%d", &n);
	int org_num=n;
	while(n!=0)
	{
		count++;
		n=n/10;
	}
	n=org_num;

	while(n!=0)
	{
		int rem=n%10;
		sum= sum+ pow(rem, count);
		n=n/10;
	}
	printf("%d", sum);


	if(sum==org_num)
	printf("given no is armstrong no");
	
	else
	printf("given no is not armstrong no");



}
