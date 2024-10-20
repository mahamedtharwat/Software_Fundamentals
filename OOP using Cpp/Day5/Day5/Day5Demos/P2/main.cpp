#include <iostream>

using namespace std;
class Complex
{
private:
    int real ;
    int img ;
public:
    Complex(int r  = 0 , int i = 0)
    {
        real = r ;
        img = i ;
    }
    void SetReal(int r)
    {
        real = r;
    }
    void SetImg(int i)
    {
        img = i;
    }
    int GetReal()
    {
        return real ;
    }
    int GetImg()
    {
        return img ;
    }
void print()
{
    cout<<real << "+" <<img << "i"<<endl;
}

Complex operator+(Complex c)
{
    Complex Result ;
    Result.real = this->real + c.real ;
    Result.img = this->img + c.img ;
    return Result ;

}

Complex operator+=(const Complex &c)
{
   //c.real= 87879;
   real = real+ c.real ;

 /// this->real = this->real+ c.real ;
   img = img + c.img ;
   return *this ;


}
Complex operator+(int r )
{
    Complex Result(this->real + r ,this->img  );

    return Result ;

}
Complex operator-(Complex c)
{
    Complex Result ;
    Result.real = this->real - c.real ;
    Result.img = this->img - c.img ;
    return Result ;

}
Complex operator-(int r )
{
    Complex Result(this->real - r ,this->img  );

    return Result ;

}
Complex operator++()  ///c3=++c1 ; pre increment
{
    real++ ;

    Complex res (real , img);
    return res ;

}
Complex operator++(int)  ///c3=c1++ ; post increment
{
 Complex temp(real , img) ;
 real++ ;
 return temp ;

}
};

Complex operator+(int r , Complex c1)
{
    Complex Res(r+ c1.GetReal() , c1.GetImg());
    return Res ;
}

Complex operator-(int r , Complex c1)
{
    Complex Res(r- c1.GetReal() , c1.GetImg());
    return Res ;
}





int main()
{
    Complex c1(2,3), c2(4,5) , c3;
   // c3 = c1+c2 ;
   // c3 = c1-c2 ;
   // c3 = c1+5 ;
    //c3 = c1-5 ;
    c3= 5-c1 ;
    c3.print();
   // c1+=c2 ; /// c1 = c1+c2 ;
    //c3  = c1.Sum(c2);
    c3 = c1++ ;
   // c3 = ++c1 ;
    c1.print();
    c3.print();



    return 0;
}




