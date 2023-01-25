#include<stdio.h>
void main()
{
	int arr[50],n,i,s;
	printf("\nEnter the Number of Elements to input in the Array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n %d Element : ",i+1);
		scanf("%d",arr+i);
	}
	for(i=s=0;i<n;i++)
	{
		s=s+*(arr+i);
	}
	printf("\nSum of all the Array Elements : %d",s);
}
