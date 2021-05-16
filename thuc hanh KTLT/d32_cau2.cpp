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
	int max=0;
	for (i=0; i < n; i++)
	{
		if (a[i]%2!=0) 
			{
				if (max<a[i]) max=a[i];
			}	
	}	
	printf("So nguyen le lon nhat la %d",max);
}

