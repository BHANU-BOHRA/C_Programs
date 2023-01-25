#include<stdio.h>
int input(int arr[10][10],int n,int m)
{
	int i,j;
	for(i=j=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
		   printf("\nEnter the Element of Row %d and Column %d : ",i+1,j+1);
		   scanf("%d",&arr[i][j]);
	    }
	}
}
void main()
{
	int m,n,a[10][10],b[10][10],c[10][10],i,j;
	printf("\nEnter the Number of Rows of the Matrixes : ");
	scanf("%d",&n);
	printf("\nEnter the Number Columns of the Matrixes : ");
	scanf("%d",&m);
	printf("\n\nFor First Matrix");
	input(a,n,m);
	printf("\n\nFor Second Matrix");
	input(b,n,m);
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<m;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		    printf("%2d ",c[i][j]);
			
		}
	}
	printf("\n");
}
