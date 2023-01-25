#include<stdio.h>
void main()
{
	int m;
	printf("\nEnter Your Marks : ");
	scanf("%d",&m);
	switch(m/10)
	{
		case 10:
		case 9:
			printf("\nYour Grade is 'A'(OUTSTANDING)");
			break;
		case 8:
			printf("\nYour Grade is 'B'(GOOD)");
			break;
		case 7:
			printf("\nYour Grade is 'C'(COULD DO BETTER)");
			break;
		case 6:
			printf("\nYour Grade is 'D'(NEED TO IMPROVE)");
			break;
		case 5:
			printf("\nYour Grade is 'E'(POOR)");
			break;
		case 4:
			printf("\nYour Grade is 'E-'(JUST PASS)");
			break;
		case 3:
		case 2:
		case 1:
		case 0:
			printf("\nYour Grade is 'F'(FAIL)");
			break;
		default :
			printf("\nError! Invalid Input");
	}
}
