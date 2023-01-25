#include<stdio.h>
void main()
{
	char s[200],f,r,g;
	int i;
	printf("\nEnter the String : ");
	gets(s);
	printf("\nEnter the Character to Remove All the Occurance : ");
	scanf("%c",&f);
	scanf("%c",&g);
	printf("\nEnter the Character You Want to Replace with : ");
	scanf("%c",&r);
	for(i=0;s[i];i++)if(s[i]==f)s[i]=r;
	printf("\nString After Replacing All Occured %c with %c : %s",f,r,s);
}
