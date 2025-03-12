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
    int numStudents;
    
    cout << "Enter the number of students: ";
    cin >> numStudents;
    
    Student students[numStudents]; // Array of structures
    
    // Input student details
    for (int i = 0; i < numStudents; i++) {
        cout << "\nEnter details for student " << i + 1 << ":" << endl;
        cout << "First Name  : ";
        cin >> students[i].firstName;
        cout << "Last Name   : ";
        cin >> students[i].lastName;
        cout << "Roll Number : ";
        cin >> students[i].rollNumber;
        cout << "Marks       : ";
        cin >> students[i].marks;
    }
    
    // Display student details
    for (int i = 0; i < numStudents; i++) {
        students[i].displayStudentInfo();
    }
    
    return 0;
}
