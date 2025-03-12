#include<iostream>
using namespace std;
int main () {
	int mainChoice, subChoice;
	double totalBill = 0.0, quantity, price;
	int andaPratha = 40,  nanChanny = 60, siriPaye = 150, tea = 15;
	int ChickenKarai = 1050, muttonKarai = 1800, eggFriedRice = 450, BBQ =1050;
	int  saji = 800;
	cout << "\n===================================================\n";
	cout << "          Welcome to Resturant ! \n";
	cout << "\n===================================================\n\n"; 
	do {
	    cout << "==============================\n";
		cout << "Main Menu:\n";
		cout << "==============================\n";  
		cout << "1. Break Fast\n";
		cout << "2. Lunch\n";
		cout << "3. Dinner\n";
		cout << "4. Exit\n";
		cout << "Plz select an option : ";
		cin >> mainChoice;
		if (mainChoice == 1) {
		   cout << "==============================\n";
		   cout << "Break Fast Menu :\n";
		   cout << "==============================\n";
		   cout << "1. Anda Pratha\n";
		   cout << "2. Nan Channy \n";
		   cout << "3. Siri Paye\n";
		   cout << "4. tea \n";
		   cout << "Plz select an option : ";
		   cin >> subChoice;
		switch ( subChoice ) {
		   case 1:
			cout <<"Enter quantity: ";
			cin >> quantity;
			price = andaPratha * quantity;
			totalBill += price;
			cout << "Total :$" << totalBill <<endl;
			break;
	       case 2:
			cout <<"Enter quantity: ";
			cin >> quantity;
			price = nanChanny * quantity;
			totalBill += price;
			cout << "Total :$" << totalBill << endl;
			break;
			
		   case 3:
			cout <<"Enter quantity: ";
			cin >> quantity;
			price = eggFriedRice * quantity;
			totalBill += price;
			cout << "Total :$" << totalBill << endl;
		 	break;
		  case 4:
			cout <<"Enter quantity: ";
			cin >> quantity;
			price = siriPaye * quantity;
			totalBill += price;
			cout << "Total :$" <<totalBill <<endl;
			break;
		  default:
		  	cout <<"Invalid choice ! ";
			
			
		}
   }
	else if (mainChoice == 2) {
	  	   cout << "==============================\n";
		   cout << "Lunch Menu :\n";
		   cout << "==============================\n";
		   cout << "1. Chicken Karai\n";
		   cout << "2. Mutton Karai\n";
		   cout << "3. Egg Fried Rice\n";
		   cout << "4. BBQ \n";
		   cout << "Plz select an option : ";
		   cin >> subChoice;
		switch ( subChoice ) {
		   case 1:
			cout <<"Enter quantity: ";
			cin >> quantity;
			price = ChickenKarai * quantity;
			totalBill += price;
			cout << "Total :$" <<totalBill <<endl;
			break;
	       case 2:
			cout <<"Enter quantity: ";
			cin >> quantity;
			price = muttonKarai * quantity;
			totalBill += price;
			cout << "Total :$" <<totalBill <<endl;
			break;
			
		   case 3:
			cout <<"Enter quantity: ";
			cin >> quantity;
			price = eggFriedRice * quantity;
			totalBill += price;
			cout << "Total :$" <<totalBill << endl;
		 	break;
		  case 4:
			cout <<"Enter quantity: ";
			cin >> quantity;
			price = BBQ * quantity;
			totalBill += price;
			cout << "Total :$" << totalBill <<endl;
			break;
		  default:
		  	cout <<"Invalid choice ! ";
			
			
		}
		
				
	}
	else if (mainChoice == 3) {
		   cout << "==============================\n";
		   cout << "Dinner Menu :\n";
		   cout << "==============================\n";
		   cout << "1. Chicken Karai\n";
		   cout << "2. Mutton Karai\n";
		   cout << "3. Egg Fried Rice\n";
		   cout << "4. BBQ \n";
		   cout << "5. Saji \n";
		   cout << "Plz select an option : ";
		   cin >> subChoice;
		switch ( subChoice ) {
		   case 1:
			cout <<"Enter quantity: ";
			cin >> quantity;
			price = ChickenKarai * quantity;
			totalBill += price;
			cout << "Total :$" <<totalBill <<endl;
			break;
	       case 2:
			cout <<"Enter quantity: ";
			cin >> quantity;
			price = muttonKarai * quantity;
			totalBill += price;
			cout << "Total :$" <<totalBill <<endl;
			break;
			
		   case 3:
			cout <<"Enter quantity: ";
			cin >> quantity;
			price = eggFriedRice * quantity;
			totalBill += price;
			cout << "Total :$" <<totalBill <<endl;
		 	break;
		  case 4:
			cout <<"Enter quantity: ";
			cin >> quantity;
			price = BBQ * quantity;
			totalBill += price;
			cout << "Total :$" <<totalBill <<endl;
			break;
		  case 5:
			cout <<"Enter quantity: ";
			cin >> quantity;
			price = saji * quantity;
			totalBill += price;
			cout << "Total :$" <<totalBill <<endl;
			break;
		  default:
		  	cout <<"Invalid choice ! ";
			
			
		}
		
				
	}
	else if ( mainChoice == 4 ) {
		cout << "Thank you for visiting our resturant !\n";
		cout << "==============================\n";
		cout << "Total Bill: $" << totalBill <<endl;
		cout << "==============================\n";
		break;
	}
	else {
		cout << "Invalid Selection ! plz choose betyween 1 and 4! ";
	}
	
		
 }while ( mainChoice !=4);
 cout << "\n=================================================\n";
		 
 return 0;
		
	
	
}