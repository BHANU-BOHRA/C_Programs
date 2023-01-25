#include<stdio.h>
void main()
{
	int i,s,n;
	printf("\nEnter a Number : ");
	scanf("%d",&n);
	for(i=1,s=0;i<=n;i++)s+=i;
	printf("\nSum of No. From 1 to %d = %d",n,s);
}
