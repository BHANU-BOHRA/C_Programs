#include<stdio.h>
void main()
{
	int a,b,c;
	printf("\nEnter the First Side  : ");
	scanf("%d",&a);
	printf("\nEnter the Second Side : ");
	scanf("%d",&b);
	printf("\nEnter the Third Side  : ");
	scanf("%d",&c);
	if(a==b&&b==c)printf("\nIt is an Equilatral Triangle");
	else if((a==b||a==c||b==c)&&(a!=b||b!=c||c!=a))printf("\nIt is an Isosceles Triangle");
	else printf("\nIt is a Scalene Triangle");
}
