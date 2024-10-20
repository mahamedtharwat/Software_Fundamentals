#include <iostream>

using namespace std;
class Stack
{
  private:
    int top ;
    int Size ;
    int Stk[];
  public:
    Stack(int s )
    {
        top = 0 ;
        Size = s ;
    }
    void Push(int x )
    {
        if(top == Size)
        {
            cout<<"Stack is Full"<<endl ;
        }
        else
        {
            Stk[top] = x ;
            top++;
        }

    }
    int pop()
    {
        if(top > 0)
        {
            int x = Stk[top-1];
            top--;
            return x ;
        }
        else
        {
            cout<<"Stack is Empty"<<endl ;
           /// return -1 ;
        }
    }
};



int main()
{
   Stack s1(3);
   s1.Push(4);
   s1.Push(7);
   s1.Push(88);
   s1.Push(12);
   s1.Push(12);
   s1.Push(12);

   cout<<s1.pop()<<endl;
   cout<<s1.pop()<<endl;
   cout<<s1.pop()<<endl;
   cout<<s1.pop()<<endl;
   cout<<s1.pop()<<endl;
   cout<<s1.pop()<<endl;


    return 0;
}
