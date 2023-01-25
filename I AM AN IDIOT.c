#include<stdio.h>
void main()
{
	char c='A',a[25]="I AM AN IDIOT.";
	int i=0;
	printf("\nWrite Your Name\n\n");
	while(c)
	{
		c=getch();
		printf("%c",a[i]);
		i++;
		if(i==13)
		{
			printf("  ");
			i=0;
		}
	}
}
