#include <iostream>

using namespace std;
class Student
{
private:
    string StdName ;
public:
    Student(string name="")
    {
        StdName = name ;
    }
    string GetName()
    {
        return StdName ;
    }
    void Dispaly()
    {
        cout<<"Student Name : " <<StdName <<endl ;
    }
};
class Department
{
private:
    string DeptName ;
    Student Stds[5];
    int SCount ;
public:
    Department(string dname )
    {
        DeptName = dname ;
        SCount = 0 ;
    }
    void AddStudent(Student s)
    {
        if(SCount<5)
        {
           Stds[SCount] = s ;
            SCount++ ;
        }
        else{
            cout<<"Can not add more Students "<<endl ;
        }
    }
    void DisaplyStudents()
    {
        cout<< "Department "<<DeptName <<endl ;
        cout<< "Students in that Department : "<<endl ;
        for(int i =0  ;i<SCount ;i++ )
            Stds[i].Dispaly();
    }
};
int main()
{
   Student s1("nada");
   Student s2("fady");
   Student s3("nour");

   Department d1("CS ");

   d1.AddStudent(s1);
   d1.AddStudent(s2);
   d1.AddStudent(s3);
   d1.DisaplyStudents();

    return 0;
}
