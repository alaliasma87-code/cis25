#include <iostream>
using namespace std;

// Function to add two numbers
int addNumbers(int a, int b) {
    return a + b;
}

int main() {
    int x = 10;
    int y = 20;
    
    // Calling the function
    int result = addNumbers(x, y);
    
    cout << "The result of adding " << x << " and " << y << " is: " << result << endl;
    
    return 0;
}
