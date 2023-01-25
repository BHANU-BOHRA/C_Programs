#include<stdio.h>
void main()
{
	#define PI 3.1428571428
	float r;
	printf("\nEnter the Radius of Circle : ");
	scanf("%f",&r);
	printf("\nArea of Circle = %.2f\n\nCircumfernce of Circle = %.2f",(PI*r*r),(2*PI*r));
}
