#include<stdio.h>
int main()
{
	int a;
	printf("Enter an Integer : ");
	scanf("%d",&a);
	if(a>0)
	{
		printf("\n\n%d is a Positive Integer",a);
	}
	else if(a==0)
	{
		printf("\n\nYou Entered Zero");
	}
	else
	{
		printf("\n\n%d is a Negative Integer",a);
	}
	return 0;
}
