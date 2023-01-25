#include<stdio.h>
void STRCPY(char a[],char b[])
{
	int i;
	for(i=0;a[i];i++)b[i]=a[i];
	b[i]='\0';
}
void main()
{
	char s1[200],s2[200];
	printf("\nEnter a String : ");
	gets(s1);
	STRCPY(s1,s2);
	printf("\n\nEntered String : %s\n\n\nCopied String  : %s",s1,s2);
}
