#include<stdio.h>
int reverse(int num);

int main()
{
	int num;
	printf("enter the number:");
	scanf("%d", &num);
	reverse(num);
	return 0;

}
int reverse(int num)
{
	int n,rev=0;
	while(num>0)
	{
		n= num%10;// to write whole no like for the no 432, 1st remainder is 4 then 3 t we have to take whole no as 43 so multiply first rem ie 4 by 10 and then add 3 as q remainder
		rev= rev*10+n;
		num =num/10;
	}
	printf("reverse no is %d", rev);


}
