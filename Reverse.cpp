#include<stdio.h>
int rem, reverse_digit=0;
int reverse(int num)
{
//	int rem, reverse_digit=0;
	if(num>0)
	{
		rem=num%10;
		reverse_digit=reverse_digit*10+rem;
		reverse(num/10);
	}
	else
	return reverse_digit;
	return reverse_digit;
}
int main()
{
	int num;
	printf("Enter a Number whose Reverse you want to find : ");
	scanf("%d",&num);
	int res=reverse(num);
	printf("%d reverse is %d",num,res);
}