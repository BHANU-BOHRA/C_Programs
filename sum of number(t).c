#include<stdio.h>
void main()
{
	int i,n,s,r=0;
	printf("\nEnter the First Number  : ");
	for(scanf("%d",&n);n>0;r=n%10,s+=r,n/=10);
	printf("\nSum of Digits = %d",s);
}
