#include<stdio.h>
void main()
{
	int r,c,n;
	for(r=n=1;r<5;r++)
	{
		for(c=1;c<=r;c++,n++)
		{
			printf("%d ",n);
		}
		printf("\n");
	}
}
