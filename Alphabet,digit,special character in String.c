#include<stdio.h>
void main()
{
	char s[200];
	int i,c[3]={0,0,0};
	printf("\nEnter the String : ");
	gets(s);
	for(i=0;s[i];i++)
	{
		if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))c[0]++;
		else if(s[i]>='0'&&s[i]<='9')c[1]++;
		else c[2]++;
	}
	printf("\nTotal Number of Alphabets : %d\nTotal Number of Digits : %d\nTotal Number of Special Character : %d",c[0],c[1],c[2]);

}
