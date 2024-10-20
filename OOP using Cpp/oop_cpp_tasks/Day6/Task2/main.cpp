#include <iostream>

using namespace std;

// Aggregation


class Book
{
private:
    string bookName ;
public:
    Book(string name="")
    {
        bookName = name ;
    }
    string GetName()
    {
        return bookName ;
    }
    void Dispaly()
    {
        cout<<"Book Name : " <<bookName <<endl ;
    }
};
class Library
{
private:
    string libName ;
    Book bookName[5];
    int bCount ;
public:
    Library(string lname )
    {
        libName = lname ;
        bCount = 0;
    }
    void AddBook(Book b)
    {
        if(bCount<5)
        {
           bookName[bCount] = b ;
            bCount++ ;
        }
        else{
            cout<<"Can not add more Books "<<endl ;
        }
    }

    void DisaplyBook()
    {
        cout<<libName << " Library " <<endl ;
        cout<< "Books in that library : "<<endl ;
        for(int i =0  ;i<bCount ;i++ )
            bookName[i].Dispaly();
    }

};
int main()
{
   Book b1("1- C++");
   Book b2("2- python");
   Book b3("3- java");

   Library l1("Alexandria");

   l1.AddBook(b1);
   l1.AddBook(b2);
   l1.AddBook(b3);

   l1.DisaplyBook();

    return 0;
}
