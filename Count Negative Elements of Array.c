#include<stdio.h>
void main()
{
	int arr[100],i,n,r;
	printf("\nEnter the No. of Elements to Input : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nElement %d : ",i+1);
		scanf("%d",arr+i);
	}
	for(r=i=0;i<n;i++)if(arr[i]<0)r++;
	printf("\nTotal Number of Negative Elements : %d",r);
}
