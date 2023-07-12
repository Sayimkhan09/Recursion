#include<stdio.h>
//#include<conio.h>
int LCM(int num, int num1)
{
	int m=0;
	m=m+num1;
	if(m%num==0 && m%num1==0)
	{
		return m;
		
	}
	return LCM(num,num1);
}
int main()
{
	int num1,num2;
	printf("ENter the Number : ");
	scanf("%d",&num1);
	printf("ENter the Number : ");
	scanf("%d",&num2);
	printf("LCM = %d",LCM(num1,num2));
}