#include<stdio.h>
void main()
{
	int arr[100],n,i,j,k,o[100],e[100];
	printf("\nEnter the No. of Elements to Input : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nElement %d : ",i+1);
		scanf("%d",arr+i);
	}
	printf("\nOrignal Array    : ");
	for(i=0;i<n;i++)printf("%d ",arr[i]);
	for(i=j=k=0;i<n;i++)
	{
		if(arr[i]%2)o[j++]=arr[i];
		else e[k++]=arr[i];
	}
	printf("\n\nOdd Array  : ");
	for(i=0;i<j;i++)printf("%d ",o[i]);
	printf("\n\nEven Array : ");
	for(i=0;i<k;i++)printf("%d ",e[i]);
}
