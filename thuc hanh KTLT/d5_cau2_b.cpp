#include<stdio.h>

int Check(long n) //kiem tra so nguyen to
{
  long k=2;

  while (k*k<=n && n%k!=0) k++;
  return k*k>n;
} 

int main()
{
	int i,n;
	long a[10000];
	scanf("%d",&n);
	for (i=0; i < n; i++)
	{
		printf("gia tri phan tu a[%d]\t= ",i);
		scanf("%d",&a[i]);
		printf("%d\n",Check(a[i]));
	}

}
	
	
	
