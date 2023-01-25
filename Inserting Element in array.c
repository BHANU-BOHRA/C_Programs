#include<stdio.h>
void main()
{
	int arr[100],n,i,e,p;
	printf("\nEnter the No. of Elements to Input : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nPosition %d : ",i+1);
		scanf("%d",arr+i);
	}
	printf("\nEnter the Element to Insert : ");
	scanf("%d",&e);
	printf("\nEnter the Desired Position  : ");
	scanf("%d",&p);
	printf("\nArray Before Inserting the Element : ");
	for(i=0;i<n;i++)printf("%d ",arr[i]);
	arr[p-1]=e;
	printf("\n\nArray After Inserting the Element  : ");
	for(i=0;i<n;i++)printf("%d ",arr[i]);
}
