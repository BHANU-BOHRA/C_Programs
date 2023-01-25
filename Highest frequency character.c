#include<stdio.h>
void main()
{
	char s[200],c;
	int i,f[128];
	printf("\nEnter the String : ");
	gets(s);
	for(i=0;i<128;i++)f[i]=0;
	for(i=1,c=s[0],f[s[0]]++;s[i];i++)
	{
		f[s[i]]++;
		if(f[s[i]]>f[c])c=s[i];
	}
	printf("\nHeightest Frequency Character is %c and it's Frequency is %d",c,f[c]);
}
