#include<stdio.h>
void main()
{
	int n;
	printf("\nEnter the Number of Day(1-7) : ");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("\nDay : Monday");
			break;
		case 2:
			printf("\nDay : Tuesday");
			break;
		case 3:
			printf("\nDay : Wednesday");
			break;
		case 4:
			printf("\nDay : Thrusday");
			break;
		case 5:
			printf("\nDay : Friday");
			break;
		case 6:
			printf("\nDay : Saturday");
			break;
		case 7:
			printf("\nDay : Sunday");
			break;
		default :
			printf("\nError! Invalid Input");
	}
}
