#include<stdio.h>
void main()
{
	float arr[100],t;
	int i,j,n;
	printf("\nEnter the No. of Items to Input in the Array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nItem %d : ",i+1);
		scanf("%f",arr+i);
	}
	printf("\nArray Before Sorting : ");
	for(i=0;i<n;i++)printf("%.2f ",arr[i]);
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
	printf("\n\nArray Sorted in Ascending Order  : ");
	for(i=0;i<n;i++)printf("%.2f ",arr[i]);
	printf("\n\nArray Sorted in Descending Order : ");
	for(i=n-1;i>=0;i--)printf("%.2f ",arr[i]);
}
