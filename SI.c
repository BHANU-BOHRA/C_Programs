#include<stdio.h>
int main()
{
	float p,r,t,si,ta;
	printf("Enter the Principle Amount : ");
	scanf("%f",&p);
	printf("\nEnter Rate of Interest : ");
	scanf("%f",&r);
	printf("\nEnter Time Period(In Years) : ");
	scanf("%f",&t);
	si=p*r*t/100;
	ta=p+si;
	printf("\n\nSimple Interest will be %f\n\nTotal Amount will be %f",si,ta);
	return 0;
}
