#include<stdio.h>


float f(float a)
{
	return a/(1+a*a);
}

int main()
{
		float a,b;
	int n;
	
	printf("Nhap a=");scanf("%f",&a);
	printf("Nhap b=");scanf("%f",&b);
	printf("Nhap n=");scanf("%d",&n);
	float h=(b - a) / 2/ n;
	float j=(f(a)+f(b));
	for (int i=1; i <= 2*n -1 ; i ++)
		{
			if (i%2) j+=4*f(a+i*h);
			else j+=2*f(a+i*h);
		}
	printf("Gia tri tich phan = %f",h*j / 3);
	return 0;
}
