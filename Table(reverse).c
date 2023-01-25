#include<stdio.h>
void main()
{
	int n,i;
	printf("\nEnter the Number : ");
	scanf("%d",&n);
	printf("\nTable of %d in Reverse-\n\n",n);
	for(i=10;i>0;i--)
	printf("\n%d x %02d = %02d",n,i,n*i);
}
