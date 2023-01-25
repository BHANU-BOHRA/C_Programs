#include<stdio.h>
void main()
{
	char c;
	printf("\nEnter the Alphabet : ");
	scanf("%c",&c);
	switch(c)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			printf("\n%c is a Vowel",c);
			break;
		default:
			printf("\n%c is a Consonent",c);
	}
	
}
