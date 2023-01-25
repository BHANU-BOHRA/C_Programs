#include<stdio.h>
int input(int arr[10][10],int r,int c)
{
	int i,j;
	for(i=j=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		   printf("\nEnter the Element of Row %d and Column %d : ",i+1,j+1);
		   scanf("%d",&arr[i][j]);
	    }
	}
}
void main()
{
	int n1,n2,n,a[10][10],b[10][10],c[10][10],i,j,e;
	printf("\nEnter the Number of Rows for First Matrix     : ");
	scanf("%d",&n1);
	printf("\nEnter the Number of Columns for First Matrix  : ");
	scanf("%d",&n);
	printf("\nNumber of Rows in Second Matrix               : %d\n",n);
	printf("\nEnter the Number of Columns for Second Matrix : ");
	scanf("%d",&n2);
	printf("\n\nFor First Matrix");
	input(a,n1,n);
	printf("\n\nFor Second Matrix");
	input(b,n,n2);
	printf("\n\n       Multiplication of the Matrixes");
	for(i=0;i<n1;i++)
	{
		printf("\n");
		for(j=0;j<n2;j++)
		{
			for(e=c[i][j]=0;e<n;e++)
			{
				c[i][j]=c[i][j]+(a[i][e]*b[e][j]);
			}
			printf("%10d  ",c[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
