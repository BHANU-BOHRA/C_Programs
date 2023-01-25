#include<stdio.h>
void main()
{
	char c='a',s[15]="TU BHOSIYO HAI";
	int i=0;
	printf("\nEnter Your Name\n\n");
	while(c)
	{
		c=getch();
		printf("%c",s[i]);
		i++;
		if(i==14)
		{
			printf(" ");
			i=0;
			
		}
	}
}
