#include<stdio.h>
void main()
{
	int a,b,*p,*q,t;
	printf("\nEnter the First Number  : ");
	scanf("%d",p=&a);
	printf("\nEnter the Second Number : ");
	scanf("%d",q=&b);
	printf("\nBefore Swap a = %d  b = %d",*p,*q);
	t=*p;
	*p=*q;
	*q=t;
	printf("\n\nAfter Swap  a = %d  b = %d",*p,*q);
}
