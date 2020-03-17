#include <stdio.h>
#include <math.h>
int ptb2(float a, float b, float c, float *x1, float *x2)
{
	float delta;
	if (a==0) return 0;
	delta = b*b-4*a*c;
	if (delta==0)
	{
		*x1=-b/2*a;
		*x2=-b/2*a;
		return 1;
	};
	if (delta>0)
	{
		*x1=(-b-sqrt(delta))/(2*a);
		*x2=(-b+sqrt(delta))/(2*a);
		return 2;
	};
	if (delta<0) return 3;
}
int main()
{
	float a,b,c,x1,x2;
	int s;
	printf("Phuong trinh co dang:\n\tax^2 + bx + c = 0\n");
	printf("Nhap a: ");scanf("%f",&a);
	printf("Nhap b: ");scanf("%f",&b);
	printf("Nhap c: ");scanf("%f",&c);
	printf("Phuong trinh:\n\t%0.2fx^2 + %0.2fx + %0.2f = 0\n",a,b,c);
	s=ptb2(a,b,c,&x1,&x2);
	if (s==0) printf("Phuong trinh co a = 0\n");
	else if (s==1) printf("Phuong trinh co nghiem kep x1 = x2 = %0.2f\n",x1);
	else if (s==2) printf("Phuong trinh co 2 nghiem:\nx1 = %0.2f\nx2 = %0.2f\n",x1,x2);
	else if (s==3) printf("Phuong trinh vo nghiem\n");
	return 0;
}
