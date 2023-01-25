#include<stdio.h>
void main()
{
	char s[200];
	int i;
	printf("\nEnter the String in Lower Case : ");
	gets(s);
	for(i=0;s[i];i++)if(s[i]>='a'&&s[i]<='z')s[i]=s[i]-32;
	printf("\nString in Upper Case : %s",s);
}
