#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *a,n,i;
	printf("\nEnter the Number Elements to Store in Array : ");
	scanf("%d",&n);
	a=(int*)calloc(n,sizeof(int));
	if(!a)
	{
		printf("\n\nFailed to Allocate Memory..\n");
		exit(1);
	}
	for(i=0;i<n;i++)
	{
		printf("\nItem %2d : ",i+1);
		scanf("%d",a+i);
	}
	printf("\nEntered Array : ");
	for(i=0;i<n;i++)printf("%d ",*(a+i));
	printf("\n\nEnter New Size for Array : ");
	scanf("%d",&n);
	a=(int*)realloc(a,sizeof(int)*n);
	printf("\n\nEnter New Elements :-\n");
	for(i;i<n;i++)
	{
		printf("\nItem %2d : ",i+1);
		scanf("%d",a+i);
	}
	printf("\nIncreased Array : ");
	for(i=0;i<n;i++)printf("%d ",*(a+i));
}
