#include<stdio.h>
void main()
{
	char s[200],f,r,g;
	int i,o=1;
	printf("\nEnter the String : ");
	gets(s);
	printf("\nEnter the Character to Remove the First Occurance : ");
	scanf("%c",&f);
	scanf("%c",&g);
	printf("\nEnter the Character You Want to Replace with : ");
	scanf("%c",&r);
	for(i=0;s[i];i++)
	{
		if(s[i]==f&&o)
		{
			s[i]=r;
			o=0;
		}
	}
	printf("\nString After Replacing First Occurance %c with %c : %s",f,r,s);
}
