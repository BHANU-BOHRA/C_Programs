#include<stdio.h>
void main()
{
	int a,b;
	printf("\nEnter the First Number  : ");
	scanf("%d",&a);
	printf("\nEnter the Second Number : ");
	scanf("%d",&b);
	if(a>b)printf("\n%d is Greater than %d",a,b);
	else if(b>a)printf("\n%d is Greater than %d",b,a);
	else printf("\nBoth are Equal");
}
