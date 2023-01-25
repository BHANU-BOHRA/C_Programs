#include<stdio.h>
void main()
{
	char x;
	printf("\nEnter an Alphabet : ");
	scanf("%c",&x);
	if(x>='a'&&x<='z')printf("\n%c is a Lower Case Alphabet",x);
	else printf("\n%c is an Upper Case Alphabet",x);
}
