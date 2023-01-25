#include<stdio.h>
void main()
{
	int a[10][10],n,i,j;
	printf("\nEnter the Number to Store the Table : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the %d Number : ",i+1);
		scanf("%d",&a[0][i]);
		for(j=2;j<11;j++)a[j-1][i]=a[0][i]*j;
	}
	for(i=0;i<n;i++)
	{
		printf("\n\nTable of %d\n",a[0][i]);
		for(j=0;j<10;j++)printf("\n%d x %02d = %2d",a[0][i],j+1,a[j][i]);
		printf("\n\n");
	}
}
