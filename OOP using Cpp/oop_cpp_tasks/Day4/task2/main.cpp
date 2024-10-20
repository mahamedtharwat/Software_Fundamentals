#include <iostream>

using namespace std;

class Vehicle{

public:
    Vehicle(){
        cout<<"constructor for parent(Vehicle)"<<endl;
    }
    ~Vehicle(){
        cout<<"destructor for parent(Vehicle)"<<endl;
    }
};

class Car: public Vehicle{

public:
    Car(){
        cout<<"constructor for child(Car)"<<endl;
    }
    ~Car(){
        cout<<"destructor for child(Car)"<<endl;
    }
};

int main()
{
    Car car;
    return 0;
}
