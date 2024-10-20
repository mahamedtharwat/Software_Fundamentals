#include <iostream>

using namespace std;
class Complex
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
 void Print()
 {
   cout <<  Real1 <<"+" <<Img<<"i"  << endl;
 }
  Complex Sum(Complex c1)
   {
     Complex res ;
   }
};

Complex Subtract (Complex c1 , Complex c2)
{


}




///Stand alone functions
void PrintComplexStandAlone(Complex c1)
{
    cout <<  c1.GetReal() <<"+" <<c1.GetImg()<<"i"  << endl;
}


int main()
{
    Complex c0 , c1 ;
    c0.SetReal(0);
    c0.SetImg(-8);
    PrintComplexStandAlone(c0);
     c1.Sum(c0); ///Member
     Subtract(c1 , c0);///Stand alone function
    c0.Print();

    c1.SetReal(22);
    c1.SetImg(4);
   // c1.Print();
    return 0;
}
