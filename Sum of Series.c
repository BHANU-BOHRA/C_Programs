#include<stdio.h>
void main()
{
	int n,t,f,s=0;
	printf("\nEnter the Value of n : ");
	scanf("%d",&n);
	f=t=1;
	while(t<=n)
	{
		f=f*t;
		s=s+f;
		t++;
	}
	printf("\nSum of the Series is : %d",s);
}
