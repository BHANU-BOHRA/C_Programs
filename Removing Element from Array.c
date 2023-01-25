#include<stdio.h>
void main()
{
	int arr[100],n,i,e,p,t;
	printf("\nEnter the No. of Elements to Input : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nPosition %d : ",i+1);
		scanf("%d",arr+i);
	}
	printf("\nEnter the Element to Remove : ");
	scanf("%d",&e);
	printf("\nEnter it's Position : ");
	scanf("%d",&p);
	printf("\nArray Before Removing the Element : ");
	for(i=0;i<n;i++)printf("%d ",arr[i]);
	arr[p-1]=e;
	for(i=0;i<n;i++)
	{
		if(arr[i]==e&&i+1==p)
		{
			while(i<n)
			{
				t=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=t;
				i++;
			}
			arr[n]=0;
			break;
		}
	}
	printf("\n\nArray After Removing the Element  : ");
	for(i=0;i<n-1;i++)printf("%d ",arr[i]);
}
