#include<stdio.h>
void main()
{
	char x;
	printf("\nEnter the Alphabet : ");
	scanf("%c",&x);
	if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')printf("\n%c is a Vowel",x);
	else printf("\n%c is a Consonent",x);
}
