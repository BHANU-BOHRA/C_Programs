#include<stdio.h>
void main()
{
	int a,b;
	printf("\nEnter two Numbers : ");
	scanf("%d%d",&a,&b);
	switch(a>b)
	{
		case 1: printf("\n\n%d is maximum of two",a);
	            break;
	    case 0: switch(a==b)
	            {
	            	case 1: printf("\n\nBoth the Numbers are Equal");
	            		    break;
	            	case 0: printf("\n\n%d is maximum of Two",b);	    
	            }
	}
}
