#include <iostream>

using namespace std;
template <typename X>
X Add(X a , X b)
{
    return a+b ;
}

template <typename X1 ,typename X2 >
void PrintTwoDataType(X1 a , X2 b )
{
    cout <<"First "<< a << " Second "<< b<< endl ;
}

int main()
{
   cout<<"Int Addtion = " << Add(2 ,3)<<endl ;
   cout<<"Float Addtion = " << Add(2.4 ,3.7)<<endl ;
   cout<<"String Addtion = " << Add(string("Hello " ),string( " world"))<<endl ;
   cout<<"........................."<<endl ;
   PrintTwoDataType(22 , 4.6);
   PrintTwoDataType(string("test") , 9.6);
   PrintTwoDataType(33.4, 9);

    return 0;
}
