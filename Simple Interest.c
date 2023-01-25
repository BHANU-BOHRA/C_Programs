#include<stdio.h>
void main()
{
	float p,r,t,si;
	printf("\nEnter the Principal Amount : ");
	scanf("%f",&p);
	printf("\nEnter the Rate of Interest : ");
	scanf("%f",&r);
	printf("\nEnter the Time Period      : ");
	scanf("%f",&t);
	si=(p*r*t)/100;
	printf("\n\nSimple Interest = %.2f\n\nTotal Amount = %.2f",si,p+si);
}
