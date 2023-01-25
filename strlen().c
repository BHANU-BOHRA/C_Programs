#include<stdio.h>
int STRLEN(char s[])
{
	int i;
	for(i=0;s[i];i++);
	return i;
}
void main()
{
	char s[200];
	printf("\nEnter a String : ");
	gets(s);
	printf("\nLength of String : %d",STRLEN(s));
}
