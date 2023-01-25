#include<stdio.h>
void main()
{
	int arr[100],a[100],n,t,i,j;
	printf("\nEnter the No. of Elements to Input : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nElement %d : ",i+1);
		scanf("%d",arr+i);
	}
	printf("\nArray Before Removing Duplicates : ");
	for(i=0;i<n;i++)printf("%d ",arr[i]);
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
		}
	}
	printf("\n\nArray After Removing Duplicates : ");
	for(i=0,a[0]=arr[0],j=1;i<n-1;i++)
	{
		if(arr[i]!=arr[i+1])
		{
			a[j]=arr[i+1];
			j++;
		}
	}
	for(i=0;i<j;i++)printf("%d ",a[i]);
}
