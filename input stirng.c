#include<stdio.h>
void main()
{
	char s1[200],s2[200];
	int i;
	printf("\nEnter First String  : ");
	scanf("%[^\n]s",s1);
	fflush(stdin);
	printf("\nEnter Second String : ");
	for(i=0;s2[i-1]!='\n';i++)scanf("%c",s2+i);
	s2[i]='\0';
	printf("\nFirst String : %s\n\nSecond String : %s",s1,s2);
}
