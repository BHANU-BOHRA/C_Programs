#include<stdio.h>
int fs(int n)
{
	int t;
	if(n<2)
	{
		return n;
	}
    else
    {
    	t=fs(n-2)+fs(n-1);
    	return t;
    }
}
void main()
{
	int n,i,s=0;
	printf("\nEnter the Number of Terms to print in Fibonacci Series : ");
	scanf("%d",&n);
	printf("\nFibonacci Series : ");
	for(i=0;i<n;i++)
	{
		printf("%d ",fs(i));
		s+=fs(i);
	}
	printf("\n\nSum of Fibonacci Series : %d",s);
}
