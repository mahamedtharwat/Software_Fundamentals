#include <iostream>
using namespace std;
class Node
{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int _data)
        {
            data =_data;
            left = right = NULL;
        }

    protected:

    private:
};
class BST
{
    public:
        BST()
        {
            root = NULL;
        }

        void Add(int data)
        {
            //create node
            Node* newNode = new Node(data);

            //empty tree
            if(root == NULL)
                root = newNode;

            else
            {
                Node* current = root;
                Node* parent = root;

                while(current != NULL)
                {
                    parent = current ;

                   if(data > current->data)
                        current = current->right; // current = NULL
                    else
                        current = current->left; // current = NULL

                }

                if(data > parent->data)
                    parent->right = newNode;
                else
                    parent->left = newNode;

            }
        }

        void Traverse()
        {
            if(root != NULL)
                Display(root);
            else
                cout<<"tree is empty"<<endl;
        }

        void Traverse(int data)
        {
            //search
            Node* pSearch = Search(data);

            if(pSearch != NULL)
                Display(pSearch);
        }
        Node* GetRoot(){
            return root;
        }









        Node* MinVal(Node* curr){
            if(curr == NULL){
                return NULL;
            }
            else if(curr->left==NULL){
                return curr;
            }
            else{
                return MinVal(curr->left);
            }
        }




        Node* MaxVal(Node* curr){
            if(curr == NULL){
                return NULL;
            }
            else if(curr->right==NULL){
                return curr;
            }
            else{
                return MaxVal(curr->right);
            }
        }


        void Delete(int data)
        {
            Node* pDelete = Search(data);

            if(pDelete != NULL)
            {
                if(pDelete == root)
                {
                   if(root->left == NULL && root->right == NULL)
                   {
                       root = NULL;

                   }else if(root->left == NULL)
                   {
                       root = root->right;

                   }else if(root->right == NULL)
                   {
                       root = root->left;
                   }else{
                        Node* MaxRight = GetMaxRight(root->left);
                        MaxRight->right = root->right;
                        root = root->left;
                   }
                }
                else{

                    // get parent for deleted node
                    Node* parent = SearchParent(root,pDelete->data);

                    if(pDelete->left == NULL && pDelete->right == NULL)
                    {
                        if(parent->right==pDelete){
                            parent->right=NULL;
                        }
                        else {
                            parent->left=NULL;
                        }

                    }

                    else if(pDelete->left == NULL )
                    {
                        if(parent->right==pDelete){
                            parent->right=pDelete->right;

                        }else{
                            parent->left=pDelete->right;

                        }


                    }

                    else if (pDelete->right == NULL)
                    {
                        if(parent->right==pDelete){
                            parent->right=pDelete->left;

                        }else{
                            parent->left=pDelete->left;
                        }

                    }
                    else
                    {
                        if(parent->right==pDelete){
                            Node* MaxRight = GetMaxRight(pDelete->left);
                            MaxRight->right=pDelete->right;
                            parent->right=pDelete->left;
                        }
                        else{
                            Node* MaxRight = GetMaxRight(pDelete->left);
                            MaxRight->right=pDelete->right;
                            parent->left=pDelete->left;
                        }


                    }

                }

                delete pDelete;
            }
        }
        Node* SearchParent(Node* root, int val) {
    if (root == NULL || root->data == val)
        return NULL;

    if ((root->left && root->left->data == val) || (root->right && root->right->data == val)) {
        return root;
    }

    if (val < root->data) {
        return SearchParent(root->left, val);
    } else {
        return SearchParent(root->right, val);
    }
}

    private:
        void Display(Node* pDisplay)
        {
            if(pDisplay == NULL)
                return;

           //Left , Node , right
            Display(pDisplay->left);
            cout<< pDisplay->data << "\t";
            Display(pDisplay->right);
        }

        Node* Search(int data)
        {
            Node* ptr = root;

            while(ptr != NULL)
            {
                if(data == ptr->data)
                    return ptr;

                if(data > ptr->data)
                    ptr = ptr->right;
                else
                    ptr = ptr->left;
            }

            return NULL;

        }

        Node* GetMaxRight(Node* maxRight)
        {
            while(maxRight->right != NULL)
            {
                maxRight = maxRight->right;
            }

            return maxRight;

        }


      Node* root;
};
int main()
{
    BST tree;

    tree.Add(50);
    tree.Add(60);
    tree.Add(70);
    tree.Add(40);
    tree.Add(30);
    tree.Add(35);


    tree.Traverse(); // before update
    cout << endl<< "============" << endl;
    tree.Delete(35);
    cout << endl<< "============" << endl;
    cout<<"the minimum value is: "<<tree.MinVal(tree.GetRoot())->data<<"\n";
    cout<<"the maximum value is: "<<tree.MaxVal(tree.GetRoot())->data<<"\n";
    tree.Traverse(); // after update
    return 0;
}





