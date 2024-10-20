#include <stdio.h>
#include <stdlib.h>

void swapByValue(int , int); // by value
void swapByReference(int*, int*); // by reference

int main()
{
    /*int a = 2, b = 7;
    printf("the value before calling function: x = %i, y = %i\n",a, b);
    swapByValue(a, b);
    printf("the value after calling function: x = %i, y = %i\n",a, b);
    */


    int a = 2, b = 7;
    printf("the value before calling function: x = %i, y = %i\n",a, b);
    swapByReference(&a, &b);
    printf("the value after calling function: x = %i, y = %i\n",a, b);


    return 0;
}

void swapByValue(int x, int y){
    int temp = 0;
    temp = x;
    x = y;
    y = temp;
    printf("the value inside function: x = %i, y = %i\n", x, y);
}


void swapByReference(int* x, int* y){
    int temp = 0;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("the value inside function: x = %i, y = %i\n", *x, *y);
}

