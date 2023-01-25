#include<stdio.h>
void main()
{
	int a,*p;
	p=&a;
	printf("\nEnter value of a : ");
	scanf("%d",p);
	printf("\nAddress of a : %u",p);
	printf("\n\nValue of a : %d",*p);
}
