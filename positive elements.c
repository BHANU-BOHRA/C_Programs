#include<stdio.h>
void input(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\nItem %2d : ",i+1);
		scanf("%d",a+i);
	}
}
void print(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)printf("%d ",a[i]);
}
int cp(int a[],int n)
{
	int i,p=0;
	for(i=0;i<n;i++)if(a[i]>0)p++;
	return p;
}
void main()
{
	int a[100],n;
	printf("\nEnter the No. of Elements to Input in the Array : ");
	scanf("%d",&n);
	input(a,n);
	printf("\nEntered Array : ");
	print(a,n);
	printf("\n\nTotal Number of Positive Elements in Array : %d",cp(a,n));
}
