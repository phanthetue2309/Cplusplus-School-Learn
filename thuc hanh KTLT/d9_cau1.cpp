#include<stdio.h>

int main()
{
	int h,p,s ;
	int h1,p1,s1;
	int n;
	
	printf("nhap gio h= "); scanf("%d",&h);
	printf("nhap phut p= "); scanf("%d",&p);
	printf("nhap giay s= "); scanf("%d",&s);
	
	printf("Nhap so giay can them n= "); scanf("%d",&n);
	
	h1=n/3600;
	p1=(n-h1*3600)/60;
	s1=n-h1*3600-p1*60;
	s=s+s1;
	if (s >=60) 
		{
			s=s-60;
			p++;
		}
	p=p+p1;
	if (p >=60) 
		{
			p=p-60;
			h++;
		}
	h=h+h1;
	if (h>24)
		{
			h=h-24;
		}
	printf("thoi diem sau n giay la %d gio %d phut %d giay ",h,p,s);
	
}
