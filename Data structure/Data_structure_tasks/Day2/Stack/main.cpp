#include <iostream>

using namespace std;

class Node{
public:
    char Data;
    Node*prev;

    Node(char data){
        Data = data;
        prev = NULL;
    }
};

class Stack{
private:
    Node*top;
public:
    Stack(){
        top = NULL;
    }
    bool isEmpty(){
        return top == NULL;
    }

    void Push(char data){
        Node*newNode = new Node(data);
        if(top == NULL){
            top = newNode;
        }
        else{
            newNode->prev = top;
            top = newNode;
        }
    }
    char pop(){
            if(top != NULL){
                Node*tmp = top;
                char Data = top->Data;
                top = top->prev;
                delete tmp;
                return Data;
            }
        }
        char peek(){  // get top
            if(top != NULL){
                return top->Data;
            }
        }
        void Display(){
            Node*tmp = top;
            while(tmp != NULL){
                cout<<tmp->Data<<"\t";
                tmp = tmp->prev;
            }
        }
};

    void Rev(string c){
            Stack s;
            for(int i = 0; i<c.length(); i++){
                s.Push(c[i]);
            }
            while(!s.isEmpty()){
                cout<<s.peek();
                s.pop();
            }

        }

int main()
{
    string s = "Mohamed";
    Rev(s);
    return 0;
}
