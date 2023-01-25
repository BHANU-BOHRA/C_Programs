#include<stdio.h>
void main()
{
	float a,b;
	int c;
	char o;
	do
	{
		printf("\nEnter the Operation(num1 operator num2) : ");
		scanf("%f%c%f",&a,&o,&b);
		switch(o)
		{
			case '+':
				printf("\n%.2f %c %.2f = %.2f",a,o,b,a+b);
				break;
			case '-':
				printf("\n%.2f %c %.2f = %.2f",a,o,b,a-b);
				break;
			case '*':
				printf("\n%.2f %c %.2f = %.2f",a,o,b,a*b);
				break;
			case '/':
				printf("\n%.2f %c %.2f = %.2f",a,o,b,a/b);
				break;
			case '%':
				printf("\n%.2f %c %.2f = %d",a,o,b,(int)a%(int)b);
				break;
			default :
				printf("\nError! Invalid Input");
		}
		printf("\n\nEnter '1' to Continue and '0' to Exit : ");
		scanf("%d",&c);
	}while(c);
}
