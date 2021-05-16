#include<iostream>
#include<string.h>
using namespace std;

class DoanhNghiep
{
	public:
		
			string ten;
			string diachi;
			int soluong;
			float doanhthu;	
			
			void nhap()
			{
				cout<<"ten doanh nghiep "; cin>>ten;
				cout<<"dia chi "; cin>>diachi;
				cout<<"So luong nhan vien "; cin>>soluong;
				cout<<"Doanh thu "; cin>>doanhthu;
			}
			
			void xuat()
			{
				cout<<"-------------------"<<endl;
				cout<<"TEN:"<<ten<<endl;
				cout<<"DIA CHI:"<<diachi<<endl;
				cout<<"SO LUONG "<<soluong<<endl;
				cout<<"DOANH THU"<<doanhthu<<endl;
				cout<<"-------------------"<<endl;
			}
		
};
int main()
{
	int n,i;
	DoanhNghiep a;
	cout<<"Nhap so luong doanh nghiep ";
	cin>>n;
	while (n)
	{
		a.nhap();
		a.xuat();
		n--;
	}

}

