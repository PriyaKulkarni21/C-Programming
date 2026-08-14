//prime factorization of a given no
#include<stdio.h>
int PF(int n);
int main()
{
	int n;
	printf("enter te number");
	scanf("%d", &n);

	printf("%d",PF(n));
}
int PF( int n)
{
	int i=2;
	if(n==1)
	return 0;
	while(n%i!=0)
		i++;
	printf("%d",i);
	PF(n/i);

}
	