#include <iostream>

using namespace std;
class Course
{
    string CourseName ;
public :
    Course(string cName="")
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
    Course Courses[3];
    int CCounter ;

public:
    Teacher(string TName )
    {
        TeacherName = TName ;
        CCounter = 0 ;
    }
    void AddCourse(Course c1)
    {
        if(CCounter<3)
        {
            Courses[CCounter] = c1 ;
            CCounter++ ;
        }
        else{
            cout<< "Can not add more courses to this teacher "<<endl;
        }

    }
    void ShowCourses()
    {
        cout<<"Teacher " << TeacherName << " is teaching the following courses : "<<endl ;
        for(int i =0 ;i< CCounter ; i++)
        {
          cout<< Courses[i].GetCourseName()<<endl ;
          Courses[i].Start();

        }
    }


};
int main()
{
   Course c1("Math");
   Course c2("C++");
   Course c3("C");

   Teacher t1("Ali");

   t1.AddCourse(c1);
   t1.AddCourse(c2);
   t1.AddCourse(c3);

   t1.ShowCourses();
    return 0;
}
