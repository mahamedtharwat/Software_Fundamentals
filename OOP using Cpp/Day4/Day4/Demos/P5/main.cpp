#include <iostream>

using namespace std;
class Base
{
    int x ;
public:
    Base(int _x = 0)
    {
        x=_x ;
    }
    int GetX()
    {
        return x ;
    }
    void SetX(int _x)
    {
        x=_x ;
    }
    virtual void Show()
    {
        cout << "I am Base Class "<<endl ;
    }

};
class Drived :public Base
{
    int y ;
public :
    Drived(int _y=0)
    {
        y=_y ;
    }
     int GetY()
    {
        return y ;
    }
    void SetY(int _y)
    {
        y=_y ;
    }
    void Show() override
    {
        cout << "I am Drived Class "<<endl ;
    }
};

class Drived2 :public Drived
{

public :

    void Show() override
    {
        cout << "I am Drived2 Class "<<endl ;
    }
};
int main()
{
   /* Base b(4);
    b.Show();
    Drived d(5);
    d.Show();
    Drived2 d2;
    d2.Show();
    */
    Base * b = new Drived(4);
    b->Show();

     Base * b1 = new Drived2;
     b1->Show();
    cout << "Hello world!" << endl;
    return 0;
}
