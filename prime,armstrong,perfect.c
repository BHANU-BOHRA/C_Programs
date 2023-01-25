#include<stdio.h>
#include<math.h>
int pri(int n)
{
	int i=0;
	for(i=2;i<=sqrt(n)&&n%i;i++);
	if(i>=sqrt(n))return 1;
	return 0;
}
int arm(int n)
{
	int i,s,r,t;
	t=n;
	i=s=0;
	while(t)
	{
		r=t%10;
		s+=r*r*r;
		t=t/10;
	}
	if(n==s)return 1;
	return 0;
}
int pre(int n)
{
	int i,s=0;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)s+=i;
	}
	if(s+1==n)return 1;
	return 0;
}
void main()
{
	int n;
	printf("\nEnter the Number : ");
	scanf("%d",&n);
	printf("\nEntered Number is :-\n\n  Prime Number   : ");
	pri(n)?printf("YES"):printf("NO");
	printf("\n\nArmstrong Number : ");
	arm(n)?printf("YES"):printf("NO");
	printf("\n\n Prefect Number  : ");
	pre(n)?printf("YES"):printf("NO");
}
