#include<stdio.h>
void main()
{
	int n,r,t,s,c,a=0;
	printf("\nEnter the Number till you want to find Palindrome : ");
	scanf("%d",&n);
	printf("\n\nNumbers which are Palindrome till %d are : ",n);
	for(c=0;c<=n;c++)
	{
		t=c;
		s=0;
		while(t!=0)
		{
			r=t%10;
		    s=s*10+r;
		    t=t/10;
		}
		if(c==s)
		{
			printf("%d ",c);
			a++;
			if(a%10==0)printf("\n\t\t\t\t\t    ");
		}
		
	}
}
