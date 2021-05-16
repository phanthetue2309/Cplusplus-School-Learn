#include<stdio.h>
#include<math.h>

int check(int n)
{
	int i;
	if (n==1) return 0;
	if (n==2) return 1;
	else for (i=2; i <= sqrt(n) ; i++) 
		 if (n%i==0) return 0;
	return 1;
}

int main()
{
	int n,i;
	int a[1000];
	
	printf("Nhap n ") ;
	scanf("%d",&n);

	for (i=0; i < n; i++)
		{	printf("a[%d] = ",i);
			scanf("%d",&a[i]);
		}
	for (i=0; i< n; i++)
		{
			printf("\na[%d] = %d ",i,a[i]) ; 
		}
	for (i=0 ; i < n; i++)
		{
	
			if (check(a[i])==1)
				printf("\nso nguyen to tai a[%d] = %d ",i,a[i]);
			else printf("\n");
		} 
}
