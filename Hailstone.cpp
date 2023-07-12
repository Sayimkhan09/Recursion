#include<stdio.h>
int Hailstone(int num)
{
	if(num<=1)
	{
		return num;
	}
	if(num%2==0)
	{
		printf("%d",num);
		Hailstone(num/2);
	}
	if(num%2!=0)
	{
		printf("%d",num);
		Hailstone(num*3 +1);
	}
}
int main()
{
	int num;
	printf("Enter the Number : ");
	scanf("%d",&num);
	Hailstone(num);
}