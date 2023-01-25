#include<stdio.h>
void main()
{
	int a,b,c;
	printf("\nEnter First Side  : ");
	scanf("%d",&a);
	printf("\nEnter Second Side : ");
	scanf("%d",&b);
	printf("\nEnter Third Side  : ");
	scanf("%d",&c);
	if(a+b>c&&b+c>a&&a+c>b)printf("\nTriangle with the Following Sides is Valid");
	else printf("\nTriangle is Invalid");
}
