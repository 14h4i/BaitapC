#include <stdio.h>

int main()
{
	float sduong=0,sam=0,demduong=0,demam=0;
	int i,n,a[100];
	printf("Nhap so phan tu cua day: ");scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for (i=1;i<=n;i++)
	{
		if (a[i]>0)
		{
			sduong += a[i];
			demduong++;
		};
		if (a[i]<0)
		{
			sam += a[i];
			demam++;
		};
	}	
	if (sduong != 0) printf("\nTrung binh cong duong la: %0.2f",sduong/demduong);
		else printf("\nTrung binh cong duong la: 0");
	if (sam != 0) printf("\nTrung binh cong am la: %0.2f\n",sam/demam);
		else printf("\nTrung binh cong am la: 0\n");
	return 0;
}