#include<stdio.h>
void main()
{
	char s[100],*p;
	int i;
	printf("\nEnter a String : ");
	gets(s);
	for(i=0,p=s;*(p+i);i++);
	printf("\nLength of String : %d",i);
}
