#include<stdio.h>
void main()
{
	char c='A',a[10]="**********";
	int i=0;
	printf("\nEnter Your Name  \n\n");
	while(c)
	{
		c=getch();
		printf("%c",a[i]);
		i++;
		if(i==10)
		{
			printf(" ");
			i=0;
		}
	}
}
