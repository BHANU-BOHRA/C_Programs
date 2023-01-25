#include<stdio.h>
int oe(int n)
{
	if(n==0)return -1;
	return n%2;
}
void main()
{
	int n;
	printf("\nEnter the Number : ");
	scanf("%d",&n);
	if(oe(n)==-1)printf("\nYou Entered Zero");
	else if(oe(n))printf("\n%d is Odd",n);
	else printf("\n%d is Even",n);
}
