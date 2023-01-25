#include<stdio.h>
void main()
{
	char s[100],t;
	int i,j;
	printf("\nEnter a String : ");
	gets(s);
	for(i=0;s[i]!='\0';i++);
	for(i--,j=0;j<i;i--,j++)
	{
		t=s[i];
		s[i]=s[j];
		s[j]=t;
	}
	printf("\n\nReverse of String : %s",s);
}
