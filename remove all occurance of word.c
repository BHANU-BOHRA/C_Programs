#include<stdio.h>
void main()
{
	char s[200],w[200];
	int i,j,k,c,st[25],l;
	printf("\nEnter the String : ");
	gets(s);
	printf("\nEnter the Word to Find All Occurance : ");
	gets(w);
	for(l=0;w[l];l++);
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
				st[c++]=k;
			}
			i++;
		}
	}
	i=j=k=0;
	while(s[j])
	{
		if(j==st[k])
		{
			j+=l;
			k++;
		}
		s[i++]=s[j++];
	}
	s[i]='\0';
	printf("\nString After Removing All Occurance of %s : %s",w,s);
}
