#include <iostream>
#include <fstream> // Required for files
#include <string>
using namespace std;

// 1. Create a Class
class Assignment6 {
public:
    string message = "Module 6 Class and File Handling";
};

int main() {
    Assignment6 myObj; // Create an Object
    
    // 2. File Handling: Create and write to a file
    ofstream outFile("output.txt");
    
    if (outFile.is_open()) {
        outFile << myObj.message << endl;
        outFile.close();
        cout << "Success! File created." << endl;
    } else {
        cout << "Error opening file." << endl;
    }

    return 0;
}
