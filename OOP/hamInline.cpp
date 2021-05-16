#include <iostream>
 
using namespace std;

inline int Max(int x, int y)
{
   return (x > y)? x : y;
}


/*int Max(int x, int y)
{
   return (x > y)? x : y;
}
*/
// ham main cua chuong trinh
int main( )
{

   cout << "Gia tri lon nhat cua (30,20) la: " << Max(30,20) << endl;
   cout << "Gia tri lon nhat cua (15,10) la: " << Max(15,10) << endl;
   cout << "Gia tri lon nhat cua (120,1230) la: " << Max(120,1230) << endl;
   return 0;
}
