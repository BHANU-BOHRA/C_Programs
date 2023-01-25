#include<stdio.h>
void main()
{
	int i=1,s=0,n;
	printf("\nEnter a Number : ");
	scanf("%d",&n);
	while(i<11)
	{
		s+=i*n;
		i++;
	}
	printf("\nSum of Multiplication table of %d = %d",n,s);
}
