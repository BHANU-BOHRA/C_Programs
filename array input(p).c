#include<stdio.h>
void main()
{
	int arr[100],*p,i,n;
	printf("\nEnter the Number Of Elements : ");
	scanf("%d",&n);
	for(i=0,p=arr;i<n;i++,p++)
	{
		printf("\nItem %d : ",i+1);
		scanf("%d",p);
	}
	printf("Array :-\n");
	for(i=0,p=arr;i<n;i++)printf("%d ",*(p+i));
}
