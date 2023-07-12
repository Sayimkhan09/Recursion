#include<stdio.h>
int Binary(int num)
{
	if(num==0)
	{
		return 0;
	}
	else
	{
		return(num%10 +2 *Binary(num/10));
	}
}
int main()
{
	int num;
	printf("Enter Binary Number : ");
	scanf("%d",&num);
	printf("The Binary %d to Decimal %d",num,Binary(num));
}