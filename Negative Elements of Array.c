#include<stdio.h>
void main()
{
	int arr[100],i,n;
	printf("\nEnter the No. of Elements to Input : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nElement %d : ",i+1);
		scanf("%d",arr+i);
	}
	printf("\nNegative Elements of the Array : ");
	for(i=0;i<n;i++)if(arr[i]<0)printf("%d ",arr[i]);
}
