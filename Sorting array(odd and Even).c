#include<stdio.h>
void main()
{
	int arr[100],i,j,n,t,o=0;
	printf("\nEnter the No. of Element to Enter in the Array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nElement %d : ",i+1);
		scanf("%d",arr+i);
		if(arr[i]%2)o++;
	}
	printf("\nArray Before Sorting : ");
	for(i=0;i<n;i++)printf("%d ",arr[i]);
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(arr[j]%2)
			{
				t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
		}
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-o-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
		}
		for(j=n-o;j<n-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
		}
	}
	printf("\n\nArray After Sorting : ");
	for(i=0;i<n;i++)printf("%d ",arr[i]);
}
