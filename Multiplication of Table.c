#include<stdio.h>
void main()
{
	int n,i;
	printf("\nEnter a Number to Print Table : ");
	scanf("%d",&n);
	for(i=1;i<=10;i++)printf("\n%d x %d = %d",n,i,n*i);
}
