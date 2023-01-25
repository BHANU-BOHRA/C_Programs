#include<stdio.h>
void main()
{
	char s[200],r[200];
	int i,j,k=0,l;
	printf("\nEnter the String  : ");
	gets(s);
	for(i=0;s[i];i++);
	i--;
	while(i>=0)
	{
		while(s[i]==' '||s[i]=='\t')r[k++]=s[i--];
		if(i<0)break;
		j=i;
		while(i>=0&&s[i]!=' '&&s[i]!='\t')i--;
		for(l=i+1;l<=j;l++,k++)r[k]=s[l];
	}
	r[k]='\0';
	for(i=0;r[i];i++)s[i]=r[i];
	s[i]='\0';
	printf("\nReverse of String : %s",s);
}
