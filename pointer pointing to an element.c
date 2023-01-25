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
void main()
{
	int a[100],*p,n;
	p=a;
	printf("\nEnter the No. of Elements to Input in the Array : ");
	scanf("%d",&n);
	input(a,n);
	printf("\np+2 points to %d and p points to %d",*(p+2),*p);
}
