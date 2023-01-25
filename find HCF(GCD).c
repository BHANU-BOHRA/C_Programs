#include<stdio.h>
void main()
{
	int n1,n2,h,d,r;
	printf("\nEnter the First Number  : ");
	scanf("%d",&n1);
	printf("\nEnter the Second Number : ");
	scanf("%d",&n2);
	if(n1==n2)printf("\nHCF(GCD) = %d",n1);
	else
	{
		if(n1>n2)
	    {
		    h=n2;
	 	    d=n1;
	    }
	    else
	    {
		    h=n1;
		    d=n2;
	    }
	    r=d%h;
	    while(r)
	    {
		    d=h;
		    h=r;
		    r=d%h;
	    }
	    printf("\n\nHCF(GCD) = %d",h);
	}
}
