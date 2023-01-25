#include<stdio.h>
fs(int n)
{
	if(n<2)return n;
	else return fs(n-1)+fs(n-2);
}
void main()
{
	int n;
	printf("\nEnter the Number of Element to See : ");
	scanf("%d",&n);
	printf("\n%d Element of Fibonnaci Series : %d",n,fs(n));
}
