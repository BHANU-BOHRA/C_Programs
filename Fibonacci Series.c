#include<stdio.h>
void main()
{
	int n,i,f,s,t;
	printf("\nEnter the Number of Terms You want in Fibonacci Series : ");
	scanf("%d",&n);
	printf("\nFibonacci Series : ");
	f=1;
	s=i=0;
	while(i<n)
	{
		if(i<=1)printf("%d ",i);
		else
		{
			printf("%d ",f+s);
			t=f;
			f=f+s;
			s=t;
		}
		i++;
	}
}
