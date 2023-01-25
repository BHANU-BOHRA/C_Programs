#include<stdio.h>
int swap(int *x,int *y)
{
	int t;
	t=*y;
	*y=*x;
	return t;
}


void main()
{
	int a,b,*x,*y;
	printf("\nEnter the First Number  : ");
	scanf("%d",&a);
	printf("\nEnter the Second Number : ");
	scanf("%d",&b);
	x=&a;
	y=&b;
	printf("\nNumber Before Swap a = %d  b = %d",a,b);
	*x=swap(x,y);
	printf("\n\nNumber After Swap  a = %d  b = %d",a,b);
}
