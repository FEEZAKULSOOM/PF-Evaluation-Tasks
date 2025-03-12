#include <iostream>
using namespace std;

// Function to swap two numbers using pointers
void swapNumbers(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;
    
    cout << "\n========================================\n";
    cout << "        Swap Numbers Using Pointers    \n";
    cout << "========================================\n";
    cout << "Enter first number  : ";
    cin >> num1;
    cout << "Enter second number : ";
    cin >> num2;
    
    cout << "\nBefore Swapping: " << endl;
    cout << "Num1 = " << num1 << " , Num2 = " << num2 << endl;
    
    // Function call to swap numbers
    swapNumbers(&num1, &num2);
    
    cout << "\nAfter Swapping: " << endl;
    cout << "Num1 = " << num1 << " , Num2 = " << num2 << endl;
    cout << "========================================\n";
    
    return 0;
}
