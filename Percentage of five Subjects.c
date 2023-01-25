#include<stdio.h>
void main()
{
	float e,h,p,c,m,per;
	printf("\nEnter the Marks of   English   : ");
	scanf("%f",&e);
	printf("\nEnter the Marks of    Hindi    : ");
	scanf("%f",&h);
	printf("\nEnter the Marks of   Physics   : ");
	scanf("%f",&p);
	printf("\nEnter the Marks of  Chemistry  : ");
	scanf("%f",&c);
	printf("\nEnter the Marks of Mathamatics : ");
	scanf("%f",&m);
	printf("\nPercentage = %.2f %%",(e+h+p+c+m)/5.0);
}
