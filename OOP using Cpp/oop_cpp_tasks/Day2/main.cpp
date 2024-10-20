#include <iostream>

using namespace std;
/*
Task 1: Function Overloading
Objective: Implement function overloading by creating multiple functions with the same name but different parameter lists.

Task: Write a program that calculates the area of different shapes using function overloading.

Overload a function named calculateArea to:
Calculate the area of a circle (use one parameter for radius).
Calculate the area of a rectangle (use two parameters for width and height).
Calculate the area of a triangle (use two parameters for base and height).
*/

    float AreaOfCircle(float r){
       return 3.14 * r * r;
    }
    float AreaOfRectangle(float width, float height){
       return width * height;
    }
    float AreaOfTraingle(float base, float height){
       return 0.5 * base * height;
    }









int main()
{
   float A1 = AreaOfCircle(12);
   cout<<"AreaOfCircle = "<< A1 << endl;

   float A2 = AreaOfRectangle(12, 15);
   cout<<"AreaOfrectangle = "<< A2 << endl;

   float A3 = AreaOfTraingle(13, 15);
   cout<<"AreaOftraingle = "<< A3 << endl;

    return 0;
}
