#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the First Number : ");
	scanf("%d",&a);
	printf("Enter the Second Number : ");
	scanf("%d",&b);
	printf("Enter the Third Number : ");
	scanf("%d",&c);
	if(a==b&&a==c)
	{
		printf("\n\nAll Three Entered Numbers are Equal");
	}
	else if(a>b&&a>c)
	{
		printf("\n\n%d is the Maximum of Three",a);
	}
	else if(b>a&&b>c)
	{
		printf("\n\n%d is the Maximum of Three",b);
	}
	else if(c>a&&c>b)
	{
		printf("\n\n%d is the Maximum of Three",c);
	}
	else if(a==b&&a>c)
	{
		printf("\n\nEntered Value for Both First and Second Number is Same i.e. %d Which is Maximum of Three",a);
	}
	else if(b>a&&b==c)
	{
		printf("\n\nEntered Value for Both Second and Third Number is Same i.e. %d Which is Maximum of Three",b);
	}
	else if(c==a&&c>b)
	{
			printf("\n\nEntered Value for Both First and Third Number is Same i.e. %d Which is Maximum of Three",c);
	}
	return 0;
}
