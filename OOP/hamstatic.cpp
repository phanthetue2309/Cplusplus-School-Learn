#include <iostream>
 
using namespace std;

class Box
{
   public:
      static int biendemDT;
      // phan dinh nghia Constructor
      Box(double dai=1.0, double rong=1.0, double cao=1.0)
      {
         cout <<"Constructor duoc goi." << endl;
         chieudai = dai;
         chieurong = rong;
         chieucao = cao;
         // gia tri cua biendemDT tang len moi khi doi tuong duoc tao
         biendemDT++;
      }
      double theTich()
      {
         return chieudai * chieurong * chieucao;
      }
      static int layBienDem()
      {
         return biendemDT;
      }
   private:
      double chieudai;     // Chieu dai cua mot box
      double chieurong;    // Chieu rong cua mot box
      double chieucao;     // Chieu cao cua mot box
};

// khoi tao thanh vien static cua lop Box
int Box::biendemDT = 0;

int main(void)
{
  
   // in tong so doi tuong duoc tao truoc khi tao cac doi tuong.
   cout << "So doi tuong ban dau la: " << Box::layBienDem() << endl;

   Box Box1(2.4, 4.2, 2.2);    // khai bao box1
   Box Box2(4.5, 2.0, 3.2);    // khai bao box2

   // in tong so doi tuong duoc tao sau khi tao cac doi tuong.
   cout << "Tong so doi tuong sau khi tao la: " << Box::layBienDem() << endl;

   return 0;
}
