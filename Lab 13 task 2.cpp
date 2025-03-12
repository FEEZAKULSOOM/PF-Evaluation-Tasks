#include <iostream>
using namespace std;

int main() {
    int num = 10;  // Declare and initialize an integer variable
    int* ptr = &num;  // Declare a pointer and store the address of num
    
    cout << "\n========================================\n";
    cout << "      Modify Variable Using Pointer     \n";
    cout << "========================================\n";
    cout << "Original Value  : " << num << endl;
    cout << "Pointer Address : " << ptr << endl;
    
    *ptr = 20;  // Modify the value using the pointer
    
    cout << "Modified Value  : " << num << endl;
    cout << "========================================\n";
    
    return 0;
}
