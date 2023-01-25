#include<stdio.h>
void main()
{
	char s[200],l;
	int i,o;
	printf("\nEnter the String : ");
	gets(s);
	printf("\nEnter the Character to Remove All the Occurance : ");
	scanf("%c",&l);
	for(i,o=1;s[i];i++)
	{
		if(s[i]==l)
		{
			while(s[i])
			{
				if(s[i+o]==l)while(s[i+o]==l&&s[i+o])o++;
				s[i]=s[i+o];
				i++;
			}
			break;
		}
	}
	printf("\nString After Removing All Occured %c : %s",l,s);
}
