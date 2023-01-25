#include<stdio.h>
void main()
{
	char s[200],w[200];
	int i,j,k,y,st;
	printf("\nEnter the String : ");
	gets(s);
	printf("\nEnter the Word to Remove First Occurance : ");
	gets(w);
	i=y=0;
	while(s[i])
	{
		while(s[i]==' '||s[i]=='\t')i++;
		if(s[i]=='\0')break;
		while(s[i]&&s[i]!=' '&&s[i]!='\t')
		{
			for(j=0,k=i;s[i]==w[j]&&s[i]&&w[j];i++,j++);
			if(w[j]=='\0')
			{
				y++;
				break;
			}
			i++;
		}
		if(y)break;
	}
	i=k;
	j+=i;
	while(s[j])s[i++]=s[j++];
	s[i]='\0';
	printf("\nString After Removing First %s : %s",w,s);
}
