#include<stdio.h>
#include<math.h>
void main()
{
	char root=171,mu=230;
	float r,D7,r1,D18,mv,lv,rv,rrv,r2v,rr2v;
	printf("Enter Last two Digit of Your Roll no. : ");
	scanf("%f",&r);
	printf("\n          l=Lambda\n");
	D7=0.3+r*0.001;
	mv=1.0+r*0.01;
	printf("\nD7=2*r7=%.3f cm\n\n(a)  Diameter of 18th Ring:-",D7);
	printf("\n\nD18=2*r18=2*(18*l*R)^%c   -(1)\n\nD7=2*r7=(7*l*R)^%c=%.3f  -(2)\n\nNow Equation (1)/(2)",root,root,D7);
	printf("\n\n(2*r18/2*r7) = (2*(18*l*R)^%c/2*(7*l*R)^%c\n\nWhere\n  2*r18=D18\n  2*r7=%.3f",root,root,D7);
	printf("\n\nD18/%.3f = (18/7)^%c",D7,root);
	r1=sqrt(18)/sqrt(7);
	printf("\n\nD18 = %.5f*%.3f",r1,D7);
	D18=r1*D7;
	printf("\n\nD18 = %.5f cm",D18);
	printf("\n\n\n(b)  %c=%.2f",mu,mv);
	printf("\n\nFormula=> r(n)=((n-%c)*l*R/%c)^%c",root,mu,root);
	printf("\n\n          r7=[{(7-%c)*l*R}/%.2f]^%c   -(3)",root,mv,root);
	printf("\n\n          l*R=[(%.3f)^2]/4*7   [From Equation (1)]");
	lv=(D7*D7)/(4*7);
	printf("\n\n          l*R=%.4f",lv);
	rv=(6.5*lv)/mv;
	rrv=sqrt(rv);
	printf("\n\n            [(6.5*%.4f)/%.2f]^%c  =  (%.5f)^%c",lv,mv,root,rv,root);
	printf("\n                                    =   %.4f cm",rrv);
	printf("\n\n          r18=[{(18-%c)*l*R}/%.2f]^%c",root,mv,root);
	r2v=(17.5*lv)/mv;
	rr2v=sqrt(r2v);
	printf("\n\n            [(17.5*%.4f)/%.2f]^%c  =  (%.5f)^%c",lv,mv,root,r2v,root);
	printf("\n                                     =   %.4f cm",rr2v);
}
