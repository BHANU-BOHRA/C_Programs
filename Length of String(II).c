#include<stdio.h>
void main()
{
	char s[100];
	int i;
	printf("\nEnter the String : ");
	gets(s);
	for(i=0;s[i];i++);
	printf("\nLength of the String is %d",i);	
}
