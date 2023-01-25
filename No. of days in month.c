#include<stdio.h>
void main()
{
	int m;
	printf("\nEnter the Month(1-12) : ");
	scanf("%d",&m);
	switch(m)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("\nTotal Number of Days are 31");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("\nTotal Number of Days are 30");
		case 2:
			printf("\nTotal Number of Days are 28 or 29(in case of Leap Year)");
			break;
		default:
			printf("\nError! Invalid Input");
	}
}
