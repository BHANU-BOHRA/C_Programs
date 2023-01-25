#include<stdio.h>
void main()
{
	int a,b,*p,*q;
	printf("\nEnter the First Number  : ");
	scanf("%d",p=&a);
	printf("\nEnter the Second Number : ");
	scanf("%d",q=&b);
	printf("\n%d + %d = %d",*p,*q,*p+*q);
}
