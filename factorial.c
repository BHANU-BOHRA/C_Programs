#include<stdio.h>
void main()
{
	int n,t,f=1;
	printf("\nEnter the Number : ");
	scanf("%d",&n);
	t=n;
	while(t!=0)
	{
		f=f*t;
		t--;
	}
	printf("\n\nFactorial of %d is %d",n,f);
}
