#include <iostream>

using namespace std;

template <typename T>
class Number{
private:
    T number1;
    T number2;
public:
    Number(T n1, T n2){
       number1 = n1;
       number2 = n2;
    }
    T GetFirst(){
        return number1;
    }
    T GetSecond(){
        return number2;
    }
    void Swap(){
        T temp;
        temp = number1;
        number1 = number2;
        number2 = temp;
        cout<<number1<<" "<<number2<<endl;
    }
};

int main()
{
    Number<int> n(5,8);
    n.Swap();

    return 0;
}
