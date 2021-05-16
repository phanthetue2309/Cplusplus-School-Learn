#include<stdlib.h>
#include<stdio.h>
#define max 1e5
void nhap(float a[], int &n)
{ 
printf("nhap so phan tu :" );
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  { printf(" phan tu thu %d :",i);
    scanf("%f",&a[i]);
  }
}

void xuat(float a[], int &n)
{ 
  for(int i=0; i<n; i++)
  printf("%3.2f  ",a[i]);
  
}

float min(float a[] , int &n)
{
	int j;
	float min1=max;
	for (int i=0 ; i < n; i++)
	{
		if (min1 > a[i])	min1=a[i];
	}
	return min1;
}
 void xoa(float a[],int &n)
 {
 	int i,j;
 	i=0;
 	while (i < n)
 		{
 			if (a[i]==min(a,n))
 				{
 					for (j=i ; j < n-1 ;j++)
 					a[j]=a[j+1];
 					n--;
 					break;
				 }
			i++;
		 }
 }
 
 
 
int main()
{
	 float a[50],b[50];
	 int n,m,p;
 	nhap(a,n);
 	nhap(b,m);
 	xuat(a,n);
 	printf("\n");
 	xuat(b,m);
 	printf("\n");
 	float c,d;
 	p=n+m;
 	for (int i=0 ; i < p; i++)
 	{
 			 c=min(a,n);
 			 d=min(b,m);
 			if ( c < d )
 				{
 					printf("%3.2f  ",c);
					xoa(a,n);	
				}
			else 
				{
					printf("%3.2f  ",d);
					xoa(b,m);
				}
	 }
	
	
    return 0;
}

