#include <iostream>

using namespace std;

int LinearSearch(int* arr, int key, int Size){
    for(int i = 0; i<Size; i++){
        if(arr[i] == key)
            return i;
    }
    return -1;
}

void Display(int* arr, int key, int Size){
    for(int i = 0; i<Size; i++){
        cout<<arr[i]<<"\t";
    }
}

int main()
{
    int arr[5] = {8,7,20,50,30};
    cout<<LinearSearch(arr,20,5)<<endl;
    Display(arr,20,5);

    return 0;
}
