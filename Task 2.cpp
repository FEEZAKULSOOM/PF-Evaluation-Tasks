#include <iostream>
using namespace std;

// Function overloads for addition
int add(int a, int b) { return a + b; }
int add(int a, int b, int c) { return a + b + c; }
float add(float a, float b) { return a + b; }
float add(float a, float b, float c) { return a + b + c; }

// Function overloads for subtraction
int subtract(int a, int b) { return a - b; }
int subtract(int a, int b, int c) { return a - b - c; }
float subtract(float a, float b) { return a - b; }
float subtract(float a, float b, float c) { return a - b - c; }

// Function overloads for multiplication
int multiply(int a, int b) { return a * b; }
int multiply(int a, int b, int c) { return a * b * c; }
float multiply(float a, float b) { return a * b; }
float multiply(float a, float b, float c) { return a * b * c; }

// Function overloads for division
float divide(int a, int b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return (float)a / b;
}
float divide(float a, float b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return a / b;
}

int main() {
    int choice;
    do {
        cout << "\n| Calculator |" << endl;
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 5) {
            cout << "* Exiting Calculator *" << endl;
            return 0;
        }

        int operands;
        cout << "Enter the number of operands (2 or 3): ";
        cin >> operands;

        if (operands == 2) {
            int type1, type2;
            cout << "Enter operand types (1 for int, 2 for float): ";
            cin >> type1 >> type2;

            if (type1 == 1 && type2 == 1) { // Both int
                int a, b;
                cout << "Enter your operands: ";
                cin >> a >> b;

                switch (choice) {
                    case 1: cout << "Result: " << add(a, b) << endl; break;
                    case 2: cout << "Result: " << subtract(a, b) << endl; break;
                    case 3: cout << "Result: " << multiply(a, b) << endl; break;
                    case 4: cout << "Result: " << divide(a, b) << endl; break;
                    default: cout << "Invalid choice!\n";
                }
            } else if (type1 == 2 && type2 == 2) { // Both float
                float a, b;
                cout << "Enter your operands: ";
                cin >> a >> b;

                switch (choice) {
                    case 1: cout << "Result: " << add(a, b) << endl; break;
                    case 2: cout << "Result: " << subtract(a, b) << endl; break;
                    case 3: cout << "Result: " << multiply(a, b) << endl; break;
                    case 4: cout << "Result: " << divide(a, b) << endl; break;
                    default: cout << "Invalid choice!\n";
                }
            } else { // Mixed int and float
                float a, b;
                cout << "Enter your operands: ";
                cin >> a >> b;

                switch (choice) {
                    case 1: cout << "Result: " << add(a, b) << endl; break;
                    case 2: cout << "Result: " << subtract(a, b) << endl; break;
                    case 3: cout << "Result: " << multiply(a, b) << endl; break;
                    case 4: cout << "Result: " << divide(a, b) << endl; break;
                    default: cout << "Invalid choice!\n";
                }
            }
        } else if (operands == 3) {
            int type1, type2, type3;
            cout << "Enter operand types (1 for int, 2 for float): ";
            cin >> type1 >> type2 >> type3;

            if (type1 == 1 && type2 == 1 && type3 == 1) { // All int
                int a, b, c;
                cout << "Enter your operands: ";
                cin >> a >> b >> c;

                switch (choice) {
                    case 1: cout << "Result: " << add(a, b, c) << endl; break;
                    case 2: cout << "Result: " << subtract(a, b, c) << endl; break;
                    case 3: cout << "Result: " << multiply(a, b, c) << endl; break;
                    default: cout << "Invalid choice!\n";
                }
            } else { // At least one float
                float a, b, c;
                cout << "Enter your operands: ";
                cin >> a >> b >> c;

                switch (choice) {
                    case 1: cout << "Result: " << add(a, b, c) << endl; break;
                    case 2: cout << "Result: " << subtract(a, b, c) << endl; break;
                    case 3: cout << "Result: " << multiply(a, b, c) << endl; break;
                    default: cout << "Invalid choice!\n";
                }
            }
        } else {
            cout << "Invalid number of operands! Only 2 or 3 are allowed.\n";
        }
    } while (true);

    return 0;
}
