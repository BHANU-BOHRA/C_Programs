#include<stdio.h>
#include<string.h>
void main()
{
	char s[100];
	printf("\nEnter a String : ");
	gets(s);
	strrev(s);
	printf("\nReverse of String : %s",s);
}
