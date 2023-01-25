#include<stdio.h>
void main()
{
	char s[200],l;
	int i;
	printf("\nEnter the String : ");
	gets(s);
	printf("\nEnter the Character to Remove the Last Occurance : ");
	scanf("%c",&l);
	for(i=0;s[i];i++);
	for(--i;s[i];i--)
	{
		if(s[i]==l)
		{
			while(s[i])
			{
				s[i]=s[i+1];
				i++;
			}
			break;
		}
	}
	printf("\nString After Removing Last Occured %c : %s",l,s);
}
