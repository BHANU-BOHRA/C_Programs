#include<stdio.h>
void main()
{
	char i,e,garbage;
	float g,t;
	printf("                      TEMPERATURE CONVERTER");
	printf("\n\nEnter 'F' for Ferhanite\n\nEnter 'C' for Centegrade\n\nEnter 'K' for Kelvin");
	printf("\n\nEnter the Temperature Unit You want to Provied Input :  ");
	scanf("%c",&i);
	scanf("%c",&garbage);
	printf("\n\nEnter the Temperature Unit in which You the Output  : ");
	scanf("%c",&e);
	scanf("%c",&garbage);
	if(i==e)
    printf("\n\nBoth of Your Selected Units are Same\n\nSo the value will Not Change\n\nTry Again Using Two Distinct Values");
    else if(i!='c'&&i!='C'&&i!='f'&&i!='F'&&i!='k'&&i!='K')
    printf("\n\nYou have Entered an Invalid Character(s)");
    else if(e!='c'&&e!='C'&&e!='f'&&e!='F'&&e!='k'&&e!='K')
    printf("\n\nYou have Entered an Invalid Character(s)");
	else
	{
		if(i=='f'||i=='F')
	{
		if(e=='c'||e=='C')
		{
			printf("\n\nEnter Temperature in Ferhanite : ");
		    scanf("%f",&g);
		    t=(g-32)*5/9;
		    printf("\n\nTemperature in Centegrade is %.2f\370C",t);
		}
		else
		{
			printf("\n\nEnter Temperature in Ferhanite : ");
		    scanf("%f",&g);
		    t=((g-32)*5/9)+273.15;
		    printf("\n\nTemperature in Kelvin is %.2fK",t);
		}
	}
	else if(i=='c'||i=='C')
	{
		if(e=='f'||e=='F')
		{
			printf("\n\nEnter Temperature in Centigrade : ");
		    scanf("%f",&g);
		    t=(9*g/5)+32;
		    printf("\n\nTemperature in Ferhannite is %.2f\370F",t);
		}
		else
		{
			printf("\n\nEnter Temperature in Centigrade : ");
		    scanf("%f",&g);
		    t=g+273.15;
		    printf("\n\nTemperature in Kalvin is %.2fK",t);
		}
	}
	else if(i=='k'||i=='K')
	{
		if(e=='c'||e=='C')
		{
			printf("\n\nEnter Temperature in Kalvin : ");
		    scanf("%f",&g);
		    t=g-273.15;
		    printf("\n\nTemperature in Centegrade is %.2f\370C",t);
		}
		else 
		{
			printf("\n\nEnter Temperature in Kalvin : ");
		    scanf("%f",&g);
		    g=g-273.15;
		    t=(9*g/5)+32;
		    printf("\n\nTemperature in Ferhannite is %.2f\370F",t);
		}
	}
	}
}
