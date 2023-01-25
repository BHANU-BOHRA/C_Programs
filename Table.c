#include<stdio.h>
void main()
{
	int i,n;
	printf("\nEnter the Number for which you want genrate table : ");
	scanf("%d",&n);
	printf("\n   Table of %d\n\n",n);
	for(i=1;i<=10;i++)printf("%d x %d = %d\n",n,i,n*i);
}
