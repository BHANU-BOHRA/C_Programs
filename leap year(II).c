#include<stdio.h>
void main()
{
	int y;
	printf("\nEnter a Year : ");
	scanf("%d",&y);
	if(y%4)printf("\n%d is Not a Leap Year",y);
	else printf("\n%d is a Leap Year",y);
}
