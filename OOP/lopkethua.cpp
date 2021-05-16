#include <iostream>
using namespace std;
// lop co so: Hinh
class Hinh 
{
   public:
      void setChieuRong(int rong)
      {
         chieurong = rong;
      }
      void setChieuCao(int cao)
      {
         chieucao = cao;
      }
   protected:
      int chieurong;
      int chieucao;
};

// lop co so: ChiPhiSonMau
class ChiPhiSonMau 
{
   public:
      int tinhChiPhi(int dientich)
      {
         return dientich * 300000;
      }
};

// day la lop ke thua: HinhChuNhat
class HinhChuNhat: public Hinh, public ChiPhiSonMau
{
   public:
      int tinhDienTich()
      { 
         return chieurong * chieucao; 
      }
};

int main(void)
{
   HinhChuNhat Hcn;
   int dientich;
 
   Hcn.setChieuRong(14);
   Hcn.setChieuCao(30);

   dientich = Hcn.tinhDienTich();
   
   // in dien tich cua doi tuong.
   cout << "Tong dien tich la: " << Hcn.tinhDienTich() << " m2." << endl;

   // in tong chi phi de son mau
   cout << "Tong chi phi de son mau la: " << Hcn.tinhChiPhi(dientich) << " VND." << endl;

   return 0;
}
