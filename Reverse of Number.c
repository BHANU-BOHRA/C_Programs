#include<stdio.h>
void main()
{
	int n,t,r,d=0;
	printf("\nEnter the Number : ");
	scanf("%d",&n);
	t=n;
	while(t)
	{
		r=t%10;
		d=d*10+r;
		t=t/10;
	}
	printf("\nReverse of %d is %d",n,d);
}
