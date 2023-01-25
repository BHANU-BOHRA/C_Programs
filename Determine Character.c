#include<stdio.h>
int main()
{
	char a;
	printf("Enter a Character : ");
	scanf("%c",&a);
	if(a>=65&&a<=90)
	{
		printf("\n\nEntered Character is an Upper Case Alphabet");
	}
	else if(a>=97&&a<=122)
	{
		printf("\n\nEntered Character is a Lower Case Alphabet");
	}
	else if(a>=48&&a<=57)
	{
		printf("\n\nEntered Character is a Digit");
	}
	else if(a==32)
	{
		printf("\n\nYou have Entered 'Space'");
	}
	else if(a==10)
	{
		printf("\n\nYou have Entered 'Enter'");
	}
	else if(a==9)
	{
		printf("\n\nYou have Entered 'Tab'");
	}
	else
	{
		printf("\n\nEntered Character is a Special Character");
	}
	return 0;
}
