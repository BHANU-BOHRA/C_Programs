#include<stdio.h>
void ten(int a)
{
	a=a*10;
}
void main()
{
	int a;
	printf("\nEnter the Value of a : ");
	scanf("%d",&a);
	printf("\nValue of a : %d",a);
	ten(a);
	printf("\n\nValue of a After going into the Function : %d",a);
}
