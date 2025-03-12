#include<iostream>
using namespace std ;

void swapNumbers ( int a , int b ) {
	int num = a ;
	a  = b ;
	b = num  ;
}
 int main ()  {
 	
 	int num1;
 	cout <<"Enter first number: ";
 	cin >> num1;
 	cout << endl;
 	
 	int num2 ;
 	cout <<"Enter second number: ";
 	cin >> num2 ;
 	cout <<endl;
 	
 	cout <<"====================================================\n";
 	cout << "Numbers before swapping are : " << num1 << " , " << num2 ;
 	cout <<"\n====================================================\n\n";
 	
 	swap ( num1 , num2 );
 	cout <<"====================================================\n";
 	cout << " NUmbers after swapping are : " << num1  << " , " << num2;
 	cout <<"\n====================================================\n";
 	
 	return 0  ;
 	
 }