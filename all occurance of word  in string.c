#include<stdio.h>
void main()
{
	char s[200],w[200];
	int i,j,k,c,st[25],ed[25];
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
			for(j=0,k=i;s[i]==w[j]&&s[i]&&w[j];i++,j++);
			if(w[j]=='\0')
			{
				st[c]=k;
				ed[c++]=j+k-1;
			}
			i++;
		}
	}
	printf("\nAll Occurance of %s :-",w);
	for(i=0;i<c;i++)printf("\n\nOccurance %d : %d to %d",i+1,st[i],ed[i]);
}
