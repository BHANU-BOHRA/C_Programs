#include<stdio.h>
void main()
{
	char o,g;
	int a,b;
	printf("\nEnter the First Number : ");
	scanf("%f",&a);
	scanf("%c",&g);
	printf("\nEnter the operand : ");
	scanf("%c",&o);
	printf("\nEnter the Second Number : ");
	scanf("%f",&b);
	switch(o)
	{
		case '+': printf("\n\n%d %c %d = %d",a,o,b,a+b);
		          break;
	    case '-': printf("\n\n%d %c %d = %d",a,o,b,a-b);
		          break;
		case '*': printf("\n\n%d %c %d = %d",a,o,b,a*b);
		          break;
		case '/': printf("\n\n%d %c %d = %d",a,o,b,a/b);
		          break;
		case '%': printf("\n\n%d %c %d = %d",a,o,b,a%b);
		          break;
		default : printf("\n\nError! Invalid input");		  		            
	}
}
