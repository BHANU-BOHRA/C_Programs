#include<stdio.h>
void main()
{
	char s1[500],s2[200];
	int i=0;
	printf("\nEnter the First String  : ");
	gets(s1);
	printf("\nEnter the Second String : ");
	gets(s2);
	while(s1[i]&&s2[i])
	{
		if(s1[i]==s2[i])i++;
		else if(s1[i]<s2[i])
		{
			printf("\n%s is Greater than %s",s2,s1);
			break;
		}
		else
		{
			printf("\n%s is Greater than %s",s1,s2);
			break;
		}
	}
	if(s1[i]==s2[i]&&s1[i]=='\0')printf("\nBoth Strings are Equal");
}
