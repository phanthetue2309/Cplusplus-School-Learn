#include<stdio.h>
double noisuy(int n , float *x , float *y , float c);
void viethe(int n, float *x, float *y,float c);

int main()
{
	float x[100] , y[100] ;
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
		{	printf("Nhap y[%d]=",i);
			scanf("%f",&y[i]);
		}
	if (noisuy(n,x,y,c) != 0 ) 
	{
	printf("%f",noisuy(n,x,y,c));
	printf("\n");
	viethe(n,x,y,c);
	printf("\n Tiep tuc bam c ");
	tt=getch();
	if (tt!='c') break;
	}
	else 
		{
		printf("\n Nhap sai");
		printf("\n Tiep tuc bam c ");
		tt=getch();
		if (tt!='c') break;
		}
	}
	return 0;
}

double noisuy(int n, float *x, float *y,float c)
{
	float w=1 ;
	float s=0, d=0 ;
	int i,j;  
	for (i =1 ; i< n+1 ; i++)
		{
			w*= (float)(c - x[i]) ;
			d = c - x[i];
			if ( d == 0 ) return 0;
			for (j = 1 ; j < n +1 ; j++)
		
					if (j != i ) d= d * ( x[i] - x[j] );
			s+= (float)(y[i] / d );		 
		}
	return w*s ;
}

void viethe(int n, float *x, float *y,float c)
{
	int i,j; float d;
	d=1;
	for (i=1; i < n +1 ; i++)
	 for (j=1 ; j < n + 1 ; j++)
		{	
			
			if (i==j) 
			{ printf("%f ",c-x[j]);
				d*=c-x[j];
			}
			else 
				{y[j]=x[i]-x[j];
				printf("%f ",y[j]);
				d*=y[j];
				}
			
			if (j==n) 
				{ printf(" %f ",d);
				  printf("\n");
				  d=1;
				}
		}
}
