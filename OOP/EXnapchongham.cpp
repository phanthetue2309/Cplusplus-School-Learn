#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

void nhapds(int *x, int n)
{
	for (int i =1 ; i <=n ; i++)
	{
		cout<<"phan tu"<<i<<"=";
		cin>>x[i];
	}
}

void nhapds(double *x, int n)
{
	for (int i =1 ; i <=n ; i++)
	{
		cout<<"phan tu"<<i<<"=";
		cin>>x[i];
	}
}

int max(int x, int y)
{
	return x>y?x:y;
}

double max(double x, double y)
{
	return x>y?x:y;
}

int max(int *x, int n)
{
	int s=x[1];
	for (int i=2 ; i < n; i++)
	 	s= max(s,x[i]);
	return s;
	
}

double max(double *x, int n)
{
	double s=x[1];
	for (int i=2 ; i < n; i++)
	 	s= max(s,x[i]);
	return s;
	
}
int main()
{
	int a[20] ,n,ni,nd,maxi;
	double x[20],maxd;
	cout<<"\nSo phan tu nguyen ni ="; cin>>ni;
	cout<<"\nNhap so nguyen "; nhapds(a,ni);
	cout<<"\nSo phan tu thuc nd="; cin>>nd;
	cout<<"\nNhap so thuc ";nhapds(x,nd);
	maxi=max(a,ni);
	maxd=max(x,nd);
	cout<<"\nMax cua day so nguyen "<<ni;
	cout<<"\nMax cua day so thuc"<<setw(3)<<nd;
	getch();
	
	
}

