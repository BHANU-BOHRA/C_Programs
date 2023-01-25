#include<stdio.h>
int cmp(int a,int b)
{
	if(a==b)return -1;
	return a>b;
}
void main()
{
	int x,y;
	printf("\nEnter the First Number  : ");
	scanf("%d",&x);
	printf("\nEnter the Second Number : ");
	scanf("%d",&y);
	switch(cmp(x,y))
	{
		case 1:
			printf("\n%d is Maximum of Two.",x);
			break;
		case 0:
			printf("\n%d is Maximum of Two.",y);
			break;
		case -1:
			printf("\nBoth are Equal");
	}
}
