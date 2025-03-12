#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int arr[SIZE] = {10, 20, 30, 40, 50};  // Declare and initialize an array
    int* ptr = arr;  // Pointer to the first element of the array
    
    cout << "\n========================================\n";
    cout << "      Array Access Using Pointer       \n";
    cout << "========================================\n";
    
    for (int i = 0; i < SIZE; i++) {
        cout << "Element " << i + 1 << " : " << *(ptr + i) << endl;
    }
    
    cout << "========================================\n";
    return 0;
}
