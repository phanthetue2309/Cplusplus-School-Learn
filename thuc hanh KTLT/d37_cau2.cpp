#include<stdio.h>

int main()
{
	int n,m,i,j,a[10000],b[10000];
	
	printf("Nhap so phan tu mang a "); scanf("%d",&n);
	printf("Nhap so phan tu mang b "); scanf("%d",&m);
	
	for (i=0; i < n; i++)
	{
		printf("gia tri phan tu a[%d]= ",i);
		scanf("%d",&a[i]);
		
	}
	
	for (i=0; i < m; i++)
	{
		printf("gia tri phan tu b[%d]= ",i);
		scanf("%d",&b[i]);
		
	}
	
	j=0;
	for (i=0; i < n+m ; i++)
			{
				if (i > n-1 ) a[i]=b[j] , j++;
			}	
			
	for (i=0; i< n+m -1 ; i++)
	{
		int im=i;
		for (j=i+1; j<n+m; j++)
			if (a[j] < a[im] ) im=j;
			int temp=a[i];
				a[i]=a[im];
				a[im]=temp;
			
		}
	for (i=0; i < n+m; i++)
	{
		printf("\nGia tri phan tu a[%d] = ",i);
		printf("%d",a[i]);
	}
	
	return 0;
	
}
