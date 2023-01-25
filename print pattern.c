#include<stdio.h>
void PP(int n)
{
	int i;
	if(n==1)
	{
		printf("\n\n");
		putchar('*');
		printf("\n");
		return;
	}
	PP(n-1);
	for(i=0;i<2*n-1;i++)putchar('*');
	printf("\n");
}
void main()
{
	int n;
	printf("\nEnter the Number of Rows to Print in the Pattern : ");
	scanf("%d",&n);
	PP(n);
}
