#include<stdio.h>
int a(int m,int n)
{
	if(m==0)
	{
		return n+1;
	}
	else if(n==0)
	{
		return a(m-1,1);
	}
	else return a(m-1,a(m,n-1));
}
void main()
{
	int x,y;
	printf("\nEnter the First Number  : ");
	scanf("%d",&x);
	printf("\nEnter the Second Number : ");
	scanf("%d",&y);
	printf("\nResult : %d",a(x,y));
}
