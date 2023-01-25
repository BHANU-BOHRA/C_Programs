#include<stdio.h>
void main()
{
	int d,m,y;
	printf("\nEnter the Date(dd/mm/yyyy) : ");
	scanf("%d/%d/%d",&d,&m,&y);
	if(y<0)printf("\nInvalid Date!");
	else if(m>12||m<1)printf("\nInvalid Date!");
	else if(m==2)
	{
		if(y%4)
		{
			if(d<1||d>28)printf("\nInvalid Date!");
			else printf("\nDate is Correct %d/%d/%d",d,m,y);
		}
		else
		{
			if(d<1||d>29)printf("\nInvalid Date!");
			else printf("\nDate is Correct %d/%d/%d",d,m,y);
		}
	}
	else if(((m==1||m==3||m==5||m==7||m==8||m==10||m==12)&&(d>31||d<1))||((m==4||m==6||m==9||m==11)&&(d<1||d>30)))printf("\nInvalid Date!");
	else printf("\nDate is Correct %d/%d/%d",d,m,y);
}
