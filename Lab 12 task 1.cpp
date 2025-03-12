#include <iostream>
#include <iomanip>
#include <cmath> // For mathematical functions
using namespace std;

int main() {
    double num;
    cout << "========================================\n";
    cout << "        Math Operations Program         \n";
    cout << "========================================\n";
    cout << "Enter a number: ";
    cin >> num;
    
    cout << fixed << setprecision(4);
    cout << "\nResults:" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Square Root      : " << setw(10) << sqrt(num) << endl;
    cout << "Absolute Value   : " << setw(10) << abs(num) << endl;
    cout << "Sine            : " << setw(10) << sin(num) << endl;
    cout << "Cosine          : " << setw(10) << cos(num) << endl;
    cout << "Power (num^3)   : " << setw(10) << pow(num, 3) << endl;
    cout << "----------------------------------------" << endl;

    return 0;
}
