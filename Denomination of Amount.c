#include<stdio.h>
void main()
{
	int i=0,a,n[10]={2000,500,200,100,50,20,10,5,2,1};
	printf("\nEnter the Amount : ");
	scanf("%d",&a);
	printf("\nDenomination of Amount\n\n Notes\n");
	while(i<11)
	{
		printf("\n%d * %d = %d",a/n[i],n[i],(a/n[i])*n[i]);
		a=a%n[i];
		if(i==6)printf("\n\n Coins\n");
		i++;
	}
}
