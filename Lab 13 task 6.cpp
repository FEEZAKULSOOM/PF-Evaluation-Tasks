#include <iostream>
using namespace std;

int main() {
    int num = 42;  // Declare an integer variable
    void* ptr = &num;  // Declare a void pointer and store the address of num
    
    cout << "\n========================================\n";
    cout << "         Void Pointer Demonstration    \n";
    cout << "========================================\n";
    
    cout << "Original Value  : " << num << endl;
    cout << "Pointer Address : " << ptr << endl;
    
    // Typecast void pointer to int* before dereferencing
    cout << "Dereferenced Value: " << *((int*)ptr) << endl;
    
    cout << "========================================\n";
    return 0;
}
