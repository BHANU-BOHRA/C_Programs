#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the First Number : ");
	scanf("%d",&a);
	printf("Enter the Second Number : ");
	scanf("%d",&b);
	if(a>b)
	{
		printf("\n\n%d is the Maximum of two Numbers",a);
	}
	else if(a==b)
	{
		printf("\n\nBoth the Numbers are Equal");
	}
	else
	{
		printf("\n\n%d is Maximum of two Numbers",b);
	}
	return 0;
}
