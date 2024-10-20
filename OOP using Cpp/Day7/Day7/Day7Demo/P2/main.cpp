#include <iostream>

using namespace std;
template <typename T>
class Box
{
    T val ;
public :
    Box(T v)
    {
        val = v ;
    }
    void Display()
    {
        cout<< "My Value  = "<< val <<endl ;
    }
};
int main()
{
    Box<int> b1(4);
    Box<float> b2(4.6);
    Box<string> b3("test");
    b1.Display();
    b2.Display();
    b3.Display();

    return 0;
}
