#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *a,n,i;
	printf("\nEnter the Number whose Table You want to Store : ");
	scanf("%d",&n);
	a=(int*)malloc(sizeof(int)*10);
	if(!a)
	{
		printf("\n\nFailed to Allocate Memory..\n");
		exit(1);
	}
	for(i=1;i<11;i++)a[i-1]=n*i;
	printf("\nTable Before Reallocation :-\n");
	for(i=0;i<10;i++)printf("\n%d x %02d = %2d",n,i+1,*(a+i));
	a=(int*)realloc(a,sizeof(int)*15);
	for(i=11;i<16;i++)a[i-1]=n*i;
	printf("\n\nTable After Reallocation :-\n");
	for(i=0;i<15;i++)printf("\n%d x %02d = %2d",n,i+1,*(a+i));
}
