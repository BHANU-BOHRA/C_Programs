#include<stdio.h>
void main()
{
	int r,c,i,j,n;
	scanf("%d",&n);
	puts("");
	n=n/2+1;
	for(r=i=1;r>0;r+=i)
	{
		for(c=j=1;c>0;c+=j)
		{
			if(c==r||c==1)putchar('*');
			else putchar(' ');
			if(c==n)j=-1;
		}
		if(r==n)i=-1;
		puts("");
	}
}
