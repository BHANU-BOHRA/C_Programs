#include<stdio.h>
void main()
{
	char s1[500],s2[200];
	int i,j;
	printf("\nEnter the First String : ");
	gets(s1);
	printf("\nEnter the String to Concatenate : ");
	gets(s2);
	for(i=0;s1[i];i++);
	j=i;
	for(i=0;s2[i];i++,j++)s1[j]=s2[i];
	s1[j]=='\0';
	printf("\nString After Concatenation : %s",s1);
}
