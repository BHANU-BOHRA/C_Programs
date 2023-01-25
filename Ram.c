#include<stdio.h>
void main()
{
	int e,a1,a2,n,s;
	printf("\nEnter the the Number of Times Ram has given Exam : ");
	scanf("%d",&e);
	printf("\n                 A1 A2 Final Score");
	for(s=0,n=1;n<=e;n++)
	{
		printf("\n Examination  %d: ",n);
		scanf("%d%d",&a1,&a2);
		if(a1>=a2)
		{
			printf("                            %d",a1);
			s=s+a1;
		}
		else
		{
			printf("                            %d",a2);
			s=s+a2;
		}
	}
	printf("\n\n      Sum of all marks is : %d",s);
}
