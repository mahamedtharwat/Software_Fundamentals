#include <iostream>

using namespace std;

// Association


class Book
{
private:
    string BookName ;
public :
    Book(string bName="")
    {
        BookName = bName;
    }
    void SetBookName(string bName)
    {
        BookName = bName;
    }
    string GetBookName()
    {
        return BookName;
    }

};

class Author
{
    string AuthorName ;
    Book book[3];
    int bCounter ;

public:
    Author(string AName )
    {
        AuthorName = AName ;
        bCounter = 0 ;
    }
    void AddBook(Book b1)
    {
        if(bCounter<3)
        {
            book[bCounter] = b1 ;
            bCounter++ ;
        }
        else{
            cout<< "Can not add more books to this Author "<<endl;
        }

    }
    void Displayall()
    {
        cout<< AuthorName << " Author of books : "<<endl ;
        for(int i =0 ;i< bCounter ; i++)
        {
          cout<< book[i].GetBookName()<<endl ;

        }
    }


};
int main()
{
   Book b1("Math");
   Book b2("C++");
   Book b3("C");

   Author A1("Ahmed");

   A1.AddBook(b1);
   A1.AddBook(b2);
   A1.AddBook(b3);

   A1.Displayall();
    return 0;
}



