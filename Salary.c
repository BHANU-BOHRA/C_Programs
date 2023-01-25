#include<stdio.h>
int main()
{
	int bs,hra,da,ts;
	printf("Enter Salary of The Employee : ");
	scanf("%d",&bs);
	if(bs<5000)
	{
		hra=bs*5/100;
		da=bs*2.5/100;
		ts=bs+hra+da;
		printf("\n\nTotal Salary of the Employee is %d\n\nWhere\n  Basic Salary=%d\n  DA=%d\n  HRA=%d",ts,bs,da,hra);
	}
	else
	{
		hra=bs*2.5/100;
		da=bs*2/100;
		ts=bs+hra+da;
		printf("\n\nTotal Salary of the Employee is %d\n\nWhere\n  Basic Salary=%d\n  DA=%d\n  HRA=%d",ts,bs,da,hra);
	}
	return 0;
}
