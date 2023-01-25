#include<stdio.h>
void main()
{
	int arr[100],n,i,e,p;
	printf("\nEnter the No. of Elements to Input : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nElement %d : ",i+1);
		scanf("%d",arr+i);
	}
	printf("\nEnter the Element to Search : ");
	scanf("%d",&e);
	for(i=0;i<n&&arr[i]!=e;i++);
	if(i==n)printf("\nSearch was Unsuccessfull");
	else printf("\nSearch was Successfull %d was Found at index %d",e,i);
}
