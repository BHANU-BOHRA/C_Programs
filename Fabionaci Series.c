#include<stdio.h>
void main()
{
	int t,f,w,n,i;
	printf("\nEnter the value of N : ");
	scanf("%d",&n);
	i=t=w=0;
	f=1;
	while(i<n)
	{
		if(i<=1)printf("%d ",i);
		else
		{
			w=t+f;
			printf("%d ",w);
			t=f;
			f=w;	
		}
		i++;
	}
	
}
