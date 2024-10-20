#include <iostream>

using namespace std;

class Stack{
private:
    int top;
    int sz;  // size
    int stk[];
public:
    Stack(int s){
        top = 0;
        sz = s;
    }
    void push(int p){
        if(top == sz){
            cout<<"Stack is full"<<endl;
        }else{
            stk[top] = p;
            top++;
        }
    }
    int pop(){
        if(top > 0){
            int p = stk[top - 1];
            top--;
            return p;
        }else{
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
    }
};


int main()
{
    Stack S1(3);
    S1.push(4);
    S1.push(20);
    S1.push(15);
    cout<<S1.pop()<<endl;

    return 0;
}
