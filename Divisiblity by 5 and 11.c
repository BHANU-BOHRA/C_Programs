#include<stdio.h>
void main()
{
	int n;
	printf("\nEnter the Number : ");
	scanf("%d",&n);
	if(n%5)
	{
		if(n%11)printf("\n%d is Nither Divisble to 5 Nor to 11",n);
		else printf("\n%d is Divisible 11 but Not by 5",n);
	}
	else if(n%11)
	{
		if(n%5)printf("\n%d is Nither Divisble to 5 Nor to 11",n);
		else printf("\n%d is Divisible 5 but Not by 11",n);
	}
	else printf("\n%d is Divisible by Both 5 and 11",n);
}
