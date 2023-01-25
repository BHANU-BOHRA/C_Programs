#include<stdio.h>
void main()
{
	int y;
	printf("\nEnter the Year : ");
	scanf("%d",&y);
	if(y%4)printf("\n%d is not a Leap Year",y);
	else printf("\n%d is a Leap Year",y);
}
