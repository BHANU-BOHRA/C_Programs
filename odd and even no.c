#include<stdio.h>
void main()
{
	int a,n;
	printf("\nEnter a Number : ");
	scanf("%d",&n);
	printf("\n\nOdd number from 0 to %d are : ",n);
	a=1;
	while(a<=n)
	{
		if(a%2!=0)
		{
			printf("%d ",a);
		}
		a++;
	}
	printf("\n\nEven number from 0 to %d are : ",n);
	a=2;
	while(a<=n)
	{
		if(a%2==0)
		{
			printf("%d ",a);
		}
		a++;
	}
}
