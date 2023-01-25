#include<stdio.h>
void main()
{
	float bs,da,hra;
	printf("\nEnter Basic Salary : ");
	scanf("%f",&bs);
	if(bs<=15000)
	{
		da=0.1*bs;
		hra=0.15*bs;
	}
	else if(bs<=50000)
	{
		da=0.05*bs;
		hra=0.08*bs;
	}
	else
	{
		da=0.02*bs;
		hra=0.05*bs;
	}
	printf("\nBasic Salary : %.2f\n    D.A.     : %.2f\n   H.R.A.    : %.2f\n\nGross Salary : %.2f",bs,da,hra,(bs+da+hra));
}
