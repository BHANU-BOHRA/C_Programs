#include<stdio.h>
void main()
{
	char s[200],w[200];
	int i,j,k,y;
	printf("\nEnter the String : ");
	gets(s);
	printf("\nEnter the Word to Find First Occurance : ");
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
	printf("\nFirst Occurance of %s is From index %d to %d",w,k,j+k-1);
}
