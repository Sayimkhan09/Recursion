#include<stdio.h>
int power(int base,int exp)
{
	if(exp==0)
	return 1;
	else
	{
		return base*power(base,exp-1);
	}
}
int main()
{
	int base,exp;
	printf("Enter the base Number : ");
	scanf("%d",&base);
	printf("Enter Exponent Number : ");
	scanf("%d",&exp);
	printf("The POwer of Base %d and exp %d is %d",base,exp,power(base,exp));
}