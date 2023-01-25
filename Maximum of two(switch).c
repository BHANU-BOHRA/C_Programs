#include<stdio.h>
void main()
{
	int a,b;
	printf("\nEnter the First Number  : ");
	scanf("%d",&a);
	printf("\nEnter the Second Number : ");
	scanf("%d",&b);
	switch(a>b)
	{
		case 1:
			printf("\n%d is Maximum of two ",a);
			break;
		case 0:
			switch(b>a)
			{
				case 1:
					printf("\n%d is Maximum of Two",b);
					break;
				case 0:
					printf("\nBoth are Equal");
			}
	}
}
