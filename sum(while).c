#include<stdio.h>
void main()
{
	int i=1,s=0,n;
	printf("\nEnter a Number : ");
	scanf("%d",&n);
	while(i<=n)
	{
		s+=i;
		i++;
	}
	printf("\nSum of No. From 1 to %d = %d",n,s);
}
