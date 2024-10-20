#include <iostream>

using namespace std;
class Course
{
    string CourseName ;
public :
    Course(string cName)
    {
        CourseName = cName;
    }
    void SetCourseName(string cName)
    {
        CourseName = cName;
    }
    string GetCourseName()
    {
        return CourseName;
    }
    void Start()
    {
        cout<<"The Course "<<CourseName <<" has Started "<<endl ;
    }
};
class Teacher
{
    string TeacherName ;
public:
    Teacher(string TName)
    {
        TeacherName = TName ;
    }
    void Teach(Course co)
    {
        cout<<"Teacher " << TeacherName << " is teaching course name "<< co.GetCourseName()<<endl ;
        co.Start();
    }

};
int main()
{
   Course coMath("Math");
   Teacher T1("Ahmed");
    Teacher T2("Ali");
   T1.Teach(coMath);
   T2.Teach(coMath);

    return 0;
}
