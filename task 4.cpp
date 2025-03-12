#include<iostream>
using namespace std;
int main () {
	int day ;
	cout <<"\n=====================================================\n";
	cout <<"              Day of week Finder\n";
	cout <<"======================================================\n\n";
	
	cout <<"Enter the number to find coressponding day of week :  ";
	cin >> day;
	cout <<"\n======================================================\n";
	cout <<"Result :";
	switch ( day ) {
		case 1 :
			cout <<"Monday "<<endl;
			break;
		case 2 :
			cout <<"Tuesday"<<endl;
			break;
		case 3 :
			cout <<"wednesday "<<endl;
			break;
	    case 4 :
			cout <<"Thursday "<<endl;
			break;
		case 5 :
			cout <<"Friday "<<endl;
			break;
		case 6 :
			cout <<"Saturday "<<endl;
			break;
		case 7 :
			cout <<"Sunday "<<endl;
			break;
		default :
			cout <<"Invalid number ! plz..Enter  a number from 1 - 7 .";
			break;
	}
	
}