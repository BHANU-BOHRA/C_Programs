#include<stdio.h>
void main()
{
	int n,i=1,s=0;
	printf("\nEnter the Number till You want the Series of Sum of Natural Numbers : ");
	scanf("%d",&n);
	while(i<=n)
	{
		s=s+i;
		i++;
	}
	printf("\nSum of Natural Numbers till %d is %d",n,s);
}
