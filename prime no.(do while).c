#include<stdio.h>
#include<math.h>
void main()
{
	int n,i=1;
	printf("\nEnter the Number : ");
	scanf("%d",&n);
	do
	{
		i++;
	}while(i<=sqrt(n)&&n%i!=0);
	if(i>sqrt(n))printf("\n%d is a Prime Number",n);
	else printf("\n%d is not a Prime Number",n);
}
