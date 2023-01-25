#include<stdio.h>
void main()
{
	char s[200],c;
	int i;
	printf("\nEnter a String : ");
	gets(s);
	printf("\nEnter a Character to Check weather it has Occured in the String or Not : ");
	scanf("%c",&c);fflush(stdin);
	for(i=0;s[i]&&s[i]!=c;i++);
	if(s[i]=='\0')printf("\n\n'%c' is Not Present in the String..",c);
	else printf("\n\n'%c' is Present in the String at Index %d",c,i);
}
