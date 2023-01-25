#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("\nEnter 1st Number : ");
	scanf("%d",&a);
	printf("\nEnter 2nd Number : ");
	scanf("%d",&b);
	printf("\nEnter 3rd Number : ");
	scanf("%d",&c);
	printf("\nEnter 4th Number : ");
	scanf("%d",&d);
	if(a==b&&b==c&&c==d)printf("\nAll Numbers are Equal");
	else if(a>=b&&a>=c&&a>=d)printf("\n%d is the Greatest of Four",a);
	else if(a<=b&&b>=c&&b>=d)printf("\n%d is the Greatest of Four",b);
	else if(c>=b&&a<=c&&c>=d)printf("\n%d is the Greatest of Four",c);
	else printf("\n%d is the Greatest of Four",d);
}
