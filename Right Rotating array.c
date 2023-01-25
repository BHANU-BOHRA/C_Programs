#include<stdio.h>
void main()
{
	int arr[100],i,j,r,t,n;
	printf("\nEnter the No. of Element to Enter in the Array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nElement %d : ",i+1);
		scanf("%d",arr+i);
	}
	printf("\n\nHow many terms to Rotate    : ");
	scanf("%d",&r);
	printf("\n\nArray Before Right Rotating : ");
	for(i=0;i<n;i++)printf("%d ",arr[i]);
	for(i=0;i<r;i++)
	{
		for(j=n-2,t=arr[n-1];j>=0;j--)arr[j+1]=arr[j];
		arr[j+1]=t;
	}
	printf("\n\nArray After Right Rotating the Array : ");
	for(i=0;i<n;i++)printf("%d ",arr[i]);
}
