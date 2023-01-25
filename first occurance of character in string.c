#include<stdio.h>
void main()
{
	char c,s[200];
	int i;
	printf("\nEnter the String : ");
	gets(s);
	printf("\nEnter the Character to find First Occurance : ");
	scanf("%c",&c);
	for(i=0;s[i]&&s[i]!=c;i++);
	printf("\nFirst Occurance of %c is at Index %d",c,i);
}
