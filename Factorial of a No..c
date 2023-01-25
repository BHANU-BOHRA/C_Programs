#include<stdio.h>
void main()
{
	int n,i,f=1;
	printf("\nEnter the Number to find Factorinal : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)f=f*i;
	printf("\nFactorial of %d is %d",n,f);
}
