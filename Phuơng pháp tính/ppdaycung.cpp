#include<iostream>
#include<math.h>
 using namespace std;
#define eps 1e-6

void nhap(float a[], int n)
{
	int i;
	for (i=0;i<=n;i++) cin>>a[i];
}

float f(float a[], int n, float x)
{

	float p; int i;
	p=a[0];
	for (i=1;i<=n; i++) p=p*x+a[i];
	return p;
}



int main()
{
	int n;
	 float x,y,a,b,d;
	float c[100];
	cout<<"Nhap n "<<endl; cin>>n;
	cout<<"Nhap cac he so ham f"<<endl; nhap(c,n);
	cout<<"Nhap a b "<<endl; cin>>a>>b;

		do{
			x=a-((b-a)*(f(c,n,a)))/((f(c,n,b)-f(c,n,a)));
			if ((f(c,n,x)*f(c,n,a))<0) {
			b=x;
			d=b;
			}
	else {
		a=x;
		d=a;
		}	
	} while (fabs(d-x)>eps);
	cout<<x;
return 0;
}
