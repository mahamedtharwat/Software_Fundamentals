

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Writing to a file
    ofstream outFile("students.txt");
    if (outFile.is_open()) {
        outFile << "John Doe, 85" << endl;
        outFile << "Jane Smith, 90" << endl;
        outFile << "Alice Johnson, 78" << endl;
        outFile.close();
    } else {
        cout << "Unable to open file for writing" << endl;
    }

    // Reading from a file
    ifstream inFile("students.txt");
    string line;
    if (inFile.is_open()) {
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "Unable to open file for reading" << endl;
    }

    return 0;
}


