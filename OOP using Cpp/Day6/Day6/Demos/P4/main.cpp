#include <iostream>

using namespace std;
class Room
{
private:
    string RoomName ;
public:
    Room(string name)
    {
        RoomName = name ;
        cout<< "Room "<<RoomName <<" Created ...."<<endl ;
    }
    ~Room()
    {
        cout<< RoomName << " Destroyed ..."<<endl ;
    }
    void Display()
    {
        cout<< "This is the "<< RoomName <<endl ;
    }

};
class Home
{
private:
    Room * livingRoom;
    Room * bedRoom;
    Room * kitchen;
public:
    Home()
    {
      livingRoom = new Room("livingRoom");
      bedRoom = new Room("bedRoom");
      kitchen = new Room("kitchen");
      cout << "Home Created ..."<<endl ;
    }
    void Dispaply()
    {
       livingRoom->Display();
       bedRoom->Display();
       kitchen->Display();
    }
    ~Home()
    {
        delete livingRoom ;
        delete bedRoom ;
        delete kitchen ;
         cout << "Home Destroyed ..."<<endl ;
    }

};
int main()
{
    Home h1;
    h1.Dispaply();

    return 0;
}
