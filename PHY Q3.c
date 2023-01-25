#include<stdio.h>
#include<math.h>
void main()
{
	char root=171;
	float r,d,rv,rrv,l12,d12,lr;
	printf("Enter Last two Digit of Your Roll no. : ");
	scanf("%f",&r);
	printf("\n          l=Lambda\n");
	d=5.0+r*0.01;
	printf("\n\nl(1)=6*10^(-7) m\n\nl(2)=%.2f*10^(-7) m\n\nAccording to question",d);
	printf("\n\n(n*l(1)*R)^%c = [(n+1)*l(2)*R]^%c   -(1)\n\nR=0.9 m",root,root);
	printf("       D(n)=2*r(n)=2*(n*l(1)*R)^%c\n\nFrom Equation (1)",root);
	printf("\n\nn*l(1)R=(n+1)*l(2)*R\nn*l(1)=n*l(2)+l(2)\nl(2)=n[l(1)-l(2)]");
	printf("\n\nn = l(2)/[l(1)-l(2)]   -(2)\n\n   Put value of n in eq.(1) from eq.(2)");
	printf("\n\nD(n)=2*[{l(2)/(l(1)-l(2))}*l(1)*R]^%c",root);
	printf("\n\nD(n)=2*[{l(2)*l(1)/(l(1)-l(2))}*R]^%c",root);
	l12=6*d;
	d12=6-d;
	printf("\n\nD(n)=2*[{%.2f*10^(-14)}*(0.9)/%.2f*10^(-7)*]^%c",l12,d12,root);
	printf("\n\nD(n)=2*10^(-3)[(%.2f*0.09)/%.2f]^%c",l12,d12,root);
	rv=(l12*0.09)/d12;
	rrv=sqrt(rv);
	lr=2*rrv;
	printf("\n\nD(n)=2*10^(-3)*(%.4f)^%c",rv,root);
	printf("\n\nD(n)=2*10^(-3)*%.4f",rrv);
	printf("\n\n\nD(n)=%.4f*10(-3) m\n\n\nD(n)=%.4f mm",lr,lr);
}
