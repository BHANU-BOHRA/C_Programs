#include<stdio.h>
void main()
{
	int a,b,c;
	printf("\nEnter the First Number  : ");
	scanf("%d",&a);
	printf("\nEnter the Second Number : ");
	scanf("%d",&b);
	printf("\nEnter the Third Number  : ");
	scanf("%d",&c);
	if(a>b&&b>=c)printf("\n%d is the Greatest Number Among the Three",a);
	else if(b>a&&a>=c)printf("\n%d is the Greatest Number Among the Three",b);
	else if(c>b&&a<=b)printf("\n%d is the Greatest Number Among the Three",c);
	else if(c==b&&a==c)printf("\nAll Three are Equal");
	else if(c==b&&a<c)printf("\nSecond and Third are Equal(%d) and Greater than First",c);
	else if(c==a&&b<c)printf("\nFirst and Third are Equal(%d) and Greater than Second",a);
	else if(a==b&&a>c)printf("\nFirst and Second are Equal(%d) and Greater than Third",b);
}
