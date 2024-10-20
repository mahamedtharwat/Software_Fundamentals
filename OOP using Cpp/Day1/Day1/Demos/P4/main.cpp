#include <iostream>

using namespace std;

///Encapsualtion
///Access Modifiers (public , private , protected )
struct Complex
{
///Data = attributes == data members
private:
    int Real1 ;
    int Img ;

public:
///Member Function
 void SetReal(int r )
 {
   Real1 = r ;
 }
  void SetImg(int i )
 {
   Img = i ;
 }
  int GetReal()
 {
   return Real1 ;
 }
  int GetImg()
 {
   return Img ;
 }
};
int main()
{
    Complex c1 ;
    /*c1.Real = 3 ;
    c1.Img = 4 ;

    c1.Real = 3 ;
    c1.Img = 4 ;*/
    c1.SetReal(4);
    c1.SetImg(3);
    c1.SetReal(6);
    c1.SetImg(7);

   // int x = 5 ;
   // x = 13 ;

    cout <<  c1.GetReal() <<"+" <<c1.GetImg() <<"i"  << endl;
    return 0;
}
