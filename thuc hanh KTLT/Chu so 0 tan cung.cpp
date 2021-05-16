#include <stdio.h>
#include <math.h>
int min(int a, int b)
{
	if (a>b) return a;
	return b;
}
int main()
{
	long long int x, y,m,n, u2 = 0, u5 = 0;
	long long int i ;
	int k;
	printf("Nhap truong hop: ");
	scanf("%d", &k);
	if (k==1) 
	{
		
		for (i = 0; i < n; i++)
	{
		scanf("%lld",&x);
		if (x == 0)
		{
			u2 = 1;
			printf("Co 1 so 0");
			return 0;
		}
		y = x;
		while (x % 2 == 0)
		{
			u2 += 1;
			x /= 2;
		}
		while (y % 5 == 0)
		{
			u5 += 1;
			y /= 5;
		}
		
	}
	}
	long long int u=0;
	if (k==2)
	{
		i=1;
		printf("Nhap so dau ");scanf("%lld",&m);
		printf("Nhap so cuoi ");scanf("%lld",&n);
		do 
		{
			u+=n/pow(5,i);
			i++;
		}
		while (n / pow(5,i) > 1);
		printf("%lld",u);
	}
	//printf("\nCo %lld chu so 0", (u2 < u5) ? u2 : u5);
}
