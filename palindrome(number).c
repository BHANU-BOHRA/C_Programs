#include<stdio.h>
void main()
{
	int n,t,r,s=0;
	printf("\nEnter the Number : ");
	scanf("%d",&n);
	t=n;
	while(t!=0)
	{
		r=t%10;
		s=s*10+r;
		t=t/10;
	}
	if(s==n)
	{
		printf("\n\n%d is a Palindrome",n);
	}
	else
	{
		printf("\n\n%d is not a Palindrome",n);
	}
}
