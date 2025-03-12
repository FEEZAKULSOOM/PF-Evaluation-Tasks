#include<iostream>
using namespace std;
int main () {
	float amount, convertedAmount;
	int choice ;
	cout <<"----------------------------------------------\n";
	cout <<"Currency Converter (USD to PKR, Euros, INR)\n";
	cout <<"----------------------------------------------\n";
	
	cout <<"Enter the amount in USD :$";
	cin  >>amount ;
	cout <<"\nChoose currency you want to convert to:\n";
	cout <<"--------------------------------------------\n";
	cout <<"1 . Convert to PKR\n";
	cout <<"2 . Convert to INR\n";
	cout <<"3. Convert to Euros\n";
	cout <<"ENter your choice ( 1 , 2 , 3 )";
	cin  >>choice;
	
	const float usdToPkr = 286.50;
	const double usdToInr = 83.00;
	const double usdToEuro = 0.93;
	cout <<"\n----------------------------------------------------\n";
	switch(choice) {
		case 1:
			convertedAmount = amount * usdToPkr;
			cout <<  amount << " USD is equivalent to " << convertedAmount <<"PKR.\n";
			break;
	    case 2:
	        convertedAmount = amount * usdToInr;
			cout <<  amount << " USD is equivalent to " << convertedAmount <<"INR.\n";
			break;
		case 3:
	        convertedAmount = amount * usdToEuro;
			cout <<  amount << " USD is equivalent to " << convertedAmount <<"Euros.\n";
			break;
	    default:
	        cout << "Invalid choice! plz select 1, 2, 3\n";
	}
	return 0;
	
	
	
}