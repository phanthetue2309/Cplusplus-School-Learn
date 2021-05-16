#include<stdio.h>
#include<conio.h>
#define max 10 
void nhap(float *a, int n , char ten);

int main()
{
	char tt; int n,i,j;
	float a[max][max],y[max];
	while (1)
		{
			printf("\n Nhap n: "); scanf("%d",&n);
			printf("\n Nhap gia tri ham %d moc noi suy: \n",n);
			nhap(y,n,'y');
			for (i=0 ; i < n; i++) a[i][0]=y[i];
			for (i=1; i <=n; i++) 
				for (j=1; j <=i ;j++)
					a[i][j]=a[i][j-1]-a[i-1][j-1];
					
			printf("\n Bang sai phan:\n\n");
			for (i=0; i <n ; i++)
				{
					for (j=0; j <=i; j++) printf("%10.3f",a[i][j]);
					printf("\n");
				}
			printf("\n\n Ban tiep tuc ko (c/k)");
			tt=getch();
			if (tt!='c') break;	
		}
	
}

void nhap(float *a,int n,char ten)
{
	int i;
	for (i=0; i < n; i++)
	{
		printf("%c[%d]=",ten,i);
		scanf("%f",a+i);
	}
}
