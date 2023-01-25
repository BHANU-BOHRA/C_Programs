#include<stdio.h>
void main()
{
	int arr[50],n,i,l,s;
	printf("\nEnter the Number of Elements to input in the Array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n %d Element : ",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=1,l=s=arr[0];i<n;i++)
	{
		if(arr[i]<s)
		{
			s=arr[i];
		}
		else if(arr[i]>l)
		{
			l=arr[i];
		}
	}
	printf("\nSmallest Element of the Array = %d\nLargest Element of the Array = %d",s,l);

}
