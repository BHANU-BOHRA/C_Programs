#include<stdio.h>
void main()
{
	char s[200],w[200];
	int i,j,c;
	printf("\nEnter the String : ");
	gets(s);
	printf("\nEnter the Word to Find All Occurance : ");
	gets(w);
	i=c=0;
	while(s[i])
	{
		while(s[i]==' '||s[i]=='\t')i++;
		if(s[i]=='\0')break;
		while(s[i]&&s[i]!=' '&&s[i]!='\t')
		{
			for(j=0;s[i]==w[j]&&s[i]&&w[j];i++,j++);
			if(w[j]=='\0')c++;
			i++;
		}
	}
	printf("\n%s has Occured %d Times",w,c);
}
