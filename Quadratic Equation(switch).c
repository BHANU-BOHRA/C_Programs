#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,ds,r;
	printf("     Quadratic Eqation = ax^2 + bx + c\n\nEnter the Value of a : ");
	scanf("%f",&a);
	printf("\nEnter the Value of b : ");
	scanf("%f",&b);
	printf("\nEnter the Value of c : ");
	scanf("%f",&c);
	ds=(b*b)-(4*a*c);
	switch(ds>0)
	{
		case 1:
			ds=sqrt(ds);
		    r=-b/(2*a);
		    ds=ds/(2*a);
		    printf("\nRoots are Real and Distinct\n\nRoot Value 1 : %.1f\n\nRoot Value 2 : %.1f",r+ds,r-ds);
		    break;
		case 0:
			switch(ds<0)
			{
				case 1:
					ds=sqrt(-ds);
		            r=-b/(2*a);
		            ds=ds/(2*a);
		            printf("\nBoth the Roots are Imaginary\n\nRoot Value 1 : %.1f + %.1fi\n\nRoot Value 2 : %.1f - %.1fi",r,ds,r,ds);
		            break;
		        case 0:
		        	r=-b/(2*a);
		            printf("\nRoots are Real and Equal\n\nRoot Value 1 : %.1f\n\nRoot Value 2 : %.1f",r,r);
			}
	
	}
}
