#include<stdio.h>
int Decimal(int num)
{
	if(num==0)
	return 0;
	else
	{
		return(num%2+10*Decimal(num/2));
	}
}
int main()
{
	int num;
	printf("Enter a Number  :");
	scanf("%d",&num);
	printf("The decimal number %d to Binary is %d",num,Decimal(num));
}