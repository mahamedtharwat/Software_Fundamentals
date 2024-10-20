#include <iostream>

using namespace std;
class Complex
{
private:
    int Real ;
    int Img ;
public:
///Constructor is a function :automatic call when we take an object from class
///1- has no retrun type
///2- call once when we create object
///3- Name Of Constructor same as class name

 ///Complex(){}
///Default Pram
 Complex(int R = 0, int I =0)
    {
        Real = R ;
        Img = I ;
    }


  /*
  Complex(int n)
    {
        Real =Img = n ;
    }
     Complex()
    {
        Real =Img = 0 ;
    }*/




    ///Function over loading
    /// نوع - عدد - ترتيب ال
    ///input param
    void InitComplex(int R , int I)
    {
        Real = R ;
        Img = I ;
    }
     void InitComplex(int n)
    {
        Real =Img = n ;
    }
     void InitComplex()
    {
        Real =Img = 0 ;
    }
    void SetReal(int r)
    {
        Real = r ;
    }
    void SetImg(int I)
    {
        Img = I ;
    }
    int GetReal()
    {
        return Real ;
    }
    int GetImg();

    ///Member function
   Complex Sum(Complex c1)
    {
        Complex temp ;
        temp.Real = this->Real + c1.Real ;
        temp.Img = this->Img + c1.Img ;
        return temp ;
    }
    ///Inline Function
    void Print() ;

    ///Destructor
    ~Complex()
    {
        cout<< "Dead class "<<endl ;
        //delet prt ;
        //close connection db
       // close file
    }

};
void Complex::Print()
    {
        cout<<Real<< "+"<<Img <<"i"<<endl ;
    }

 int Complex::GetImg()
    {
        return Img ;
    }
/*Complex Sub(Complex c1 , Complex c2)
{
    Complex c3 ;
    c3.SetReal(c1.GetReal()-c2.GetReal());
    c3.SetImg(c1.GetImg()- c2.GetImg());
    return c3 ;
}
*/
int main()
{

   Complex c1(6,7) , c2 , c3 ;
  // c1.InitComplex(6 ,9);
   c1.Print();
   c1.SetReal(2);
   c2.SetReal(2);
   c1.SetImg(3);
   c2.SetImg(3);

   c3 = c1.Sum(c2);
 //c3 = Sub(c1 , c2);
 //  c3.Print();
    return 0;
}
