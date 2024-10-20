#include <iostream>

using namespace std;
// swap [value , address, reference]

void SwapByValue(int val1, int val2){
    int temp = 0;
    temp = val1;
    val1 = val2;
    val2 = temp;
}
void SwapByAddress(int *num1, int *num2){
    int temp = 0;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
void SwapByReference(int &x, int &y){
    int temp = 0;
    temp = x;
    x = y;
    y = temp;
}



int main()
{
    int a = 5 , b = 20;

    SwapByValue(a,b);
    cout<<"after swap by value "<<"val1 = "<<a<<" ,val2 = "<<b<<endl;

    SwapByAddress(&a, &b);
    cout<<"After swap by address "<<"num1 = "<<a<<" , num2 = "<<b<<endl;

    SwapByReference(a, b);
    cout<<"After swap by reference "<<"x = "<<a<<" , y = "<<b<<endl;
    return 0;
}
