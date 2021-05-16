#include<stdio.h>
#include<math.h>

float tinh(int n,  float x)
{
	float s;
	s=1;
	int i;
	if (n==0) return 1; 
	for(i=1; i <= n; i++)
		{
			s+= (float)(pow(x,i)/i);
		}
	return s;	
}

int main()
{
	int n;
	float x;
	printf("Nhap n= "); scanf("%d",&n);
	printf("Nhap x= "); scanf("%f",&x);
	printf("%4f",tinh(n,x));
	return 0;
}


