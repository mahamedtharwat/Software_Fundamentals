#include <iostream>

using namespace std;

//  (3, 4)  => 3 + 4i
//  (3, -4) => 3 - 4i
//  (0, 4 ) => 4i
//  (0, 0)  => 0
//  (3, 0)  => 3
//  (0, -4) => -4i
class complexNum{
   private:
       int Real;
       int Img ;
   public:
       // member function
       void setReal(int r){
           Real = r;
       }
       void setImg(int i){
           Img = i;
       }
       int GetReal(){
           return Real;
       }
       int GetImg(){
           return Img;
       }
       void printRule (){
           if(Real > 0 && Img > 0){
                cout<< Real << " + " << Img << "i"<< endl;
           }
           else if(Real > 0 && Img < 0){
                cout<< Real << " - " << Img << "i"<<endl;
           }
           else if(Real == 0 && Img > 0){
                cout<<Img<<"i"<<endl;
           }
           else if(Real == 0 && Img == 0){
                cout<<Real<<endl; // or Img
           }
           else if(Real > 0 && Img == 0){
                cout<< Real<<endl;
           }
           else if(Real == 0 && Img < 0){
                cout<<" - "<<Img<<"i"<<endl;
           }
           else{
                cout<<"Please check your input"<<endl;
           }
       }
} ;



int main()
{
    complexNum c ;

    c.setReal(16);
    c.setImg(12);
    c.printRule();

    return 0;
}
