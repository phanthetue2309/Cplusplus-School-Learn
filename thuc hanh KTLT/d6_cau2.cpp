#include<stdio.h>

int main()
{
	int i,n;
	int a[10000];
	scanf("%d",&n);
	for (i=0; i < n; i++)
	{
		printf("gia tri phan tu a[%d]\t= ",i);
		scanf("%d",&a[i]);
	}
	int k;
	printf("Nhap k ");
	scanf("%d",&k);
	for (int i=0; i < n-1 ; i++)
	{
		if (a[i]==k) 
		{
			a[i]=a[i+1];
			n--;
		}
		if (a[n-1]==k) n--;
	}
	for (int i=0; i< n ; i++)
		printf("a[%d]=%d\n",i,a[i]);
	return 0;
}

