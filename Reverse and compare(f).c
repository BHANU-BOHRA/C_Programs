#include<stdio.h>
#include<string.h>
void main()
{
	char r[100],s[100];
	int i;
	printf("\nEnter a String : ");
	gets(r);
	for(i=0;r[i];i++)
	{
		s[i]=r[i];
	}
	strrev(r);
	printf("\nReversed String : %s",r);
	i=strcmp(s,r);
	if(i>0)
	{
		printf("\n\nOrignal String is larger.");
	}
	else if(i<0)
	{
		printf("\n\nReversed String is larger.");
	}
	else
	{
		printf("\n\nStrings are Equal.");
	}
}
