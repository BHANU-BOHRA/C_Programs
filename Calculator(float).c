#include<stdio.h>
void main()
{
	char o,g;
	double f,s;
	printf("\nEnter the first operand       : ");
	scanf("%lf",&f);
	scanf("%c",&g);
	printf("\n\nEnter the operator(+,-,*,/) : ");
	scanf("%c",&o);
	printf("\n\nEnter the second operand    : ");
	scanf("%lf",&s);
	switch(o)
	{
		case '+' : printf("\n\n%.2lf + %.2lf = %.2lf",f,s,f+s);
		           break;
		case '-' : printf("\n\n%.2lf - %.2lf = %.2lf",f,s,f-s);
		           break;
		case '*' : printf("\n\n%.2lf * %.2lf = %.2lf",f,s,f*s);
		           break;
		case '/' : printf("\n\n%.2lf / %.2lf = %.2lf",f,s,f/s);
		           break;
		default  : printf("\n\nError! You have entered an invalid operator");		   		   		             
	}
    
}
