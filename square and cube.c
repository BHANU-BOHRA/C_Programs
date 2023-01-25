#include<stdio.h>
int sq(int n)
{
	int sq;
	sq=n*n;
	return sq;
}
int cb(int n)
{
	int c;
	c=n*n*n;
	return c;
}
void main()
{
	int n,s,c;
	printf("\nEnter the Number : ");
	scanf("%d",&n);
	s=sq(n);
	c=cb(n);
	printf("\nSquare of %d = %d\n\nCube of %d = %d",n,s,n,c);
}
