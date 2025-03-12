#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int subject1 , subject2 , subject3;
	int totalMarks;
	float percentage;
	char grade1 , grade2 , grade3;
	
	cout <<fixed <<setprecision(2);
	cout << "--------------------------------------------------------------------------\n";
	cout <<"      University Exam Results and Scolarship Eligibility \n";
	cout << "--------------------------------------------------------------------------\n";
	
	cout << " Enter marks for subject 1: ";
	cin >> subject1;
	cout << " Enter marks for subject 2: ";
	cin >> subject2;
	cout << " Enter marks for subject 3: ";
	cin >> subject3;
	
	cout << "-------------------------------------------------------------------------\n";
	
	totalMarks = subject1 + subject2 + subject3;
	percentage = (float)totalMarks / 3.0;
	
	if ( subject1 >=90 ) {
		grade1 = 'A';
	}else if ( subject1 >=80 ) {
		grade1 = 'B';
	}
	else if ( subject1 >=70 ) {
		grade1 = 'C';
	}
	else if ( subject1 >=60 ) {
		grade1 = 'D';
	}
	else {
		grade1 = 'F';
	}
	
	if ( subject2 >=90 ) {
		grade2 = 'A';
	}else if ( subject2 >=80 ) {
		grade2 = 'B';
	}
	else if ( subject2 >=70 ) {
		grade2 = 'C';
	}
	else if ( subject2 >=60 ) {
		grade2 = 'D';
	}
	else {
		grade2 = 'F';
	}
	
		if ( subject3 >=90 ) {
		grade3 = 'A';
	}else if ( subject3 >=80 ) {
		grade3 = 'B';
	}
	else if ( subject3 >=70 ) {
		grade3 = 'C';
	}
	else if ( subject3 >=60 ) {
		grade3 = 'D';
	}
	else {
		grade3 = 'F';
	}
	
	if ( grade1 == 'F' || grade2 == 'F' || grade3 == 'F') {
		cout << " ------------------------------------------------------------\n";
		cout << " Failed !!!! \n";
		cout << " ------------------------------------------------------------\n";
		return 0;
		
	}
	cout << "Total Marks: " << totalMarks << endl;
	cout << "Percentage: " << percentage << "%" <<endl;
	cout << " Grades: \n";
	cout << "subject1: " <<grade1 <<endl;
	cout << "subject2: " <<grade2 <<endl;
	cout << "subject3: " <<grade3 <<endl;
	
	if( grade1 =='A' && grade2 =='B' && grade3 =='A' && totalMarks >= 270) {
		cout << " Scolarship Eligibility: Merit scolarship" <<endl;
    }
    else if (grade1 =='B' && grade2 =='B' && grade3 =='B' && totalMarks >= 240) {
		cout << " Scolarship Eligibility: Regular scolarship" <<endl;
	}
	else{
		cout << " Scolarship Eligibility: Not Eligible For  scolarship" <<endl;
	}
 }
	