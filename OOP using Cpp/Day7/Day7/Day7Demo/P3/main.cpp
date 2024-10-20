#include <iostream>

using namespace std;
int divide(int a , int b)
{
    if(b==0)
    {
         // cout<<"Can't divide by zero "<<endl ;
         // return -1 ;
          throw invalid_argument("Can't divide by zero ");
    }

    else
    return a /b ;
}
int main()
{
    try
    {
           cout<<divide(3,3)<<endl;
    }
    catch(exception e )
    {
        cout<< "Error " << e.what()<<endl ;
    }

   // cout << "Hello world!" << endl;
    return 0;
}
