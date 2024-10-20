#include <iostream>

using namespace std;

class Animal {
protected:
    string name;
    int age;
public:
    Animal(int a, string n){
        age = a;
        name = n;
    }
    virtual void makeSound(){
        cout<<"Sound of Animal"<<endl;
    }
    virtual void showDetails(){
        cout<<"Details"<<endl;
    }
    string Getname(){
        return name;
    }
    int Getage(){
        return age;
    }
};

class Dog : public Animal{
protected:
    string breed;
public:
    void bark(){
        cout<< "the sound of bark"<<endl;
    }
    Dog(int a, string n, string b):Animal(a,n){
        breed = b;
    }
    void makeSound()override{
        cout<<"sound of dog"<<endl;
    }
    void showDetails(){
        cout<< "the name of animal: "<< Getname()<<" the age is: "<<Getage()<<endl;
    }
};

int main()
{
    Dog D(5,"(name of animal) ", "breed");
    D.bark();
    D.showDetails();
    return 0;
}
