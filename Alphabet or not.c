#include<stdio.h>
void main()
{
	char x;
	printf("\nEnter a Character : ");
	scanf("%c",&x);
	if((x>='a'&&x<='z')||(x>='A'&&x<='Z'))printf("\n%c is an Alphabet",x);
	else printf("\n%c is not an Alphabet",x);
}
