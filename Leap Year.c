#include<stdio.h>
int main()
{
	int y;
	printf("Enter Year : ");
	scanf("%d",&y);
	if(y%4==0)
	{
		printf("\n\n%d is a Leap Year",y);
	}
	else
	{
		printf("\n\n%d is not a Leap Year",y);
	}
	return 0;
}
