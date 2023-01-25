#include<stdio.h>
void main()
{
	int i=1,s=0,n;
	printf("\nEnter a Number : ");
	scanf("%d",&n);
	do
	{
		s+=i;
		i++;
	}while(i<=n);
	printf("\nSum of No. From 1 to %d = %d",n,s);
}
