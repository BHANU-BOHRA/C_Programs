#include<stdio.h>
void main()
{
	int arr[50],n,i,j,t;
	printf("\nEnter the Number of Elements to input in the Array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n %d Element : ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("\nArray Before Sorting : ");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(arr[j]<arr[j+1])
			{
				t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
		}
	}
	printf("\n\nArray after Sorting  : ");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
