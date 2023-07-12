#include<stdio.h>
int n_number(int n)
{
	printf("%d",n);
	if(n>1)
	{
		return n_number(n-1);
	}
	return n;
}
int main()
{
	int num;
	printf("Enter a number :");
	scanf("%d",&num);
	n_number(num);
	
}