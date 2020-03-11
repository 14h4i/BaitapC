#include <stdio.h>

int main()
	{
		int bl,n;
		float lk1,lk2;
		printf("bac luong: ");scanf("%d",&bl);
		printf("so ngay cong trong thang: ");scanf("%d",&n);
		printf("luong da nhan o ki 1: ");scanf("%f",&lk1);
		lk2=(bl*n/26)-lk1;
		printf("luong ki 2 la: %0.2f",lk2);
		return 0;
	}