#include<stdio.h>
void main()
{
	int a,b,c;
	printf("\nEnter the First Angle  : ");
	scanf("%d",&a);
	printf("\nEnter the Second Angle : ");
	scanf("%d",&b);
	printf("\nEnter the Third Angle  : ");
	scanf("%d",&c);
	if((a+b+c)==180)printf("\nTriangle with the Follwing Angles is Valid");
	else printf("\nTriangle is Invalid");
}
