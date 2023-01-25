#include<stdio.h>
void main()
{
	int n;
	printf("\nEnter the Number : ");
	scanf("%d",&n);
	switch(n%2)
	{
		case 1:
			printf("\n%d is Odd",n);
			break;
		case 0:
			printf("\n%d is Even",n);
	}
}
