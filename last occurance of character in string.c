#include<stdio.h>
void main()
{
	char c,s[200];
	int i;
	printf("\nEnter the String : ");
	gets(s);
	printf("\nEnter the Character to find Last Occurance : ");
	scanf("%c",&c);
	for(i=0;s[i];i++);
	for(--i;s[i]&&s[i]!=c;i--);
	printf("\nLast Occurance of %c is at Index %d",c,i);
}
