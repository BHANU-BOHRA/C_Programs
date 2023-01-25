#include<stdio.h>
void main()
{
	int n,r,t,s=0;
	printf("\nEnter a Number : ");
	scanf("%d",&n);
	
	for(t=n;t!=0;t=t/10)
	{
		r=t%10;
		s=s+r;
	}
	printf("\n\nSum of Digits of the Number is = %d",s);
}
