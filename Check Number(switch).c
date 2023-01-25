#include<stdio.h>
void main()
{
	int n;
	printf("\nEnter a Number  : ");
	scanf("%d",&n);
	switch(n>0)
	{
		case 1:
			printf("\n%d is Positive ",n);
			break;
		case 0:
			switch(n<0)
			{
				case 1:
					printf("\n%d is Negative",n);
					break;
				case 0:
					printf("\nYou Entered Zero");
			}
	}
}
