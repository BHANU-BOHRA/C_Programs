#include<stdio.h>
void main()
{
	int a[2][3][4],i,j,k;
	printf("\nThe Address of Elements of 3-D Array are :-\n\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<4;k++)printf("a[%d][%d][%d] = %u  ",i,j,k,a[i][j]+k);
			printf("\n");
		}
		printf("\n\n");
	}
}
