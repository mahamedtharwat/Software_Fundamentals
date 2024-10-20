#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
     data=val;
     next=NULL;
     prev=NULL;
    }
};

class LinkedList {
    Node* head;

public:
    LinkedList() {
    head=NULL;
    }

    void append(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }

    void bubbleSort() {

        bool swapped;
        Node* curr;

        do {
            swapped = false;
            curr = head;

            while (curr->next) {
                if (curr->data > curr->next->data) {
                    int temp = curr->data;
                    curr->data = curr->next->data;
                    curr->next->data = temp;
                    swapped = true;
                }
                curr = curr->next;
            }
        } while (swapped);
    }

    void printList() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main() {
    LinkedList mylist;

    mylist.append(40);
    mylist.append(30);
    mylist.append(80);
    mylist.append(10);
    mylist.append(50);

    cout << "before: ";
    mylist.printList();

    mylist.bubbleSort();

    cout << "after: ";
    mylist.printList();

    return 0;
}
