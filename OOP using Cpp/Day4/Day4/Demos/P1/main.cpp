#include <iostream>

using namespace std;
class Parent
{
private:
    int x ;
    int y ;
public:

   Parent(int _x= 1 , int _y= 4)
   {
       x = _x ;
       y =_y ;
       cout<<"Constructor Parent"<<endl ;
   }
   int GetX()
   {
       return x ;
   }
   int GetY()
   {
       return y ;
   }
   void SetX(int _x )
   {
       x= _x ;
   }
    void SetY(int _y )
   {
       y= _y;
   }
   int Sum()
   {
       return x+y ;
   }
   ~Parent()
   {
       cout<< "Parent Destructor "<<endl ;
   }


};

class Child :public Parent
{
private:
    int z ;
public:
   Child(int _x , int _y , int _z ):Parent(_x , _y)
   {
       z= _z ;
       cout<<"Constructor Child"<<endl ;

   }
    Child( int _z )
   {
       z= _z ;
       cout<<"Constructor Child"<<endl ;
   }
  void SetZ(int _z )
   {
       z= _z ;
   }
   int GetZ()
   {
       return z;
   }
   int Sum()
   {
      return GetX()+GetY()+z ;

   }

    ~Child()
   {
      cout<<"Child Dest " <<endl;
   }

};
int main()
{
    //Parent p(1,2);
   // cout<<p.Sum()<<endl;
    Child c(9);
  //cout<<c.Sum()<<endl;
  //  cout << "Hello world!" << endl;
    return 0;
}
