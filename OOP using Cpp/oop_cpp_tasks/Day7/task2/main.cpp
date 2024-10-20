#include <iostream>
#include <fstream>

using namespace std;
struct Student
{
    string name ;
    int grade ;
};
int main() {
    Student s ;
    cout<<"Enter your name  :"<<endl ;
    cin>>s.name ;
    cout<<"Enter your grade  :"<<endl ;
    cin>>s.grade ;

    //cout<<s.name<<" "<<s.grade<<endl;

    ofstream outFile("test.txt" ,  ios::app); // app => append
    if (!outFile) {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }

    outFile << "Student Data : "<<endl ;
    outFile<< s.name <<", " <<s.grade << endl;
    outFile.close();

    return 0;
}
