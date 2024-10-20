#include <iostream>

using namespace std;
// sum
// abstract

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
      complexNum sum (complexNum c1){ // member function
          complexNum result;

          result.Real = Real + c1.Real;
          result.Img = Img + c1.Img;
          return result;
      }
};
complexNum subt(complexNum c1, complexNum c2){  // standalone function
    complexNum result;
    int num1 = 0, num2 = 0;
    num1 = c1.GetReal() - c2.GetImg();

    result.setReal(num1);
    result.setImg(num2);
    return result;
}

int main()
{
    complexNum c1, c2, Finalsum, Finalsubt;
    c1.setReal(3);
    c1.setImg(2);
    c2.setReal(4);
    c2.setImg(5);


    Finalsum = c1.sum(c2);
    Finalsum.printRule();

    Finalsubt = subt(c1,c2);
    Finalsubt.printRule();
    return 0;
}
