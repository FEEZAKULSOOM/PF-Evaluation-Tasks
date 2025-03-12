#include<iostream>
using namespace std;
int main () {
	int choice ;
	double area;
	const double PI = 3.14159;
	cout << "\n=====================================================\n";
	cout << "              Area Calculations Of Shapes\n";
	cout << "=======================================================\n\n";
	
	cout << "Select the shape to calculate its area :" <<endl;
	cout << "1 . Circle " <<endl;
	cout << "2 . Rectangle " <<endl;
	cout << "3 . Triangle " <<endl;
	cout << " Enter your choice (1 , 2 , 3 ) : ";
	cin >> choice;
	cout << "\n=======================================================\n\n";
	

	
	switch(choice) {
		case 1 :
			double radius ;
			cout << "Enter the radius of the circle: ";
			cin >> radius;
			area = PI * radius * radius;
			cout << "\nArea of circle is " << area << " square units . ";
			break;
			
		case 2 :
			double length , width ;
			cout <<"Enter the width of rectangle :";
			cin >> width;
			cout <<"Enter the length of rectangle :";
			cin >> length;
			area = width * length;
			cout << "\nArea of rectangle is " << area << " square units .";
			break;
			
			
		case 3 :
			double base , height ;
			cout <<"Enter the height of triangle  :";
			cin >> height;
			cout <<"Enter the base of triangle  :";
			cin >> base;
			area = 0.5 * base * height;
			cout << "\nArea of triangle is " << area << " square units .";
			break;
		default :
			cout <<" Invalid Choice .plz! select 1, 2, 3.";
			break;
   }
	return 0;
}