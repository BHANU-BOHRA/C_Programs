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
	if(n==d)printf("\n%d is a Palindrome",n);
	else printf("\n%d is not a Palindrome",n);
}
