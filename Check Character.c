#include<stdio.h>
void main()
{
	char x;
	printf("\nEnter a Character : ");
	scanf("%c",&x);
	if(x>='a'&&x<='z')printf("\n%c is a Lower Case Alphabet",x);
	else if(x>='A'&&x<='Z')printf("\n%c is an Upper Case Alphabet",x);
	else if(x>='0'&&x<='9')printf("\n%c is a Digit",x);
	else printf("\n%c is a Special Character",x);
}
