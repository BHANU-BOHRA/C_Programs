#include<stdio.h>
void main()
{
	char s[200],n[200];
	int i,j,c[128];
	printf("\nEnter the String : ");
	gets(s);
	for(i=0;i<128;i++)c[i]=0;
	for(i=j=0;s[i];i++)
	{
		if(c[s[i]]==0)
		{
			n[j++]=s[i];
			c[s[i]]++;
		}
	}
	n[j]='\0';
	for(i=0;n[i];i++)s[i]=n[i];
	s[i]='\0';
	printf("\nString After Removing All Duplicate Characters : %s",s);
}
