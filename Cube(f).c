#include<stdio.h>
int cb(long long int a)
{
	return a*a*a;
}
void main()
{
	long long int n;
	printf("\nEnter a Number : ");
	scanf("%d",&n);
	printf("\nCube of %d = %d",n,cb(n));
}
