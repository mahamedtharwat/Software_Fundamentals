#include <iostream>

using namespace std;
void Swap(int& first, int &second)
{
    int temp = first;
    first = second;
    second = temp;
}

void Display(int* arr , int Size)
{
    for(int i=0; i<Size; i++)
    {
        cout<<arr[i]<< "\t";
    }
}

void BubbleSort(int* arr, int Size)
{
    int iterations =0;
    int sorted = 0;
    for(int i= 0; sorted==0;i++)
    {
        sorted = 1;
        for(int j=0 ; j<Size-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                Swap(arr[j],arr[j+1]);
                sorted = 0;
            }
            iterations++;
        }
    }
    cout<<iterations <<endl;
}

void SelectionSort(int* arr, int Size)
{
    int minIndex;
    for(int i=0 ; i<Size-1; i++)
    {
       minIndex = i;
        for(int j=i+1 ; j<Size ; j++)
        {
            if(arr[minIndex]> arr[j])
            {
                minIndex =j;
            }

        }

        if(minIndex != i)
            Swap(arr[i], arr[minIndex]);
    }
}

int BinarySearch(int* arr , int data,int low , int high)
{
    if(low<= high)
    {
      int mid = (low + high)/2;

        if(data == arr[mid])
            return mid;

        if(data > arr[mid])
            return BinarySearch(arr,data,mid+1, high);
        else
            return BinarySearch(arr,data,low,mid-1);
    }
    return -1;

}
int main()
{
    int arr[5] = {-2,45,0,11,-9};//{1,2,3,4,5}
    //BubbleSort(arr, 5);
    //Display(arr,5);
    SelectionSort(arr,5);
    Display(arr,5);
    cout<<endl<<"==============="<<endl;
    int arr2[5] = {2,1,3,4,5};
    BubbleSort(arr2, 5);
    Display(arr2,5);
    cout<<endl<<"==============="<<endl;
    cout<<BinarySearch(arr,11,0,4);
    return 0;
}
