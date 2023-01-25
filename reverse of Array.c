#include<stdio.h>
void main()
{
	int arr[100],t,j,i,n;
	printf("\nEnter the No. of Elements to Input : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nElement %d : ",i+1);
		scanf("%d",arr+i);
	}
	printf("\nOrignal Array    : ");
	for(i=0;i<n;i++)printf("%d ",arr[i]);
	for(i=0;i<n;i++);
	for(--i,j=0;j<i;i--,j++)
	{
		t=arr[i];
		arr[i]=arr[j];
		arr[j]=t;
	}
	printf("\n\nReversed Array : ");
	for(i=0;i<n;i++)printf("%d ",arr[i]);
}
