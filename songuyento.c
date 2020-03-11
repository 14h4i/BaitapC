#include <stdio.h>
#include <math.h>
int main()
	{
		int n,kt=0;
		printf("Nhap n: ");scanf("%d",&n);
		for(int i=2;i <= sqrt(n);i++)
		{
			if(n % i == 0) 
			{
			kt++;
			};
		};
		if(kt==0 || n==1 || n==2 ) printf("%d la so nguyen to",n );
		else printf("%d ko phai so nguyen to",n);
		return 0;
	}