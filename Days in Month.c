#include<stdio.h>
void main()
{
	int m;
	printf("\nEnter the Month Number : ");
	scanf("%d",&m);
	if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)printf("\nNumber of Days = 31");
	else if(m==4||m==6||m==9||m==11)printf("\nNumber of Days = 30");
	else if(m==2)printf("\nNumber of Days = 28 or 29");
	else printf("\nInvalid Input");
}
