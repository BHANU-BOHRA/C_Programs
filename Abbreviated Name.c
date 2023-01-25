#include<stdio.h>
void main()
{
	char f[100],m[100],l[100];
	printf("\nEnter your First Name : ");
	gets(f);
	printf("\nEnter your Middle Name(Enter'-'if NONE) : ");
	gets(m);
	printf("\nEnter your Last Name  : ");
	gets(l);
	if(*m=='-')
	{
		if(*f>='a'&&*f<='z')*f=*f-32;
		if(*l>='a'&&*l<='z')*l=*l-32;
		printf("\n\nAbbreviated Name : %c. %s",*f,l);
	}
	else
	{
		if(*f>='a'&&*f<='z')*f=*f-32;
		if(*m>='a'&&*m<='z')*m=*m-32;
		if(*l>='a'&&*l<='z')*l=*l-32;
		printf("\n\nAbbreviated Name : %c.%c. %s",*f,*m,l);
	}
}
