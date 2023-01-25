#include<stdio.h>
void main()
{
	int arr[100],c[100],i,n;
	printf("\nEnter the No. of Elements to Input : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nElement %d : ",i+1);
		scanf("%d",arr+i);
	}
	for(i=0;i<n;i++)c[i]=arr[i];
	printf("\nOrignal Array : ");
	for(i=0;i<n;i++)printf("%d ",arr[i]);
	printf("\n\nCopied Array  : ");
	for(i=0;i<n;i++)printf("%d ",c[i]);
}
