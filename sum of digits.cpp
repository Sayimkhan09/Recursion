#include<stdio.h>
int sum_digit(int num)
{
	if(num==0)
	{
		return num;
	}
	else
	{
		return (num%10)+sum_digit(num/10);
	}
}
int main()
{
	int num;
	printf("Enter the NUmber :");
	scanf("%d",&num);
	int res=sum_digit(num);
	printf("%d",res);
}