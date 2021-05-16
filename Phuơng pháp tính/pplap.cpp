#include<iostream>
#include<stdlib.h>
#include<math.h>
 using namespace std;
#define eps 1e-3
double g(double a)
{
	return pow(a+1,(double)1/3) ;
}
int main()
{
	double x,y;
	
	cout<<"Nhap x ";
	cin>>x;
	do 
		{
			y=x;
			x=g(x);
			cout<<x<<endl;

		} while ((x-y)>eps);
	
	return 0;
}
