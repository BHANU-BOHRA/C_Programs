#include<stdio.h>
void main()
{
	char s[100];
	int i;
	printf("\nEnter a String : ");
	gets(s);
	for(i=0;s[i]!='\0';i++);
	printf("\nLength of the String : %d",i);
}
