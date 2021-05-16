#include<stdio.h>
#include<math.h>
#define esp 1e-6

float f(float x)
{
	return (float)pow(2,x)-x+4 ;
}

int nhap(float a, float b)
{
	printf("\nNhap a,b "); scanf("%f %f",&a,&b);
}

main()
{
	float x,a,b;
	char ch;
	while(ch !='c')		
{	
	nhap(a,b);	
	if (f(a)*f(b)>0) printf("Nhap sai") ;		 
	else
		{
			do
			{
			x=a-(b-a)*f(a)/(f(b)-f(a));
			if (f(a)*f(x)<0) b=x; else a=x;
			}while (fabs(f(x))>esp);
		printf("Gia tri bai toan la %d",x);
		
		}
	printf("\n Dung lai bam c tiep tuc ky tu khac ");
	scanf("%c",&ch);
	ch=getchar();
}
	
}
