#include<stdio.h>
void main()
{
	char s[200];
	int i,f[128];
	printf("\nEnter the String : ");
	gets(s);
	for(i=0;i<128;i++)f[i]=0;
	for(i=1,f[s[0]]++;s[i];i++)f[s[i]]++;
	for(i=0;s[i];i++)
	{
		if(f[s[i]]!=0)
		{
			printf("\n\nFrequency of %c is %d",s[i],f[s[i]]);
		    f[s[i]]=0;
		}
	}
}
