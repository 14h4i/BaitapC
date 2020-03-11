#include <stdio.h>

int main()
	{
		int a,b,c,d,s;
		printf("Nhap lan luot 4 so nguyen: ");
		scanf("%d %d %d %d",&a,&b,&c,&d);
		printf("\na=%d b=%d c=%d d=%d",a,b,c,d);
		s=a*b*c*d;
		printf("\nTich 4 so tren la %d\n", s);
		return 0;
	}