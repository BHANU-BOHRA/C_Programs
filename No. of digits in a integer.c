#include<stdio.h>
void main()
{
	int n,t,c=0;
	printf("\nEnter the Number : ");
	scanf("%d",&n);
	t=n;
	while(t)
	{
		t=t/10;
		c++;
	}
	printf("\nNumber of Digits in %d : %d",n,c);
}
