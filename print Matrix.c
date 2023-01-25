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
	int i,j,a[10][10];
	input(a,2,2);
	for(i=0;i<2;i++)
	{
		printf("\n");
		for(j=0;j<2;j++)printf("%d",a[i][j]);
	}
}
