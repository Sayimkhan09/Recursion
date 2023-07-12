#include<stdio.h>
int prime(int num,int count)
{
	if(count==1)
	return 1;
	if(num%count==0)
	return 0;
	else
	return prime(num,count-1);
}
int main()
{
	int num;
	printf("Enter a Number :");
	scanf("%d",&num);
	if (prime(num,num/2))
	{
		printf("The NUmber is Prime ");
	}
	else
	{
		printf("The number is not prime");
	}
}