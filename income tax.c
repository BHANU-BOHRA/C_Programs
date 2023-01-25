#include<stdio.h>
void main()
{
	float s;
	printf("\nEnter Salary in Lakhs : ");
	scanf("%f",&s);
	if(s<2.5)printf("\nNo Income Tax is Paid by the Employee");
	else if(s>=2.5&&s<=5)printf("\nIncome Tax Paid by the Employee is Rs. %.2f",s*500000/100);
	else if(s>5&&s<=10)printf("\nIncome Tax Paid by the Employee is Rs. %.2f",s*2000000/100);
	else printf("\nIncome Tax Paid by the Employee is Rs. %.2f",s*3000000/100);
}
