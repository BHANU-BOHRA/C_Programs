#include<stdio.h>
void main()
{
	float p,r,t,si;
	printf("\nEnter Principal Amount : ");
	scanf("%f",&p);
	printf("\n Enter Rate of Intrest : ");
	scanf("%f",&r);
	printf("\n  Enter Time period    : ");
	scanf("%f",&t);
	si=p*r*t/100;
	printf("\n\nSimple Intrest = %.2f\n\nTotal Amount = %.2f",si,si+p);
}
