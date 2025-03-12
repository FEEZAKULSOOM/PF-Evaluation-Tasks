#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
float add(float a, float b) { return a + b; }
float subtract(float a, float b) { return a - b; }
float multiply(float a, float b) { return a * b; }
float divide(float a, float b) {
    if (b == 0) {
        cout << "\n========================================\n";
        cout << "        Error: Division by zero!        \n";
        cout << "========================================\n";
        return 0;
    }
    return a / b;
}

int main() {
    int choice;
    float num1, num2;
    
    do {
        cout << "\n========================================\n";
        cout << "            Simple Calculator           \n";
        cout << "========================================\n";
        cout << "| 1. Addition                         |\n";
        cout << "| 2. Subtraction                      |\n";
        cout << "| 3. Multiplication                   |\n";
        cout << "| 4. Division                         |\n";
        cout << "| 5. Exit                             |\n";
        cout << "========================================\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        if (choice == 5) {
            cout << "\n========================================\n";
            cout << "   Exiting calculator. Goodbye!        \n";
            cout << "========================================\n";
            break;
        }
        
        cout << "\nEnter two numbers: ";
        cin >> num1 >> num2;
        
        cout << "\n========================================\n";
        cout << "              Result                   \n";
        cout << "========================================\n";
        cout << fixed << setprecision(2);
        
        switch (choice) {
            case 1: cout << "| Addition: " << setw(10) << add(num1, num2) << " \n"; break;
            case 2: cout << "| Subtraction: " << setw(8) << subtract(num1, num2) << " \n"; break;
            case 3: cout << "| Multiplication: " << setw(5) << multiply(num1, num2) << " \n"; break;
            case 4: cout << "| Division: " << setw(10) << divide(num1, num2) << " \n"; break;
            default: cout << "| Invalid choice! Please try again.   |\n";
        }
        cout << "========================================\n";
    } while (true);
    
    return 0;
}
