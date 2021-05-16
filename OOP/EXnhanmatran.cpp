#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
typedef int mt[20][20];

void nhapmt(mt a, char *ten, int m, int n)
{
	for (int i=1 ; i <=m ; i++)
		for (int j=1; j <=n ; j++)
		{
			cout<<"\n"<<ten<<"["<<i<<","<<j<<"]=";
			cin>>a[i][j];
		}
}

void nhapmt(mt a, char *ten, int n)
{
	nhapmt(a,ten,n,n);
}

void inmt(mt a, char *ten, int m, int n)
{
	cout<<"\nMa tran: "<<ten;
	for (int i=1; i <=m ; i++)
		{
			cout<<"\n";
			for (int j=1; j <=n; j++)
			cout<<setw(6)<<a[i][j];
		}
}

void inmt(mt a, char *ten, int n)
{
	inmt(a,ten,n,n);
}

void nhanmt(mt a, mt b, mt c, int m , int n, int p)
{
	for (int i =1 ; i <=m ; i++)
	 	for (int j=1; j<=p; j++)
	 	{
	 		c[i][j]=0;
	 		for (int k=1; k<=n ; k++)
	 			c[i][j]+=a[i][k] * b[k][j];
		 }
}

void nhanmt(mt a,mt b, mt c, int n)
{
	nhanmt(a,b,c,n,n,n);
}

int main()
{
	mt a,b,c,d ; //d= a*b*c
	mt u;
	nhapmt(a,"A",2);
	nhapmt(b,"B",2);
	nhapmt(c,"C",2,3);
	
	nhanmt(a,b,u,2);
	nhanmt(u,c,d,2,2,3);
	
	inmt(a,"A",2);
	inmt(b,"B",2);
	inmt(c,"C",2,3);
	inmt(d,"D=U*C",2,3);
	getch();
}


