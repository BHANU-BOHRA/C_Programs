#include<stdio.h>
void main()
{
	int n,t,r,c,s=0;
	printf("\nEnter the Number : ");
	scanf("%d",&n);
	t=n;
	while(t!=0)
	{
		r=t%10;
		c=r*r*r;
		s=s+c;
		t=t/10;
	}
	if(s==n)
	{
		printf("\n\n%d is an Armstrong Number",n);
	}
	else
	{
		printf("\n\n%d is not an Armstrong Number",n);
	}
}
