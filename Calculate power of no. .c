#include<stdio.h>
void main()
{
	int n,m,p=1;
	long long int t;
	printf("\nEnter the Number   : ");
	scanf("%d",&m);
	printf("\n\nEnter it's Power : ");
	scanf("%d",&n);
	t=m;
	while(p<n)
	{
		t=t*m;
		p++;
	}
	printf("\n\n%d^%d = %d",m,n,t);
}
