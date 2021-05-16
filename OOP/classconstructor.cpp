#include <iostream>
using namespace std;
class Line
{
   public:
      void setChieuDai( double dai );
      double layChieuDai( void );
      Line(double dai);  // Day la phan khai bao constructor
   private:
      double chieudai;
}; 
// phan dinh nghia cac ham thanh vien, bao gom constructor
Line::Line( double dai)
{
    cout << "Doi tuong dang duoc tao, chieudai = " << dai << endl;
    chieudai = dai;
}
 
void Line::setChieuDai( double dai )
{
    chieudai = dai;
}
 
double Line::layChieuDai( void )
{
    return chieudai;
}
// ham main cua chuong trinh
int main( )
{
   Line line(10.0);
 
   // lay chieu dai da duoc khoi tao ban dau.
   cout << "Chieu dai cua line la: " << line.layChieuDai() <<endl;
   // thiet lap chieu dai mot lan nua
   line.setChieuDai(6.0); 
   cout << "Chieu dai cua line la: " << line.layChieuDai() <<endl;
   line.setChieuDai(11.0); 
   cout << "Chieu dai cua line la: " << line.layChieuDai() <<endl;
 
   return 0;
}
