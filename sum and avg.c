#include<stdio.h>
void sa(int i,int j,int *s,float*a)
{
	*s=i+j;
	*a=(float)*s/2;
}
void main()
{
	int x,y,s;
	float a;
	printf("\nEnter the Value of 1st No. : ");
	scanf("%d",&x);
	printf("\nEnter the Value of 2nd No. : ");
	scanf("%d",&y);
	sa(x,y,&s,&a);
	printf("\n\nSum = %d\n\nAverage = %.1f",s,a);
}
