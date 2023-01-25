#include<stdio.h>
void main()
{
	char u,g;
	float t;
	printf("\nEnter the Temperature : ");
	scanf("%f",&t);
	printf("\nEnter the Unit to Into : ");
	scanf("%c",&g);
	scanf("%c",&u);
	switch(u)
	{
		case 'c':
		case 'C':
			printf("\nTemperature in Ferhanite : %.2f",(9*t/5)+32);
			break;
		case 'f':
		case 'F':
			printf("\nTemperature in Celcius : %.2f",5*(t-32)/9);
	}
}
