#include <iostream>
using namespace std;

// Function to calculate factorial
long long factorial(int num) {
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    cout << "========================================\n";
    cout << "         Factorial Calculator          \n";
    cout << "========================================\n";
    cout << "Enter a number: ";
    cin >> num;
    
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers!\n";
    } else {
        cout << "Factorial of " << num << " is: " << factorial(num) << endl;
    }
    
    cout << "========================================\n";
    return 0;
}
