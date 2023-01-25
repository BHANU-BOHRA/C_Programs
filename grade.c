#include<stdio.h>
void main()
{
	float per,p,ch,m,b,co;
	printf("\n\nEnter the Marks of Physics   : ");
	scanf("%f",&p);
	printf("\n\nEnter the Marks of Chemistry : ");
	scanf("%f",&ch);
	printf("\n\nEnter the Marks of Maths     : ");
	scanf("%f",&m);
	printf("\n\nEnter the Marks of Biology   : ");
	scanf("%f",&b);
	printf("\n\nEnter the Marks of Computer  : ");
	scanf("%f",&co);
	per=((p+ch+m+b+co)/500)*100;
	printf("\n\nPercentage = %.2f",per);
	printf("\n\n   Grade   = ");
	if(per>=90)printf("A+");
	else if(per>=80)printf("A");
	else if(per>=70)printf("B");
	else if(per>=60)printf("C");
	else if(per>=50)printf("D");
	else if(per>=40)printf("E");
	else printf("Fail");
}
