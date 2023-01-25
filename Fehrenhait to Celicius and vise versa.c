#include<stdio.h>
void main()
{
	char u,g;
	float t;
	printf("\nEnter the Temperature : ");
	scanf("%f",&t);
	scanf("%c",&g);
	printf("\nEnter the Unit to Into(c or f) : ");
	scanf("%c",&u);
	switch(u)
	{
		case 'f':
		case 'F':
			printf("\nTemperature in Ferhanite : %.2f\370F",(9*t/5)+32);
			break;
		case 'c':
		case 'C':
			printf("\nTemperature in Celcius : %.2f\370C",5*(t-32)/9);
	}
}
