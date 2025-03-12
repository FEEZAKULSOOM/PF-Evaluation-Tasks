#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Maximum orders stored in the system
const int MAX_ORDERS = 100;  
int orderCount = 0;

// Structure for menu items
struct MenuItem {
    string name;
    double price;
};

// Structure for storing orders
struct Order {
    string customerName;
    string category;
    string item;
    int quantity;
    double price;
    double discount;
    double tax;
    double total;
};

// Menu items for each category (6 items per category)
MenuItem breakfastMenu[6] = {{"Pancakes", 5.0}, {"Omelette", 4.5}, {"Toast", 2.0}, {"Waffles", 6.0}, {"Cereal", 3.5}, {"Coffee", 2.5}};
MenuItem lunchMenu[6] = {{"Burger", 8.0}, {"Pasta", 10.0}, {"Salad", 6.0}, {"Sandwich", 7.0}, {"Rice Bowl", 9.0}, {"Soup", 5.5}};
MenuItem dinnerMenu[6] = {{"Steak", 15.0}, {"Pizza", 12.0}, {"Grilled Chicken", 14.0}, {"Seafood", 18.0}, {"Pasta Alfredo", 11.0}, {"Tacos", 9.0}};
MenuItem teaMenu[6] = {{"Black Tea", 2.0}, {"Green Tea", 2.5}, {"Milk Tea", 3.0}, {"Herbal Tea", 3.5}, {"Iced Tea", 4.0}, {"Ginger Tea", 3.0}};
MenuItem seasonalMenu[6] = {{"Mango Shake", 5.0}, {"Pumpkin Soup", 6.0}, {"Summer Salad", 7.0}, {"Strawberry Smoothie", 6.5}, {"Winter Coffee", 4.5}, {"Cold Brew", 4.0}};
MenuItem specialMenu[6] = {{"Lobster", 25.0}, {"Sushi", 20.0}, {"Lamb Chops", 22.0}, {"Special Pasta", 18.0}, {"Chef’s Surprise", 30.0}, {"Gourmet Burger", 16.0}};

// Arrays to store orders
Order orders[MAX_ORDERS];

// Discount and tax rates
const double studentDiscount = 0.10;
const double regularDiscount = 0.05;
const double taxRate = 0.08;

// Function to display menu items for selected category
void displayMenu(MenuItem menu[], int size) {
    for (int i = 0; i < size; i++) {
        cout << i + 1 << ". " << menu[i].name << " - $" << menu[i].price << endl;
    }
    cout << "======================================="<<endl;
}

// Function to take an order 
void takeOrder() {
    if (orderCount >= MAX_ORDERS) {
        cout << "Order limit reached! Cannot take more orders.";
        return;
    }

    string customerName;
    char discountChoice;
    double totalCustomerBill = 0;
    double totalDiscount = 0, totalTax = 0;
    char continueOrdering;
    
// Asking for customer name 
    cout << "Enter Customer Name: ";
    cin >> customerName;
    
// Asking for discount eligibility 
    cout << "Are you a student (S) or a regular customer (R)? (Enter N for none): ";
    cin >> discountChoice;

    do {
        int categoryChoice, itemChoice, quantity;
        Order order;
        order.customerName = customerName;

// Display category menu
    cout << "\n======================================="<<endl;
    cout << "  *Select Menu Category*    " <<endl;
    cout << "======================================"<<endl;
    cout << "1.Breakfast\n";
    cout << "2. Lunch \n";
    cout << "3. Dinner\n" ;
    cout << "4. Tea\n";
    cout << "5. Seasonal\n";
    cout << "6. Special\n";
    cout << "======================================="<<endl;
    
// Validation for category selection
    cout << "Enter choice: ";
    cin >> categoryChoice;

        MenuItem *selectedMenu;
        int menuSize = 6;
        

// Assign selected menu based on categorey   
      
           switch (categoryChoice) {
            case 1: selectedMenu = breakfastMenu; order.category = "Breakfast"; break;
            case 2: selectedMenu = lunchMenu; order.category = "Lunch"; break;
            case 3: selectedMenu = dinnerMenu; order.category = "Dinner"; break;
            case 4: selectedMenu = teaMenu; order.category = "Tea"; break;
            case 5: selectedMenu = seasonalMenu; order.category = "Seasonal"; break;
            case 6: selectedMenu = specialMenu; order.category = "Special"; break;
            default: cout << "Invalid choice!"; 
			return;
        }
        
//Display selected menu 
        cout << "\n===================================="<<endl;
        cout << "       *Available Items:*             "<<endl;
        cout << "===================================="<<endl;
        displayMenu(selectedMenu, menuSize);

//Taking item selection
        cout << "Select an item (1-6): ";
        cin >> itemChoice;
        
// valid item selection 
        if (itemChoice < 1 || itemChoice > 6) {
            cout << "Invalid item selection!\n";
            return;
        }

        cout << "Enter quantity: ";
        cin >> order.quantity;
        order.item = selectedMenu[itemChoice - 1].name;
        order.price = selectedMenu[itemChoice - 1].price * order.quantity;


//Apply discount based on user input
        if (discountChoice == 'S' || discountChoice == 's') {
            order.discount = order.price * studentDiscount;
        } else if (discountChoice == 'R' || discountChoice == 'r') {
            order.discount = order.price * regularDiscount;
        } else {
            order.discount = 0;
        }

//Calculate Tax and total amount 
        order.tax = (order.price - order.discount) * taxRate;
        order.total = order.price - order.discount + order.tax;
        
//Store the order in an array 

        orders[orderCount++] = order;
// Updating totals for session 
        totalCustomerBill += order.total;
        totalDiscount += order.discount;
        totalTax += order.tax;
		

//Asking if the customer wanrts to order more 

        cout << "Do you want to order more items? (Y/N): ";
        cin >> continueOrdering;

    } while (continueOrdering == 'Y' || continueOrdering == 'y');
    
//Displaying final Bill summary   
    cout << "\n========================================="<<endl;
    cout << "        * Total Bill for " << customerName << " *          "<< endl;
    cout << "==========================================="<<endl;
	cout << "Subtotal:            $" << fixed << setprecision(2) << totalCustomerBill- totalTax << endl;
    cout << "Discount:           -$" << totalDiscount << endl;
    cout << "Tax:                +$" << totalTax << endl;
    cout << "Total Bill:           $" << totalCustomerBill <<endl;
}

// Function to track order status (Simulation)
void trackOrder() {
    if (orderCount == 0) {
        cout << " ! No orders to track!\n";
        return;
    }
    cout << "\n* Your order is being prepared... *\n";
    cout << "Order is ready for pickup!  *\n";
}

// Function to display all orders grouped by customer name
void displayOrders() {
    if (orderCount == 0) {
        cout << "No orders placed yet!\n";
        return;
    }

    double grandTotal = 0 , grandDiscount = 0 , grandTax = 0;
    string lastCustomer = "";
    cout << "\n========================================="<<endl;
    cout << "       * All Customers Orders *             "<<endl;
    cout << "=========================================="<<endl;

    for (int i = 0; i < orderCount; i++) {
        if (orders[i].customerName != lastCustomer) {
            if (!lastCustomer.empty()) {
            	
            	//Display grand totals for previous customers 
            	cout << "-------------------------------------" << endl;
            	cout << "  Grand Total for " << lastCustomer << " : $" << grandTotal << endl;
            	cout << "-------------------------------------" << endl;
                cout << " Total Discount:  -$" << grandDiscount << endl;
                cout << " Total Tax:         +$" << grandTax << endl;
                cout << " Final amount to pay: $" << grandTotal << endl;
                cout << "====================================="<<endl;
                
                grandTotal = 0;
                grandDiscount = 0;
                grandTax = 0;
                
            }
            
            lastCustomer = orders[i].customerName;
            cout << "\n* Customer: " << orders[i].customerName <<" *" << endl;
            cout << "========================"<<endl;
        }
        
        //Display item details 
        cout << "Category: " << orders[i].category << endl;
        cout << "Item:  " << orders[i].item << " (x" << orders[i].quantity << ")" << endl;
        cout << "Total: $" << orders[i].total << endl;
        cout << endl;
        

        grandTotal += orders[i].total;
        grandDiscount += orders[i] . discount;
        grandTax += orders [i] . tax;
    }

    cout << "Grand Total for " << lastCustomer << ": $" << grandTotal << endl;
}


//Main function with input validation 
int main() {
    char choice;
    do {
    	cout << "\n=========================================="<<endl;
    	cout << "       *Welcome to the Resturant *          "<<endl;
    	cout << "============================================"<<endl;
        cout << "1. Take Order\n";
		cout << "2. Display Orders\n";
		cout << "3. Track Order\n";
		cout << "4. Exit\n";
		cout << "============================================"<<endl;
		cout << endl;
		cout << "Enter choice: ";
        cin >> choice;
        
       
		
      
      
       
        switch (choice) {
            case '1': takeOrder(); break;
            case '2': displayOrders(); break;
            case '3': trackOrder(); break;
            case '4': cout << "* Thank you for visting and using billing system!! *" << endl;
			return 0;
            default: cout << "Invalid choice! Try again.";
        }
    } while (true);
    
}






