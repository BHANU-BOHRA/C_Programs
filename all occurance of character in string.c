#include<stdio.h>
void main()
{
	char c,s[200];
	int i,o[25],j;
	printf("\nEnter the String : ");
	gets(s);
	printf("\nEnter the Character to find First Occurance : ");
	scanf("%c",&c);
	for(i=j=0;s[i];i++)if(s[i]==c)o[j++]=i;
	for(i=0;i<j;i++)printf("\n\nOccurance %d : %d",i+1,o[i]);
}
