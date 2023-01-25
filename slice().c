#include<stdio.h>
void slice(char a[],int m,int n)
{
	int i;
	for(i=0;m<=n;i++,m++)a[i]=a[m];
	a[i]='\0';
}
void main()
{
	char s[200];
	int i,m,n;
	printf("\nEnter a String : ");
	gets(s);
	printf("\n\nEntered String : %s",s);
	printf("\n\nEnter Strating Index to for Slicing  : ");
	scanf("%d",&m);
	printf("\n\nEnter Index till you want to Slicing : ");
	scanf("%d",&n);
	for(i=0;s[i];i++);
	if(m>i||n>i)printf("\n\nError! Invalid Input..");
	else
	{
		slice(s,m,n);
		printf("\n\nString After Slicing : %s",s);
	}
}
