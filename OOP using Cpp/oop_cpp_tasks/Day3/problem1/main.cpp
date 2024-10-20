#include <iostream>

using namespace std;

// stack by dynamic memory allocation

class Stack{
    int top;
    int sz;  // size
    int * stk;
    static int countOfObjects;

public:
    Stack(int s){
        top = 0;
        sz = s;
        stk = new int[s];
        countOfObjects++;
    }
    ~Stack(){
        delete stk;
    }

    int GetcountOfObjects(){
        return countOfObjects;
    }
    bool IsFull(){
        if(top == sz){
            return true;
        }else{
            return false;
        }
    }
    bool IsEmpty(){
        if(top == 0){
            return true;
        }else{
            return false;
        }
    }
    void push (int p){
        if(! IsFull()){
            stk[top] = p;
            top++;
        }else{
            cout<<"Stack is Full"<<endl;
        }
    }
    int pop(){
        if(IsEmpty()){
            cout<<"Stack is Empty"<<endl;
            return -1;
        }else{
            return stk[--top];
        }
    }
    int Peak(){
        return stk[top-1];
    }

};

int Stack ::countOfObjects  = 0;

int main()
{
    Stack S1(3), S2(4);
    S1.push(12);
    S1.push(15);
    S1.push(20);
    cout<<S1.GetcountOfObjects()<<endl;
    cout<<S1.pop()<<endl;
    cout<<S1.Peak();

    return 0;
}
