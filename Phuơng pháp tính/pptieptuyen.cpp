#include<iostream>
 using namespace std;
#define eps 1e-3

void nhap(float a[], int n)
{
	int i;
	for (i=0;i<=n;i++) cin>>a[i];
}

void nhap1(float b[], int n)
{
	int i;
	for (i=0;i<=n;i++) cin>>b[i];
}

float f(float a[], int n, float x)
{

	float p; int i;
	p=a[0];
	for (i=1;i<=n; i++) p=p*x+a[i];
	return p;
}

float ff(float b[], int n, float x)
{
	float p; int i;
	p=b[0];
	for (i=1;i<=n; i++) p=p*x+b[i];
	return p;
}

int main()
{
	int n;
	float d[100]; float x,y;
	float c[100];
	cout<<"Nhap n "<<endl; cin>>n;
	cout<<"Nhap cac he so ham f"<<endl;
	nhap(c,n);
//	cout<<(float)f(c,n,2);
	cout<<"Nhap cac he so dao ham f"<<endl;
	nhap1(d,n);
	cout<<"Nhap x"<<endl;
	cin>>x;
	do {
		y=x;
		x=y-(float)(f(c,n,y)/ff(d,n,y));
	} while ((y-x)>eps);
	cout<<x;

	return 0;
	
}

