#include<stdio.h>
void main()
{
	char s[200],f;
	int i;
	printf("\nEnter the String : ");
	gets(s);
	printf("\nEnter the Character to Remove the First Occurance : ");
	scanf("%c",&f);
	for(i=0;s[i];i++)
	{
		if(s[i]==f)
		{
			while(s[i])
			{
				s[i]=s[i+1];
				i++;
			}
			break;
		}
	}
	printf("\nString After Removing First Occured %c : %s",f,s);
}
