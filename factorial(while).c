#include<stdio.h>
void main()
{
	int n,f=1,t;
	printf("\nEnter a Number to find Factorial : ");
	scanf("%d",&n);
	t=n;
	while(t>1)
	{
		f*=t;
		t--;
	}
	printf("\nFactorial of %d is %d",n,f);
}
