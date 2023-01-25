#include<stdio.h>
void main()
{
	int r,c;
	for(r=1;r<=5;r++)
	{
		for(c=1;c<=5-r;c++)
		{
			printf(" ");
		}
		for(c=1;c<=r;c++)
		{
			printf("*");
		}
		printf("\n");
	}
}
