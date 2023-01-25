#include<stdio.h>
void main()
{
	int n,o,e,r,t,c;
	printf("\nEnter the Number : ");
	scanf("%d",&n);
	t=n;
	c=1;
	o=e=0;
	while(t)
	{
		r=t%10;
		if(c%2)o=o+r;
		else e=e+r;
		c++;
		t=t/10;
	}
	r=o-e;
	if((o-e)<0)r=-r;
	if(r==0||r%11==0)printf("\n%d is Divisible by 11",n);
	else printf("\n%d is not Divisible by 11",n);
}
