#include<stdio.h>
int sum(int n)
{
	if(n==1)
	{
		return 1;
		
	}
	else
	{
		return n*sum(n-1);
	}
}
int main()
{
	int n;
	printf("Enter the Number :");
	scanf("%d",&n);
	int res=sum(n);
	printf("%d ",res);
}