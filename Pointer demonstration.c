#include<stdio.h>
void main()
{
	int *p,**q,a=10;
	p=&a;
	q=&p;
	printf("\n\na = %d",a);
	printf("\n\n&a = %d",&a);
	printf("\n\np = %d",p);
	printf("\n\n&p = %d",&p);
	printf("\n\n*p = %d",*p);
	printf("\n\nq = %d",q);
	printf("\n\n&q = %d",&q);
	printf("\n\n*q = %d",*q);
	printf("\n\n**q = %d",**q);
}
