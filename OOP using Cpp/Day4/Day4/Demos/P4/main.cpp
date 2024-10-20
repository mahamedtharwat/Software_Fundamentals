#include <iostream>

using namespace std;
class Shape
{
protected:
    int dim1 ;
public:
   Shape(int d )
   {
       dim1 = d ;
   }
   void SetDim1(int d )
   {
       dim1 = d ;
   }
   int GetDim1()
   {
       return dim1 ;
   }
   virtual float CalcArea()
   {
       return 0 ;
   }
};
class Rect:public Shape{

private:
    int dim2 ;
public:
    Rect(int d1 , int d2) :Shape(d1)
    {
       dim2 = d2 ;
    }
    float  CalcArea  ()override
    {
      return  dim1 * dim2 ;
    }
};
class Square:public Shape{

public:
    Square(int d1 ) :Shape(d1)
    {

    }
    float CalcArea()override
    {
       return dim1 * dim1 ;
    }
};
class Circle:public Shape{

public:
    Circle(int d1 ) :Shape(d1)
    {

    }
     float CalcArea()override
    {
       return 3.14 * dim1 * dim1 ;
    }
};

float CalcSumArea(Shape * s1 , Shape *s2)
{
    return s1->CalcArea() + s2->CalcArea() ;
}
int main()
{
    Square s(2);
    Rect r(2,3);
    Circle c(5);
    cout<<s.CalcArea()<<endl ;
    cout<<r.CalcArea()<<endl ;
    cout<<c.CalcArea()<<endl ;

     Square * s1 = new  Square(3);
     cout<<s1->CalcArea()<<endl ;

     Shape *sh = new Shape(4);
     cout<<sh->CalcArea()<<endl ;

     sh = new Rect(2,4);
     cout<<sh->CalcArea()<<endl ;


    cout<< "Sum = "<< CalcSumArea(new Rect(2,4) , new Square(3))<<endl;
    return 0;
}
