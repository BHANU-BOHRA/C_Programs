#include<stdio.h>
void main()
{
	char s[200];
	int i,a[2]={0,0};
	printf("\nEnter the String : ");
	gets(s);
	for(i=0;s[i];i++)
	{
		if(s[i]=='a'||s[i]=='o'||s[i]=='e'||s[i]=='i'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')a[0]++;
		else if((s[i]>='b'&&s[i]<='z')||(s[i]>='B'&&s[i]<='Z'))a[1]++;
	}
	printf("\nTotal Number Vowels in String : %d\n\nTotal Number of Consonent in the String : %d",a[0],a[1]);
}
