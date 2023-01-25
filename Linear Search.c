#include<stdio.h>
void main()
{
	int arr[50],i,n,a;
	printf("\nEnter the No. of Elements to in the Array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nElement %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("\nEnter the Element to Find in the Array : ");
	scanf("%d",&a);
	for(i=0;i<n&&arr[i]!=a;i++);
	if(i<n)
	{
		printf("\nSearch was Successfull, %d was Found at index %d",a,i);
	}
	else 
	{
		printf("\nSearch was Unsuccessfull!");
	}
}
