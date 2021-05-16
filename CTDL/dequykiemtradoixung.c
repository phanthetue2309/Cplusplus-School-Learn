#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 100
int KiemTraMangDoiXung(int a[], int n)
{
	int i;
	for( i = 0; i < n/2; i++)
	{
		if(a[i] != a[n - i - 1])
		{
			return -1;
			break;
		}
	}
	return 1;
}
int main()
{
	int a[MAX],n,i;
	printf("\nSo phan tu trong mang: ");
	scanf("%d",&n);
	printf("\nNoi dung cua mang: ");
	for(i=0 ; i<n ; i++ )
	{	scanf("%d",&a[i]);}
	if(KiemTraMangDoiXung(a,n) == 1)
		printf("\nMang doi xung ");
	else
		printf("\nMang khong doi xung ");
	return 0;
}


