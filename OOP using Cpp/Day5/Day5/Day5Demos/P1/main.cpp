#include <iostream>

using namespace std;
class GeoShape
{
protected:
    int dim1;
    int dim2;
public:
    GeoShape(int L1=0 , int L2=0)
    {
      dim1 = L1;
      dim2 = L2;
    }
    void SetDim1(int d1)
    {
        dim1=d1;
    }
   void SetDim2(int d2)
    {
        dim2=d2;
    }
  virtual  float CalcArea()
    {
        return 0;
    }
};

class Rect: public GeoShape
{
public:
    Rect(int d1 , int d2):GeoShape(d1 , d2)
    {
    }
    float CalcArea()
    {
        return dim1 * dim2;
    }

};
class Circle:public GeoShape
{
    public:
    Circle(int r) :GeoShape(r , r)
    {

    }
    void SetDim(int r )
    {
        SetDim1(r);
        SetDim2(r);
    }
    float CalcArea() override
    {
        return 3.14 * dim1 * dim2;
    }

};

float CalaAreas(GeoShape * s[] , int L)
{
    float sum = 0;
    for(int i =0 ; i<L ; i++)
     sum+=s[i]->CalcArea();

    return sum ;
}
int main()
{
    Rect r(2 ,3);
//    cout<<r.CalcArea()<<endl ;

    Circle c(2);
    //c.SetDim1(4);
   // c.SetDim2(2);
   c.SetDim(2);
    //cout<<c.CalcArea()<<endl ;

    GeoShape *shap[3] ;
    shap[0] =new Rect(2,3);
    shap[1] =new Rect(4,5);
    shap[2] =new Circle(3);



    cout<<CalaAreas(shap , 3)<<endl ;
    return 0;
}
