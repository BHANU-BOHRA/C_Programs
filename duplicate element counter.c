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
	for(i=j=0;i<n-1;i++)if(arr[i]==arr[i+1])j++;
	printf("\n\nTotal Number of Duplicate Elements : %d",j);
}
