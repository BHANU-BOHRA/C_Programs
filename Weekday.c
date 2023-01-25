#include<stdio.h>
void main()
{
	int n;
	printf("\nEnter Week Number : ");
	scanf("%d",&n);
	if(n==1)printf("\nMonday");
	else if(n==2)printf("\nTuesday");
	else if(n==3)printf("\nWednesday");
	else if(n==4)printf("\nThrusday");
	else if(n==5)printf("\nFriday");
	else if(n==6)printf("\nSaturday");
	else if(n==7)printf("\nSunday");
	else printf("\nInvalid Input");
}
