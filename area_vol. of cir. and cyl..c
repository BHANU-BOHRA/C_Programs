#include<stdio.h>
#define pi 3.142857
void main()
{
	float r,h;
	printf("\nEnter Radius : ");
	scanf("%f",&r);
	printf("\nEnter Height : ");
	scanf("%f",&h);
	printf("\n\nArea of Circle of Radius %.2f : %.2f",r,pi*r*r);
	printf("\n\nVolume of Cylender of Radius %.2f and Height %.2f : %.2f",r,h,pi*r*r*h);
}
