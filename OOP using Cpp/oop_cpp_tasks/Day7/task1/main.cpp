#include <iostream>

using namespace std;

class InvalidAgeException
{
public:
   string Message ="Error : InvalidAgeException are not allowed ";

};

int Age(int age)
{
 if(age < 0 || age > 120)
    {
       throw InvalidAgeException();
    }
    else
        return age;
}
int main()
{
    try
    {
    int ag = Age(50);
    cout<< " Age = "<< ag <<endl;
    }
    catch(InvalidAgeException e)
    {
        cout<< e.Message<<endl ;
    }
    return 0;
}
