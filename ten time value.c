#include<stdio.h>
void ten(int *a)
{
	*a=(*a)*10;
}
void main()
{
	int a,*p;
	p=&a;
	printf("\nEnter the Value of a : ");
	scanf("%d",p);
	printf("\nValue of a : %d",*p);
	ten(p);
	printf("\n\nValue of a After going into the Function : %d",*p);
}
