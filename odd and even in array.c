#include<stdio.h>
void main()
{
	int arr[100],i,n,o,e;
	printf("\nEnter the No. of Elements to Input : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nElement %d : ",i+1);
		scanf("%d",arr+i);
	}
	for(o=e=i=0;i<n;i++)
	{
		if(arr[i]%2)o++;
		else e++;
	}
	printf("\nTotal Number of Odd Elements : %d\n\nTotal Number of Even Elements : %d",o,e);
}
