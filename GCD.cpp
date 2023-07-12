#include<stdio.h>
int GCD(int n1,int n2)
{
	if(n1==0)
	return n2;
	if(n2==0)
	return n1;
	if(n1>n2)
	return GCD(n1%n2,n2);
	else
	return GCD(n1,n2%n1);
}
int main()
{
	int num1,num2;
	printf("Enter two NUmbers :");
	scanf("%d %d",&num1,&num2);
	int res=GCD(num1,num2);
	printf("The GCD of %d and %d is %d",num1,num2,res);
}