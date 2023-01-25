#include<stdio.h>
void main()
{
	char s[100],c[100];
	int i;
	printf("\nEnter the String : ");
	gets(s);
	for(i=0;s[i];i++)c[i]=s[i];
	c[i]='\0';
	printf("\nOrignal String : %s",s);	
	printf("\n\nCopied String  : %s",c);	
}
