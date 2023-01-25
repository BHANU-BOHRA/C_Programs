#include<stdio.h>
float foa(float a)
{
	return a*9.8;
}
void main()
{
	float m;
	printf("\nEnter Mass of The Object : ");
	scanf("%f",&m);
	printf("\nForce of Attraction : %.2fN",foa(m));
}
