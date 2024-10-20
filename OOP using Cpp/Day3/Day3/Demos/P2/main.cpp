#include <iostream>

using namespace std;
class Stack
{
int top ;
int Size ;
int * Stk ;
static int CountOfObjects ;
public:
    Stack(int s)
    {
        top =0 ;
        Size= s ;
        Stk = new int[s];
        CountOfObjects ++ ;
    }
   static int GetCountOfObjects()
    {
        return CountOfObjects ;
    }
    ~Stack()
    {
        delete Stk ;
    }
    bool IsFull()
    {
        if(top == Size)
        {
            return true ;
        }
        else
            return false ;
    }
    bool IsEmpty()
    {
        if(top ==0)
            return true ;
        else
            return false ;
    }
    void Push(int x )
    {
        if(!IsFull())
        {
            Stk[top] = x ;
            top++ ;
        }
        else
            cout<<"Stack is Full"<<endl ;
    }
    int pop()
    {
        if(IsEmpty())
        {
            cout<<"Stack is Empty"<<endl ;
            return -1 ;
        }
        else
        {
            int x = Stk[top-1];
            top -- ;
            return x ;
        }
    }
    int Peak()
    {
        return Stk[top-1];
    }


};

int Stack :: CountOfObjects = 0 ;

int main()
{
   Stack s1(3) ;
   cout<<s1.GetCountOfObjects()<<endl;

   Stack s2(3) ;
   cout<<s2.GetCountOfObjects()<<endl;


//  cout<<s2.GetCountOfObjects()<<endl;
 // cout<<s3.GetCountOfObjects()<<endl;
  //cout<<Stack::GetCountOfObjects()<<endl;

//   cout<<s1.pop()<<endl;
 //  cout<<s1.pop()<<endl;

    return 0;
}
