#include <iostream>

using namespace std;
/*
2- Class date:
	member variables integers(day, month, year)
	constructors(parameterized)
	setters & getters
	member functions: "subtractDate, PrintDate"


Note: signature of "subtractDate" function should be like:

	int subtractDate(Date d); //D1.subtractDate(D2)

20/6/2018
21/7/2019
(difference between two dates converted to days)
*/
class Date
{
private:
    int day, month, year;
public:
    Date(int d, int m, int y){ // parametrized constructor
        day = d;
        month = m;
        year = y;
    }
    void setDay(int d){
        int day = d;
    }
    void setMonth(int m){
        int month = m;
    }
    void setYear(int y){
        int year = y;
    }
    int GetDay(){
        return day;
    }
    int GetMonth(){
        return month;
    }
    int GetYear(){
        return year;
    }
    // member function
    int subDate(Date d){
        int Dayone = year * 365 + month * 30 + day;
        int Daytwo = d.year * 365 + d.month + 30 + d.day;
        return Daytwo - Dayone;
    }
    void printDate(){
        cout<< day << " / " << month << " / " << year << endl;
    }

};


int main()
{
   Date Day1(15, 2, 2012);
   Date Day2(16, 3, 2013);
   Day1.printDate();
   Day2.printDate();

   int diff = Day1.subDate(Day2);
   cout<<"Diff is: "<<diff<<endl;


    return 0;
}
