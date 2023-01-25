#include<stdio.h>
void main()
{
	char s[100],r[100];
	int i,j;
	printf("\nEnter a String : ");
	gets(s);
	for(i=0;s[i]!='\0';i++);
	for(--i,j=0;i>=0;i--,j++)
	{
		r[j]=s[i];
	}
	r[j]='\0';
	printf("\nReverse of String : %s",r);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]!=r[i])
		{
			if(s[i]>r[i])
			{
				printf("\n\nOrignal String is Larger than the Reversed String.");
			}
			else 
			{
				printf("\n\nReversed String is Larger than the Orignal String.");
			}
			break;
		}
	}
	if(i==j)
	{
		printf("\n\nStrings are Equal.");
	}
}
