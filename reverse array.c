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
void rev(int a[],int n)
{
	int i,j,t;
	for(i=0;i<n;i++);
	for(--i,j=0;j<i;j++,i--)
	{
		t=a[j];
		a[j]=a[i];
		a[i]=t;
	}
}
void print(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)printf("%d ",a[i]);
}
void main()
{
	int a[100],n;
	printf("\nEnter the No. of Elements to Input in the Array : ");
	scanf("%d",&n);
	input(a,n);
	printf("\nArray Before Reversing : ");
	print(a,n);
	rev(a,n);
	printf("\n\nArray After Reversing  : ");
	print(a,n);
}
