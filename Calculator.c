#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a,b,o;
	printf("\nEnter First Number : ");
	scanf("%d",&a);
	printf("\nEnter Second Number : ");
	scanf("%d",&b);
	do
	{
		printf("\nEnter 1 for Addition");		
		printf("\nEnter 2 for Subtraction");		
		printf("\nEnter 3 for Multipliction");		
		printf("\nEnter 4 for Division");		
		printf("\nEnter 5 for Remender");		
		printf("\nEnter 6 for Exit\n");
		scanf("%d",&o);
		switch(o)
		{
			case 1:
				printf("Sum = %d\n",a+b);
				break;
			case 2:
				printf("Difference = %d\n",a-b);
				break;
			case 3:
				printf("Product = %d\n",a*b);
				break;
			case 4:
				printf("Quotient = %d\n",a/b);
				break;
			case 5:
				printf("Remender = %d\n",a%b);
				break;
			case 6:
				exit(0);
			default:
				printf("Error! Invalid Input\n");
		}
	}while(o!=0);
}
