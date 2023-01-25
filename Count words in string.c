#include<stdio.h>
void main()
{
	char s[200];
	int i,w;
	printf("\nEnter the String : ");
	gets(s);
	i=w=0;
	while(s[i])
	{
		while(s[i]==' '||s[i]=='\t')i++;
		if(s[i]=='\0')break;
		while(s[i]&&s[i]!=' '&&s[i]!='\t')i++;
		w++;
	}
	printf("\nTotal Number Words in String : %d",w);
}
