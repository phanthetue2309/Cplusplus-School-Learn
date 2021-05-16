#include<stdio.h>

int main()
{
	int i,n;
	int j=0,k=0;
	int a[10000],b[10000],c[10000];
	scanf("%d",&n);
	for (i=0; i < n; i++)
	{
		printf("gia tri phan tu a[%d]\t= ",i);
		scanf("%d",&a[i]);
		if (a[i]%2!=0) 
			{
				b[j]=a[i];
				j++;
			}
		else 
			{
				c[k]=a[i];
				k++;
			}
		
		
	}
	j=0;
	k=0;
	for (i=0; i < n; i++)
	{
		if (i>(n-k)-1) 
			{ a[i]=b[j];
				j++;
			}
		else {
			a[i]=c[k];
			k++;
		}
		printf("gia tri phan tu a[%d]=%d\n",i,a[i]);
	
	}
	
	return 0;
}
