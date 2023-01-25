#include<stdio.h>
void main()
{
	int n1,n2,h,d,r;
	printf("\nEnter the First Number  : ");
	scanf("%d",&n1);
	printf("\nEnter the Second Number : ");
	scanf("%d",&n2);
	if(n1==n2)h=n1;
	else if(n1>n2)
	{
		for(d=n1,h=n2,r=d%h;r;r=d%h)
	    {
	    	d=h;
	    	h=r;
	    }
	}
	else
	{
		for(d=n2,h=n1,r=d%h;r;r=d%h)
	    {
	    	d=h;
	    	h=r;
	    }
	}
	printf("\nGCD of %d and %d is %d",n1,n2,h);
}
