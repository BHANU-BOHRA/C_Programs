#include<stdio.h>
#include<math.h>
void main()
{
	float n;
	int p;
	printf("\nEnter the Number to print the First three Power : ");
	scanf("%f",&n);
	for(p=1;p<=3;p++)
	{
		printf("\n\n%.1f^%d = %.1f",n,p,pow(n,p));
	}
}
