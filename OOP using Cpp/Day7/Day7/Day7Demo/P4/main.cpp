#include <iostream>
#include <math.h>
using namespace std;

class NegativeNumberException
{
public:
   string Message ="Error : Negative Numbers are not allowed ";

};

float SquareRoot(int num)
{
    if (num <0 )
    {
        throw NegativeNumberException();
    }
    else
        return sqrt(num);
}
int main()
{
    try
    {
    float x = SquareRoot(-4);
    cout<< " Square Root = "<< x <<endl;
    }
    catch(NegativeNumberException e)
    {
        cout<< e.Message<<endl ;
    }
    return 0;
}
