#include<stdio.h>
void main()
{
	int e,g;
	printf("\nEnter the Total Expenditure : ");
	scanf("%d",&e);
	printf("\nEnter the Total Amount Earned : ");
	scanf("%d",&g);
	if((g-e)>0)printf("\nYou had Profit of %d",g-e);
	else if((g-e)<0)printf("\nYou had Loss of %d",e-g);
	else printf("\nNo Profit , No Loss");
}
