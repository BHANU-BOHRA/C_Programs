#include<stdio.h>
void main()
{
	int i,*p,**q;
	p=&i;
	q=&p;
	printf("\nEnter the Value of i : ");
	scanf("%d",*q);
	printf("\nValue of i : %d\n\n\t**All Operations are done using a POINTER TO POINTER**",**q);
}
