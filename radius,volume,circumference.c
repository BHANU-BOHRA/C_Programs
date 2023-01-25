#include<stdio.h>
#include<math.h>
#define PI 3.142857
void main()
{
	int o,c;
	float v1,v2;
	do
	{
		printf("\nWhat do you want to Calculate\n\nEnter '1' for Radius of Circle\nEnter '2' for Circumference of Circle\nEnter '3' for Volume of Cylender\n\nEnter your Option : ");
		scanf("%d",&o);
		switch(o)
		{
			case 1:
				printf("\nEnter Area of Circle: ");
				scanf("%f",&v1);
				printf("\nRadius of Circle : %.2f",sqrt(v1/PI));
				break;
			case 2:
				printf("\nEnter Radius of Circle : ");
				scanf("%f",&v1);
				printf("\nCircumference of Circle : %.2f",2*PI*v1);
				break;
			case 3:
				printf("\nEnter Radius of Cylender : ");
				scanf("%f",&v1);
				printf("\nEnter Height of Cylender : ");
				scanf("%f",&v2);
				printf("\nVolume of Cylender : %.2f",PI*v1*v1*v2);
				break;
			default:
				printf("\nError! Invalid Input");
		}
		printf("\n\nEnter '1' to Continue or '0' to Exit : ");
		scanf("%d",&c);
	}while(c);
}
