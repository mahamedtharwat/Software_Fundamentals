#include <iostream>

using namespace std;

// Composition

class Engine
{
private:
    string EngineName ;
public:
    Engine(string name)
    {
        EngineName = name ;
        cout<< "The Engine has contain to "<<EngineName<<endl ;
    }
    ~Engine()
    {
        cout<< EngineName << " Destructor ..."<<endl ;
    }
    void Display()
    {
        cout<< "This is the "<< EngineName <<endl ;
    }

};
class Car
{
private:
    Engine * PowerOfHorse;
public:
    Car()
    {
      PowerOfHorse = new Engine("600 Power of horse");

      cout << "Car is Started ..."<<endl ;
    }
    void Dispaply()
    {
       PowerOfHorse->Display();
    }
    ~Car()
    {
        delete PowerOfHorse ;
         cout << "Car destructor ..."<<endl ;
    }

};
int main()
{
    Car c1;
    c1.Dispaply();

    return 0;
}

