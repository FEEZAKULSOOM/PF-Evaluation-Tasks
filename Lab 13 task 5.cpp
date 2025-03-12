#include <iostream>
using namespace std;

int main() {
    int* ptr = nullptr;  // Declare a pointer and initialize it to nullptr
    
    cout << "\n========================================\n";
    cout << "        Null Pointer Check Demo        \n";
    cout << "========================================\n";
    
    if (ptr == nullptr) {
        cout << "The pointer does not point to any valid memory.\n";
    } else {
        cout << "Pointer Address: " << ptr << endl;
    }
    
    cout << "========================================\n";
    return 0;
}
