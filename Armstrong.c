#include<stdio.h>
void main()
{
	int n,t,r,s=0;
	printf("\nEnter the Number : ");
	scanf("%d",&n);
	t=n;
	while(t)
	{
		r=t%10;
		s=s+(r*r*r);
		t=t/10;
	}
	if(s==n)printf("\n%d is an Armstrong Number",n);
	else printf("\n%d is not an Armstrong Number",n);
}
