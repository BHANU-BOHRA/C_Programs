#include<stdio.h>
void main()
{
	char s[200],c;
	int i,o;
	printf("\nEnter a String : ");
	gets(s);
	printf("\nEnter a Character to Occurance of : ");
	scanf("%c",&c);fflush(stdin);
	for(i=o=0;s[i];i++)if(s[i]==c)o++;
	printf("\n\n'%c' has Occured %d time in the Entered String %s",c,o,s);
}
