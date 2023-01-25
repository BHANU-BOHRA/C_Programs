#include<stdio.h>
int fact(int n)
{
	int f;
	if(n==0||n==1)
	{
		return 1;
	}
	else
	{
		f=n*fact(n-1);
		return f;
	}
}
void main()
{
	int n;
	printf("\nEnter the Number : ");
	scanf("%d",&n);
	printf("\nFactorial of %d : %d",n,fact(n));
}
