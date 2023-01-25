#include<stdio.h>
void main()
{
	char c;
	printf("\nEnter a Character : ");
	scanf("%c",&c);
	if(c<='a'&&c>='z')printf("\n%c is Lower Case",c);
	else printf("\n%c is Not Lower Case",c);
}
