#include <iostream>
using namespace std;

void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 30, y = 40;
    cout << "Before swap (Pass by Reference): x = " << x << ", y = " << y << endl;
    swapByReference(x, y);
    cout << "After swap (Pass by Reference): x = " << x << ", y = " << y << endl;
    return 0;
}


#include <iostream>
using namespace std;

void swapByAddress(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;
    cout << "Before swap (Pass by Address): x = " << x << ", y = " << y << endl;
    swapByAddress(&x, &y);
    cout << "After swap (Pass by Address): x = " << x << ", y = " << y << endl;
    return 0;
}

