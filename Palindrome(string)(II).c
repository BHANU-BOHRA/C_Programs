#include<stdio.h>
void main()
{
	char s[200];
	int i,j;
	printf("\nEnter the String : ");
	gets(s);
	for(i=0;s[i];i++);
	for(--i,j=0;j<i&&s[i]==s[j];i--,j++);
	if(j>=i)printf("\n%s is a Palindrome",s);
	else printf("\n%s is not a Palindrome",s);	
}
