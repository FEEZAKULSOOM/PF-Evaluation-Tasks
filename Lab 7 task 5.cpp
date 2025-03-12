#include<iostream>
#include<string>
using namespace std;
int main () {
	string username, password, role;
	cout << "\n==================================================\n";
	cout << "Access Control System ";
	cout << "\n==================================================\n\n";
	
	cout << "Enter username: ";
	cin >> username;
	cout << "Enter password:  ";
	cin >> password;
	
	if(username == "admin" && password == "password123") {
		cout << "\nAuthentication Successful ! " << endl;
		cout << "================================================\n\n";
		
		cout <<"Enter your role (admin , Guest ,Other): ";
		cin >> role ;
		cout <<"\nAccess Level: ";
		if ( role == "Admin") {
			cout << "Full Access" << endl;
			
		}
		else if (role == "Guest") {
			cout <<"Limited Access" << endl;
			
		}
		else {
			cout << " No Access" << endl;
		}
		cout << "================================================\n";
	}
	else  {
		cout << "\nAuthentication Failed . Access Denied" << endl;
		cout << "================================================\n";
	}
	return 0;
}