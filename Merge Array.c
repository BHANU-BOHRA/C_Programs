#include<stdio.h>
void main()
{
	int arr[100],b[100],c[200],n1,n2,t,i,j,k;
	printf("\nEnter the No. of Elements to Input in First Array : ");
	scanf("%d",&n1);
	for(i=0;i<n1;i++)
	{
		printf("\nElement %d : ",i+1);
		scanf("%d",arr+i);
	}
	printf("\nEnter the No. of Elements to Input in Second Array : ");
	scanf("%d",&n2);
	for(i=0;i<n2;i++)
	{
		printf("\nElement %d : ",i+1);
		scanf("%d",b+i);
	}
	for(i=1;i<n1;i++)
	{
		for(j=0;j<n1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
		}
	}
	for(i=1;i<n2;i++)
	{
		for(j=0;j<n2-i;j++)
		{
			if(b[j]>b[j+1])
			{
				t=b[j];
				b[j]=b[j+1];
				b[j+1]=t;
			}
		}
	}
	printf("\nFirst Array  : ");
	for(i=0;i<n1;i++)printf("%d ",arr[i]);
	printf("\n\nSecond Array : ");
	for(i=0;i<n2;i++)printf("%d ",b[i]);
	i=j=k=0;
	while(i<n1&&j<n2)
	{
		if(arr[i]<b[j])c[k++]=arr[i++];
		else c[k++]=b[j++];
	}
	while(i<n1)c[k++]=arr[i++];
	while(j<n2)c[k++]=b[j++];
	printf("\n\nMerged Array : ");
	for(i=0;i<k;i++)printf("%d ",c[i]);
}
