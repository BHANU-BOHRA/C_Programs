#include<stdio.h>
void main()
{
	char s[200],w[200];
	int i,j,k,t,y=0;
	printf("\nEnter the String : ");
	gets(s);
	printf("\nEnter the Word to Remove Last Occurance : ");
	gets(w);
	for(i=0;s[i];i++);
	for(j=0;w[j];j++);
	t=j-1;
	i--;
	while(i>=0)
	{
		while(s[i]==' '||s[i]=='\t')i--;
		if(s[i]=='\0')break;
		while(s[i]&&s[i]!=' '&&s[i]!='\t')
		{
			for(j=t,k=i;s[i]==w[j]&&i>=0&&j>=0;i--,j--);
			if(j==-1)
			{
				y++;
				break;
			}
			i--;
		}
		if(y)break;
	}
	for(i=k-t,j=k+1;s[j];i++,j++)s[i]=s[j];
	s[i]='\0';
	printf("\nString After Removing Last %s : %s",w,s);
}
