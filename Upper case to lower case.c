#include<stdio.h>
void main()
{
	char s[200];
	int i;
	printf("\nEnter the String in Upper Case: ");
	gets(s);
	for(i=0;s[i];i++)if(s[i]>='A'&&s[i]<='Z')s[i]=s[i]+32;
	printf("\nString in Lower Case : %s",s);
}
