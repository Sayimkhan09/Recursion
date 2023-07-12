#include<stdio.h>
int Fab(int num)
{
	if(num==1 || num==0)
	{
		return num;
	}
	else{
		return Fab(num-1)+Fab(num-2);
	}
}
int main()
{
	int num;
	printf("Enter a Number :");
	scanf("%d",&num);
	for(int i=num;i>=1;i--)
	{
		printf("%d",Fab(i));
	}
}