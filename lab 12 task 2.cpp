#include <iostream>
using namespace std;

// Function to check even or odd
void checkEvenOdd(int num) {
    cout << "\n========================================\n";
    cout << "        Even or Odd Checker           \n";
    cout << "========================================\n";
    
    if (num % 2 == 0)
        cout << " Result: " << num << " is Even.       " << endl;
    else
        cout << " Result: " << num << " is Odd.        " << endl;
    
    cout << "========================================\n";
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    // Calling the function
    checkEvenOdd(num);
    
    return 0;
}