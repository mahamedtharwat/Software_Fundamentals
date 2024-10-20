#include <iostream>

using namespace std;


int Sum(int x , int z , int y=4 ,  int m=1 ){
return x+y+z+m ;
}

/*
int Sum(int x , int y)
{
 return x+y ;
}
float Sum(float x , float y , int z )
{
 return x+y+z  ;
}

float Sum(int x , float y , float z )
{
return x+y+z  ;
}
*/
int main()
{
    int R =Sum(6,4 ,1 ,1);

    cout << "Sum = " <<R << endl;
    return 0;
}
