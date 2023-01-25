#include<stdio.h>
void main()
{
	char s[200];
	int i;
	printf("\nEnter the String : ");
	gets(s);
	for(i=0;s[i];i++)
	{
		if(s[i]>='A'&&s[i]<='Z')s[i]=s[i]+32;
		else if(s[i]>='a'&&s[i]<='z')s[i]=s[i]-32;
	}
	printf("\nString in Toggle Case : %s",s);
}
