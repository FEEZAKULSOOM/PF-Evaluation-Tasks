#include <iostream>
using namespace std;

int main() {
    int num = 42;  // Declare and initialize an integer variable
    int* ptr = &num;  // Declare a pointer and store the address of num
    
    cout << "\n========================================\n";
    cout << "       Pointer Dereferencing Demo       \n";
    cout << "========================================\n";
    cout << "Variable Value   : " << num << endl;
    cout << "Pointer Address  : " << ptr << endl;
    cout << "Dereferenced Value: " << *ptr << endl;
    cout << "========================================\n";
    
    return 0;
}
