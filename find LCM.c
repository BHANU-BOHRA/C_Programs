#include<stdio.h>
void main()
{
	int n1,n2,h,d,r,l;
	printf("\nEnter the First Number  : ");
	scanf("%d",&n1);
	printf("\nEnter the Second Number : ");
	scanf("%d",&n2);
	if(n1==n2)printf("\nLCM = %d",n1);
	else if(n1>n2)
	{
		h=n1;
		d=n2;
	}
	else
	{
		h=n2;
		d=n1;
	}
	r=d%h;
	while(r)
	{
		d=h;
		h=r;
		r=d%h;
	}
	l=n1*n2/h;
	printf("\n\nLCM = %d",l);
}
