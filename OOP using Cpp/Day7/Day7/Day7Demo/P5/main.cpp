#include <iostream>
#include <fstream>  // Include this header for file handling

using namespace std;
struct Student
{
    int id ;
    string name ;
    int grade ;
};
int main() {
    Student s ;
    cout<<"Enter your id :"<<endl ;
    cin>>s.id ;
    cout<<"Enter your name  :"<<endl ;
    cin>>s.name ;
    cout<<"Enter your grade  :"<<endl ;
    cin>>s.grade ;

    ofstream outFile("test.txt" ,  ios::app);  // Create and open a text file for writing
    if (!outFile) {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }

    outFile << "Student Data : "<<endl ;
    outFile<< s.id << " , "<< s.name <<", " <<s.grade << endl;  // Write to the file
    outFile.close();  // Close the file after writing

    return 0;
}
