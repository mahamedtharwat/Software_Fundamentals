#include <iostream>

using namespace std;

class Queue{
private:
  int Start, End , sz;
  int * que;

public:
     Queue(int Q){
        Start = 0;
        End = -1;
        sz = Q;
        que = new int[Q];
    }
    ~Queue(){
        delete []que;
    }

    void Enqueue(int E){
        if(End == sz - 1){
            cout<<"Queue is Full"<<endl;
        }else{
            que[++End] = E;
        }
    }
    void Dequeue(){
        if(Start > End){
            cout<<"Queue is Empty"<<endl;
        }else{
            for (int i = 0; i < End; i++) { // shifting
            que[i] = que[i + 1];
        }
        End -- ;
      }
    }
    void setqueue(int c){
        for(int i = 0; i < c; i++){

            int values;
            cout<<"Enter your element: "<<i+1<<endl;
            cin>>values;
            Enqueue(values);
        }
    }
    void Display(){
        if(Start > End){
            cout<<"Queue is Empty"<<endl;
        }
        for(int i = Start; i<= End; i++){ // update
            cout<<que[i]<<" ";
        }
        cout<<"\n";
    }
    int GetRear(){
        return que[End];
    }
    int GetFront(){
        return que[Start];
    }

};


int main()
{
    int Size, numOfValues;
    cout<<"Enter your size"<<endl;
    cin>>Size;

    Queue Q(Size);

    cout<<"Enter numOfValues"<<endl;
    cin>>numOfValues;


    Q.setqueue(numOfValues);
    Q.Display(); // update
    Q.Dequeue();
    Q.Display(); // last update
    cout<<Q.GetFront()<<endl;
    cout<<Q.GetRear()<<endl;
    return 0;
}

