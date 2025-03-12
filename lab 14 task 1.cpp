#include <iostream>
using namespace std;

// Structure definition
struct Student {
    string firstName;
    string lastName;
    int rollNumber;
    float marks;
    
    // Member function to display student information
    void displayStudentInfo() {
        cout << "\n========================================\n";
        cout << "          Student Information           \n";
        cout << "========================================\n";
        cout << "Full Name   : " << firstName << " " << lastName << endl;
        cout << "Roll Number : " << rollNumber << endl;
        cout << "Marks       : " << marks << endl;
        cout << "========================================\n";
    }
};

int main() {
    // Creating a student structure variable and assigning values
    Student student1 = {"John", "Doe", 101, 89.5};
    
    // Calling the member function to display student details
    student1.displayStudentInfo();
    
    return 0;
}
