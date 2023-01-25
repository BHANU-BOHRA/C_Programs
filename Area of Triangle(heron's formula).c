#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,s,A;
	printf("\nEnter the Dimensions of the Triangle");
	printf("\n\nFirst Side  : ");
	scanf("%f",&a);
	printf("\nSecond Side : ");
	scanf("%f",&b);
	printf("\nThird Side  : ");
	scanf("%f",&c);
	s=(a+b+c)/2;
	A=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("\n\nArea of the Trinangle = %.2f",A);
}
