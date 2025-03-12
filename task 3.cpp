#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	float price, totalPrice, discount, finalPrice;
	int categoryChoice, itemChoice, quantity;
	cout <<"-----------------------------------------------------\n";
	cout <<"        Welcome to Shopping System\n"; 
	cout <<"-----------------------------------------------------\n";
	
	cout << "Please choose a category:\n";
	cout <<"1. Electronics\n";
	cout <<"2. Clothing\n";
	cout <<"3. Groceries\n";
	cout <<"Enter your choice (1, 2, 3): ";
	cin >>categoryChoice;
	
	switch( categoryChoice ) {
		case 1 :
			cout <<"\nSelect an item \n";
			cout <<"1. Laptop - $1000\n";
			cout <<"2. SmartPhone - $700\n";
			cout <<"3. HeadPhones - $150\n";
			cout <<"Enter your choice (1, 2, 3): ";
	        cin >>itemChoice;
	        
	        cout <<"Enter quantity :";
	        cin >>quantity;
	        switch ( itemChoice) {
	        	case 1:
	        	    price = 1000;
	        	    break;
	        	case 2:
	        	    price = 700;
	        	    break;
	        	case 3:
	        	   price = 150;
	        	   break;
	        	default:
	        	   cout << "Invalid item choice !";
	        	   break;
			}
			totalPrice = price * quantity;
			break;
		
		case 2 :
			cout <<"\nSelect an item \n";
			cout <<"1. Jacket - $120\n";
			cout <<"2. TeaShirt - $40\n";
			cout <<"3. Jeans - $60\n";
			cout <<"Enter your choice (1, 2, 3): ";
	        cin >>itemChoice;
	        
	        cout <<"Enter quantity :";
	        cin >>quantity;
	        switch ( itemChoice) {
	        	case 1:
	        	    price = 120;
	        	    break;
	        	case 2:
	        	    price = 40;
	        	    break;
	        	case 3:
	        	   price = 60;
	        	   break;
	        	default:
	        	   cout << "Invalid item choice !";
	        	   break;
			}
			totalPrice = price * quantity;
			break;
			
		case 3 :
			cout <<"\nSelect an item \n";
			cout <<"1. Milk - $2\n";
			cout <<"2. Bread - $3\n";
			cout <<"3. Eggs - $5\n";
			cout <<"Enter your choice (1, 2, 3): ";
	        cin >>itemChoice;
	        
	        cout <<"Enter quantity :";
	        cin >>quantity;
	        switch ( itemChoice) {
	        	case 1:
	        	    price = 2;
	        	    break;
	        	case 2:
	        	    price = 3;
	        	    break;
	        	case 3:
	        	   price = 5;
	        	   break;
	        	default:
	        	   cout << "Invalid item choice !";
	        	   break;
			}
			totalPrice = price * quantity;
			break;		
	}
	if( totalPrice < 100) {
		discount = 0;
	}
	else if ( totalPrice >=100 && totalPrice <= 500 ) {
		discount = 0.10;
	}
	else {
		discount =0.20;
	}
	
	finalPrice = totalPrice -( totalPrice * discount );
	
	cout << "\n--------------------------------------------\n";
	cout <<"         Invoice\n";
	cout << "\n--------------------------------------------\n";
	cout << "Total Price :$ " << totalPrice<<"\n";
	cout << "Discount apply: " << (discount * 100) <<"%\n";
	cout << "Final Price after discount :" << finalPrice <<"\n";
	cout << "\n--------------------------------------------\n";
	return 0;    
	
}