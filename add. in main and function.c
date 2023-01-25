#include<stdio.h>
void pa(int i)
{
	printf("\n\nAddress of i Passed to a Function : %u",&i);
}
void main()
{
	int i;
	printf("\nEnter the Value of i : ");
	scanf("%d",&i);
	printf("\nVaule of i : %d",i);
	printf("\n\n\nAddress of i in MAIN : %u",&i);
	pa(i);
}
