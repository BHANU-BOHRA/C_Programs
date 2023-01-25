#include<stdio.h>
void main()
{
	float p,a,b,c;
	printf("\nEnter Marks of English : ");
	scanf("%f",&a);
	printf("\nEnter Marks of Hindi   : ");
	scanf("%f",&b);
	printf("\nEnter Marks of Maths   : ");
	scanf("%f",&c);
	p=(a+b+c)/3;
	if(p<40||a<33||b<33||c<33)
	printf("\nStudent has Failed!");
	else
	printf("\nStudent has Passed the Exam with %.2f%%",p);
}
