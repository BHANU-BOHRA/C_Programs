#include<stdio.h>
void main()
{
	int m1[10][10],m2[10][10],r[10][10],i,j,k,r1,r2,c1,c2;
	printf("\nEnter the No. of Rows in Matrix 1 : ");
	scanf("%d",&r1);
	printf("\nEnter the No. of Columns in Matrix 1 : ");
	scanf("%d",&c1);
	printf("\nEnter the No. of Rows in Matrix 2 : ");
	scanf("%d",&r2);
	printf("\nEnter the No. of Columns in Matrix 2 : ");
	scanf("%d",&c2);
	if(c1!=r2)
	{
		printf("\nError! Invalid Input.");
	}
	else
	{
		printf("\nEnter the Elements for Matrix 1\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("\nRow %d , Column %d : ",i+1,j+1);
				scanf("%d",&m1[i][j]);
			}
		}
		printf("\nEnter the Elements for Matrix 2\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("\nRow %d , Column %d : ",i+1,j+1);
				scanf("%d",&m2[i][j]);
			}
		}
		printf("\n\nMultiplication of Matrix 1 and Matrix 2\n\n");
		for(i=0;i<r1;i++)
	    {
		    for(j=0;j<c2;j++)
		    {
			    for(k=r[i][j]=0;k<r2;k++)
			      {
				     r[i][j]=r[i][j]+m1[i][k]*m2[k][j];
			      }
			      printf(" %d ",r[i][j]);
		    }
		    printf("\n");
	    }
	}
}
