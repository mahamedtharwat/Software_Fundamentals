#include <iostream>

using namespace std;

// Convert Function CalcAreas() to take Pointer To Pointer to GeoShap


class Geoshape{

private:
    int dim;
public:
    Geoshape(int d) : dim(d)
    {

    }
    int Getdim()const{
        return dim;
    }
};

void CalcAreas(Geoshape * *shape){
    cout<<"Area = " << ((*shape) -> Getdim()* (*shape)->Getdim())<<endl;
}

int main()
{
    Geoshape shape(10);
    Geoshape* ptrToShape = &shape;
    Geoshape * *ptrToptr = &ptrToShape;
    CalcAreas(ptrToptr);
    return 0;
}
