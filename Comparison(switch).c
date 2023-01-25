#include<stdio.h>
#include<string.h>
void main()
{
	char s1[100],s2[100];
	int c;
	printf("\nEnter the First String : ");
	gets(s1);
	printf("\nEnter the Second String : ");
	gets(s2);
	c=strcmp(s1,s2);
    switch(c)
    {
    	case 1:
    		printf("\nFirst String is Greater than Second String");
    		break;
    	case -1:
		    printf("\nSecond String is Greater than First String");
    		break;
		case 0:
		    printf("\nBoth Strings are Equal");	
    }
}
