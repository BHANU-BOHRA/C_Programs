#include<stdio.h>
void inputtable(int a[],int n)
{
	int i=0;
	for(i=1;i<11;i++)a[i-1]=i*n;
}
void printtable(int a[],int n)
{
	int i;
	printf("\nTable of %d\n\n",n);
	for(i=0;i<10;i++)printf("\n%d x %02d = %02d",n,i+1,a[i]);
}
void main()
{
	int a[100],n;
	printf("\nEnter the No. to store table in the Array : ");
	scanf("%d",&n);
	inputtable(a,n);
	printtable(a,n);	
}
