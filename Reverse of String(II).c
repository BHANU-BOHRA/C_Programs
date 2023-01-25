#include<stdio.h>
void main()
{
	char s[200],t;
	int i,j;
	printf("\nEnter the String : ");
	gets(s);
	for(i=0;s[i];i++);
	for(--i,j=0;j<i;i--,j++)
	{
		t=s[i];
		s[i]=s[j];
		s[j]=t;
	}
	printf("\nReverse of String : %s",s);
}
