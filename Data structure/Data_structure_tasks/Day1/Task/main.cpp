#include <iostream>

using namespace std;

class Node
{
    public:
        // data , next , prev

        int data;
        Node* next;
        Node* prev;

        Node(int _data)
         {
            data = _data;
            next = prev = NULL;
         }

};

/*
class test2
{
    public:
        test2() {}

    protected:

    private:
};
*/

class LinkedList
{
    int sz;
    public:
        LinkedList()
        {
            head = tail =NULL;
            sz = 0;
        }


        void Add(int data)
        {
            Node* newNode = new Node(data);
            //empty linked list
            if(head == NULL)
                head = tail = newNode;

            // not empty
            else{
                newNode->prev = tail;
                tail->next = newNode;
                tail = newNode;
            }
            sz++;
        }


        void Display()
        {
           Node* temp = tail;

            while(temp != NULL)
            {
              cout<<temp->data << "\t";
              temp = temp->prev;
            }

        }


        void Delete(int data)
        {
            //search deleted node

             Node* ptrDelete= Search(data);

             if(ptrDelete != NULL)
             {
                // 1-head
                // 1.1 head & tail
                //1.2 not tail
                //2- tail
                // 3- not head & not tail


                if(ptrDelete == head)
                {
                    if(ptrDelete == tail)
                    {
                        head = tail = NULL;
                        //delete ptrDelete;
                    }else{
                        head = head->next;
                        head->prev = NULL;
                    }

                }else if (ptrDelete == tail)
                {
                    tail = tail->prev;
                    tail->next = NULL;
                }
                else
                {
                    ptrDelete->next->prev =ptrDelete->prev;

                    ptrDelete->prev->next = ptrDelete->next;
                }


                delete ptrDelete; //deallocate object

             }

        }
        void Insert_after(int target_data , int new_data)
        {
            Node* target = Search(target_data);
            Node* new_node = new Node(new_data);
            if(target == tail)
            {
                Add(new_data);
            }
            else{
                new_node->next = target->next;
                new_node->prev = target;
                target->next = new_node;
            }
            sz++;
        }

        void Insert_before(int target_data , int new_data)
        {
            Node* target = Search(target_data);
            Node* new_node = new Node(new_data);
            if(target == head)
            {
                new_node->next = head;
                head->prev = new_node;
                head = new_node;
            }
            else{
                new_node->next = target;
                new_node->prev = target->prev;
                target->prev->next = new_node;
                target->prev = new_node;
            }
             sz++;
        }


        void Rev(){
            Node*tmp = head;
            Node*prevNode = NULL;
            Node*nextNode = NULL;
            while(tmp != NULL)
            {
                nextNode = tmp->next;
                tmp->next = prevNode;
                tmp->prev = nextNode;
                prevNode = tmp;
                tmp = nextNode;
            }
            tail = head;
            head = prevNode;

        }

























        int GetSize(){
            return sz;
        }







    private:
       Node* head ;
       Node* tail;

       Node* Search(int d)
       {
           Node* temp = head;

           while(temp != NULL)
           {
               if(temp->data == d)
                return temp;

               else
                temp = temp->next;
           }

           return NULL;
       }
};

int main()
{
    LinkedList mylist;
    mylist.Add(10);
    mylist.Add(20);
    mylist.Add(30);
    mylist.Add(50);
    mylist.Add(60);

    //mylist.Display();

    // mylist.Delete(30);

    cout << "\n=========================" << endl;
    mylist.Insert_after(30,80);
    //mylist.Insert_before(20,100);




    mylist.Display();
    cout << "\n=========================" << endl;
    mylist.Rev();
    mylist.Display();
    cout << "\n=========================" << endl;
    mylist.Add(70);
    mylist.Display();
    cout << "\n=========================" << endl;
    cout<<mylist.GetSize()<<endl;
   // cout << "Hello world!" << endl;

    return 0;
}







