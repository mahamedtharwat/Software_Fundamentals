#include <iostream>

using namespace std;

class device{
public:
    void PowerOn(){
        cout<<"powerOn"<<endl;
    }
};

class phone : public device{
public:
    void makeCall(){
        cout<< "makeCall"<<endl;
    }
};

class smartphone : public phone {
public:
    void BrowseInternet(){
       cout<<"BrowseInternet"<<endl;
    }

};


int main()
{
    smartphone s1;
    s1.BrowseInternet();



    return 0;
}
