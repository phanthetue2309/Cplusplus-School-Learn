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
	float h=(b - a) / n;
	float j=(f(a)+f(b))/2;
	for (int i=1; i <= n -1; i++)
	j+=f(a + i * h);
	printf("Gia tri tich phan = %f",h*j);
	return 0;
}
