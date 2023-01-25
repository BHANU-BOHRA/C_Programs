#include<stdio.h>
void main()
{
	int n,f,t;
	printf("\nEnter a Number to find Factorial : ");
	scanf("%d",&n);
	for(f=1,t=n;t>1;t--)f*=t;
	printf("\nFactorial of %d is %d",n,f);
}
