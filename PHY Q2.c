#include<stdio.h>
#include<math.h>
void main()
{
	char ang=143,mu=230,root=171;
	float r,d6,rv,rrv;
	printf("Enter Last two Digit of Your Roll no. : ");
	scanf("%f",&r);
	printf("\n          l=Lambda\n");
	printf("\n\n l=6000 %c",ang);
	d6=3.0+r*0.01;
	printf("\n\nD6=2*r6=2*[{(6-%c)*l*R}/%c]^%c = %.2f mm",root,mu,root,d6);
	printf("\n\nR=1m=100cm\nD6=%.2fmm=%.2f*10^(-1)cm\nl=6000%c=6000*10^(-8)cm\n\nNow",d6,d6,ang);
	printf("\n\n[2*{(5.5)*6000*10^(-8)*100}/%c = %.2f*10(-1)]",mu,d6);
	printf("\n\n        Squaring Both Sides");
	rv=d6*d6;
	printf("\n\n%c = [{(4)*(5.5)*(6)*10^(-3)}/(%.4f)*10^(-2)]",mu,rv);
	rrv=(4*5.5*0.6)/rv;
	printf("\n\n\n%c=%.5f",mu,rrv);
}
