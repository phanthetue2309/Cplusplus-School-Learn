#include<stdio.h>
#include<math.h>

float sotrunggian(float a, float b, float c)
{
	if ( a > b && a > c) 
		{
			if (b > c) return b;
			return c;
		}
	if ( b > a && b > c)
		{
			if ( a > c) return a;
			return c;
		}
	if ( c > a && c > b)
		{
			if ( a > b) return a;
			return b;
		}
	return c;
	
}
int main()
{
	float a,b,c;
	printf("Nhap 3 so a,b,c=");
	scanf("%f %f %f",&a,&b,&c);
	if (a==b || a==c || b==c) // neu de yeu cau su dung toan tu 
	// if (a-b==0 || a-c==0 || b-c==0)
		{
			printf("Khong co so trung gian ");
			return 0;
		}
	printf("so trung gian:%f",sotrunggian(a,b,c));
}
