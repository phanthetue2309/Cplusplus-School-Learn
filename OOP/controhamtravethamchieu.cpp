#include<iostream>
using namespace std;

int &Func()
{
	int x = 5;
	return x;
}

int main()
{
	int *p = &Func();

	cout<<*p<<*p<<endl;
	cout<<"======================="<<endl;
	cout<<*p<<endl;
	cout<<*p;


	return 0;
}

