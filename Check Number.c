#include<stdio.h>
void main()
{
	int n;
	printf("\nEnter the Number : ");
	scanf("%d",&n);
	if(n>0)printf("\n%d is Positive",n);
	else if(n<0)printf("\n%d is Negative",n);
	else printf("\nThe Number is Zero");
}
