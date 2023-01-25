#include<stdio.h>
void main()
{
	char s[100];
	int i,j;
	printf("\nEnter a String : ");
	gets(s);
	for(i=0;s[i]!='\0';i++);
	for(--i,j=0;s[j]!='\0'&&s[j]==s[i];i--,j++);
	if(s[j]=='\0')
	{
		printf("\n%s is a Palindrome",s);
	}
	else
	{
		printf("\n%s is not a Palindrome",s);
	}
}
