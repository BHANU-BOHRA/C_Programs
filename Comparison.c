#include<stdio.h>
void main()
{
	char s1[100],s2[100];
	int i;
	printf("\nEnter the First String : ");
	gets(s1);
	printf("\nEnter the Second String : ");
	gets(s2);
	for(i=0;s1[i]!='\0'||s2[i]!='\0';i++)
	{
		if(s1[i]!=s2[i])
		{
			if(s1[i]>s2[i])
		    {
			   printf("\nFirst String is Greater than Second String");
		    }
		    else if(s1[i]<s2[i])
		    {
			   printf("\nSecond String is Greater than First String");
		    }
		    break;
		}
	}
	if(s1[i]==s2[i]&&s1[i]=='\0')
	{
		printf("\nBoth Strings are Equal");
	}
}
