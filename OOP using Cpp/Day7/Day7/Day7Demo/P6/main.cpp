
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream inFile("example.txt");  // Open file for reading
    if (!inFile) {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }

    string line;
    while (getline(inFile, line)) {  // Read line by line
        cout << line << endl;
    }

    inFile.close();  // Close the file after reading

    return 0;
}
