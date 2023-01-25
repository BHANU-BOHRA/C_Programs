#include<stdio.h>
void main()
{
	int a;
	printf("\nEnter the Amount to be Given : ");
	scanf("%d",&a);
	printf("\nNotes of 2000 = %d",a/2000);
	a=a%2000;
	printf("\nNotes of 500 = %d",a/500);
	a=a%500;
	printf("\nNotes of 200 = %d",a/200);
	a=a%200;
	printf("\nNotes of 100 = %d",a/100);
	a=a%100;
	printf("\nNotes of 50 = %d",a/50);
	a=a%50;
	printf("\nNotes of 20 = %d",a/20);
	a=a%20;
	printf("\nNotes of 10 = %d",a/10);
	a=a%10;
	if(a!=0)
	{
		printf("\nCoins of 5 = %d",a/5);
		a=a%5;
		printf("\nCoins of 2 = %d",a/2);
		a=a%2;
		printf("\nCoins of 1 = %d",a);
	}
}
