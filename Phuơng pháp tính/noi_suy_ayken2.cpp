#include<iostream>
#include<conio.h>

double noisuy2(int n , float *x , float y[10][10] , float c);
void viethe(int n, float *x, float y[10][10],float c);

             
int main()
{
	float x[10] , y[10][10] ;
	int n; char tt;
	float c;
	
	printf("Nhap n "); scanf("%d",&n);
	int i;
	while (1)
	{                                                                                                                                                      
	printf("\nNhap c "); scanf("%f",&c);
	for (i=1; i < n+1 ; i++)
		{	printf("Nhap x[%d]=",i);
			scanf("%f",&x[i]);
		}
	for (i=1; i < n+1 ; i++)
		{	printf("Nhap y[%d][0]=",i);
			scanf("%f",&y[i][1]);
		}

	printf("%f",noisuy2(n,x,y,c));
	printf("\n");
	viethe(n,x,y,c);
	printf("\n Tiep tuc bam c ");
	tt=getch();
	if (tt!='c') break;
	}
	return 0;
}

double noisuy2(int n, float *x , float y[10][10] , float c)
{
	int i , j; 
	for (j=2; j < n+1 ; j++)
		for ( i = j  ; i < n+1 ; i++)
				{
					y[i][j]=( y[j-1][j-1]*(x[i]-c) - y[i][j-1]*(x[j-1]-c) )/(x[i]-x[j-1]);
				//	printf("\n%f ",y[i][j]);
				}
			return y[n][n];
}

void viethe(int n, float *x, float y[10][10] ,float c)
{
	int i, j; 
	for (i=1 ; i < n+1 ; i++)
		{
		for (j=1 ; j< n + 1 ; j++)
			{
				if (j>i) printf(" ");
				else printf("%f ",y[i][j]);
			
			}
printf("\n");
		}
}
