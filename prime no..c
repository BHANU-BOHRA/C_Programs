#include<stdio.h>
#include<math.h>
void main()
{
	int n,i;
	printf("\nEnter the Number : ");
	scanf("%d",&n);
	for(i=2;i<=sqrt(n)&&n%i!=0;i++);
	if(i>sqrt(n))printf("\n%d is a Prime Number",n);
	else printf("\n%d is not a Prime Number",n);
}
