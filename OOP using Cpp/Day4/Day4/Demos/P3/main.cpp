#include <iostream>

using namespace std;
class Base
{
    int x ;
public:
    Base(int _x = 0)
    {
        x = _x;
    }
    int GetX()
    {
        return x ;
    }
    void SetX(int _x)
    {
        x= _x ;
    }
   virtual void Show()
    {
        cout <<"I  am Base"<<endl;
    }
};

class Derived : public Base
{
    int y ;
public:
    Derived(int _x =0,int _y = 0):Base(_x)
    {
        y = _y;
    }
    int GetY()
    {
        return  y;
    }
    void Sety(int _y)
    {
        y = _y ;
    }
    void Show()
    {
        cout <<"I  am Derived"<<endl;
    }
};
class Drived2:public Derived
{
public:
    void Show()
    {
        cout<<"Derived 2"<<endl ;
    }
};
int main()
{
  Base * Bptr = new Derived(1,5);
  Bptr->Show();
  cout<<"-------------------------------"<<endl;
  Bptr = new Derived(5,5);
  Bptr->Show();
  cout<<"-------------------------------"<<endl;
  Drived2* Dptr2 = new Drived2();
  Dptr2->Show();


    return 0;
}
