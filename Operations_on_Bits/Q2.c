//WAP to set the bits

#include<stdio.h>
#include<stdio.h>
unsigned char conv_binary(unsigned char reg);
int main()
{
	unsigned char reg=0x00;
	int bit=3;
	conv_binary(reg);
	reg=reg | (1<<bit);
	printf("after set ");
	conv_binary(reg);


}

unsigned char conv_binary(unsigned char reg)
{
	for(int i=8;i>=1;i--)
	{
		printf("%d", (reg>>i)&1);
	}
}
	
	
