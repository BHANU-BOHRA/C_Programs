#include<stdio.h>
void main()
{
	int r,c,i;
	for(r=1;r<=5;r++)
	{
		for(c=1;c<=5-r;c++)
		{
			printf(" ");
		}
		for(c=i=1;c<=r;c++)
		{
			printf("%d ",i);
			i=i*(r-c)/c;
		}
		printf("\n");
	}
}
