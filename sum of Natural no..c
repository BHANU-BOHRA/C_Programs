#include<stdio.h>
long long int sumNn(int n)
{
	if(n==0)return 0;
	return n+sumNn(n-1);
}
void main()
{
	int n;
	printf("\nEnter the Number till you want to Calculate Sum of Natural Number : ");
	scanf("%d",&n);
	printf("\nSum of Natural Numbers till %d : %lld",n,sumNn(n));
}
