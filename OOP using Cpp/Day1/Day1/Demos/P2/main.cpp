#include <iostream>

using namespace std;

int main()
{
    ///Allocation in Heap using C
   int * ptr ;
   ptr =(int *) malloc(sizeof(int)* 4 );
   free(ptr);

   ///Allocation in Heap using C++
    int * ptr1 ;
    ///ptr =new int(5); with intial val
    ///ptr =new int;
      delete ptr ;

    ///Array of Data
    ptr  = new int[4] ;
    delete [] ptr ;

    return 0;
}
