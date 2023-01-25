#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("Enter the First Number : ");
	scanf("%d",&a);
	printf("Enter the Second Number : ");
	scanf("%d",&b);
	printf("\nNumbers Before Swap:- a=%d and b=%d",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("\nNumbers After Swap:- a=%d and b=%d",a,b);
	return 0;
}
