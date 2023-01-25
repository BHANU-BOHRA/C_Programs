#include<stdio.h>
void main()
{
	int arr[100],n,i,l,sl;
	printf("\nEnter the No. of Elements to Input : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nElement %d : ",i+1);
		scanf("%d",arr+i);
	}
	for(i=1,l=sl=arr[0];i<n;i++)
	{
		if(arr[i]>l)
		{
			sl=l;
			l=arr[i];
		}
		else if(l==sl||(arr[i]>sl&&arr[i]!=l))sl=arr[i];
	}
	printf("\nSecond Largest Element in Array is %d",sl,l);
}
