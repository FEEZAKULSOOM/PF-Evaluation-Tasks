#include<iostream>
using namespace std;
int main () {
	float temp;
	cout << "Enter the temperature ( in celsius) : ";
	cin >> temp;
	cout <<endl;
	cout <<"***********************************************************"<<endl;
	
	if ( temp >=40 ) {
		
		cout << " It is extremely hot . Stay indoor to avoid heat exhaustion." <<endl;
	} 
	else if ( temp >=30 && temp < 40 ) {
		
		cout << " It is hot. Drink plenty of water to stay hydrated .";
	}
	else {
		cout << " It is cool .Wear warm clothes to saty comfortable .";
	}
	cout <<"\n***********************************************************"<<endl;
	
	return 0;
}