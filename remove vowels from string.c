#include<stdio.h>
void main()
{
	char s[200],v[200];
	int i,j=0,c;
	printf("\nEnter a String : ");
	gets(s);
	for(i=0;s[i];i++)
	{
		c=0;
		switch(s[i])
		{
			case 'a':
			case 'A':
				c=1;
				break;
			case 'e':
			case 'E':
				c=1;
				break;
			case 'i':
			case 'I':
				c=1;
				break;
			case 'o':
			case 'O':
				c=1;
				break;
			case 'u':
			case 'U':
				c=1;
				break;
			default :
				v[j]=s[i];
				j++;
				
		}
	}
	v[j]='\0';
	for(i=0;v[i];i++)s[i]=v[i];
	s[i]='\0';
	printf("\nString without Vowels : %s",s);
}
