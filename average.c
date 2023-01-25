#include<stdio.h>
float avg(int a,int b,int c)
{
	return (float)(a+b+c)/3;
}
void main()
{
	int a,b,c;
	printf("\nEnter 1st Number : ");
	scanf("%d",&a);
	printf("\nEnter 2nd Number : ");
	scanf("%d",&b);
	printf("\nEnter 3rd Number : ");
	scanf("%d",&c);
	printf("\nAverage = %.2f",avg(a,b,c));
}
