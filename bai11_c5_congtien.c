#include <stdio.h>

int main()
{
	int n,nm,d5=0,d2=0,d1=0;
	printf("\nNhap so tien (don vi: ngan dong): ");
	scanf("%d",&n);
	nm=n;
	tiep:
	if (n >= 5) 
	{
		n -= 5;
		d5++;
	}
	else if (n >= 2)
	{
		n -= 2;
		d2++;
	}
	else if  (n >= 1)
	{
		n -= 1;
		d1++;
	}
	if (n != 0) goto tiep;
	else printf("Can %d to tien 5000, %d to tien 2000, %d to tien 1000 de co %d dong\n",d5,d2,d1,nm*1000);
	return 0;
}