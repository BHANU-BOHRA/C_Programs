#include<stdio.h>
float fc(float a)
{
	return (9*a/5)+32;
}
void main()
{
	float t;
	printf("\nEnter Temperature in Celcius : ");
	scanf("%f",&t);
	printf("\nTemperature in Farenheit : %.2f\370F",fc(t));
}
