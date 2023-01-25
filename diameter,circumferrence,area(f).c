#include<stdio.h>
#define pi 3.142857
float dia(float a)
{
	return 2*a;
}
float cir(float a)
{
	return 2*pi*a;
}
float Area(float a)
{
	return pi*a*a;
}
void main()
{
	float r;
	printf("\nEnter the Radius of Circle : ");
	scanf("%f",&r);
	printf("\nDiameter : %.2f\n\nCircumference : %.2f\n\nArea : %.2f",dia(r),cir(r),Area(r));
}
