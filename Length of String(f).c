#include<stdio.h>
#include<string.h>
void main()
{
	char s[100];
	int l;
	printf("\nEnter a String : ");
	gets(s);
	l=strlen(s);
	printf("\n\nLength of the String : %d",l);
}
