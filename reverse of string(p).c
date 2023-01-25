#include<stdio.h>
void main()
{
	char s[100],*p,t;
	int i,j;
	printf("\nEnter a String : ");
	gets(s);
	p=s;
	for(i=0;s[i];i++);
	for(j=0,--i;j<i;i--,j++)
	{
		t=*(p+i);
		*(p+i)=*(p+j);
		*(p+j)=t;
	}
	puts("");
	puts(s);
}
