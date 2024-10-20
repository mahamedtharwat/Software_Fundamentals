#include <iostream>

using namespace std;

int BinarySearch(int* arr , int data,int low , int high)
{
    while(low<= high)
    {
      int mid = (low + high)/2;

        if(data == arr[mid])
            return mid;

        if(data > arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;

}



int main()
{
    int arr[5] = {30,40,50,60,70};
    cout<<BinarySearch(arr,50,0,4);

    return 0;
}
