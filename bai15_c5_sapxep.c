#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i,j,temp,a[100];
	printf("Nhap so phan tu cua day: ");
	scanf("%d",&n);
	printf("Day so gom %d phan tu duoc random nhu sau:\n",n);
	for (i=1;i<=n;i++)
	{
		a[i]=rand()%100;
		printf("%d ",a[i]);
	}

	for (i=1;i<=n-1;i++)
		for (j=i+1;j<=n;j++)
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}

	printf("\nDay so sau khi sap xep tang dan:\n");
	for (i=1;i<=n;i++) printf("%d ",a[i]);
	printf("\n");
	return 0;
}