#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <windows.h> // For Colors in Dev-C++
using namespace std;

// Function to set text color
void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

// Function to display elegant text logo
void displayLogo() {
    setColor(11); // Light Cyan
    cout << "\n";
    cout << "####################################  \n";
    cout << "#          ? THE GREAT FEAST ?     #  \n";
    cout << "#     *------------------------*   #  \n";
    cout << "#          ? RESTAURANT ?          #  \n";
    cout << "####################################  \n";
    setColor(7); // Reset color
}

// Structure to store menu items
struct MenuItem {
    string name;
    double price;
    int stock; // Added stock to manage item availability
};

// Structure to store customer details
struct Customer {
    string name;
    string mobile;
    string address;
    int paymentMode;
    bool hasCoupon;
};

// Structure to store order history
struct OrderHistory {
    Customer cust;
    double totalAmount;
    time_t orderTime;
};

// Function to display the menu
void displayMenu(MenuItem menu[], int size, string category) {
    setColor(14); // Yellow
    cout << "\n--------------------------------------\n";
    cout << "         " << category << "         \n";
    cout << "--------------------------------------\n";
    setColor(7); // White
    for (int i = 0; i < size; i++) {
        cout << i + 1 << ". " << menu[i].name << " - Rs" << menu[i].price 
             << " (Stock: " << menu[i].stock << ")\n";
    }
    setColor(14);
    cout << "--------------------------------------\n";
    setColor(7);
}

// Function to take customer details
void getCustomerDetails(Customer &cust) {
    setColor(11); // Cyan
    cout << "\n+----------------------------+\n";
    cout << "¦      CUSTOMER DETAILS      ¦\n";
    cout << "+----------------------------+\n";
    setColor(7);
    cout << "Customer Name:: ";
    getline(cin, cust.name);
    cout << "Mobile number:: ";
    getline(cin, cust.mobile);
    cout << "Address:: ";
    getline(cin, cust.address);
    
    cout << "Select Payment Mode:\n1. Cash\n2. Credit Card\n3. Debit Card\n";
    cin >> cust.paymentMode;

    while (cust.paymentMode < 1 || cust.paymentMode > 3) {
        setColor(12); // Red for Error
        cout << "Invalid input! Please enter 1, 2, or 3:\n";
        setColor(7);
        cin >> cust.paymentMode;
    }

    cout << "Do you have any Coupon Code?\n1. Yes\n0. No\n";
    cin >> cust.hasCoupon;

    if (cust.hasCoupon) {
        setColor(10); // Green
        cout << "Yay! You have got 50% discount!\n";
        setColor(7);
    }
}

// Function to process the order
double processOrder(MenuItem menu[], int size, string category) {
    double total = 0.0;
    int choice, quantity;
    
    do {
        displayMenu(menu, size, category);
        cout << "Enter item number to order (or 0 to stop): ";
        cin >> choice;

        if (choice > 0 && choice <= size) {
            cout << "Enter quantity: ";
            cin >> quantity;

            if (quantity > menu[choice - 1].stock) {
                setColor(4);
                cout << "Not enough stock available!\n";
                setColor(7);
            } else {
                menu[choice - 1].stock -= quantity;
                total += menu[choice - 1].price * quantity;
                setColor(2);
                cout << "Added to order successfully!\n";
                setColor(7);
            }
        } else if (choice != 0) {
            setColor(4);
            cout << "Invalid choice! Please select a valid item.\n";
            setColor(7);
        }
    } while (choice != 0);

    return total;
}

// Function to calculate tax and discount
double calculateFinalAmount(double total, bool hasCoupon) {
    const double TAX_RATE = 0.08;
    const double DISCOUNT_RATE = 0.5;

    double discount = hasCoupon ? total * DISCOUNT_RATE : 0;
    double tax = total * TAX_RATE;
    double finalAmount = total - discount + tax;

    return finalAmount;
}

// Function to display receipt
void displayReceipt(Customer cust, double total) {
    double finalAmount = calculateFinalAmount(total, cust.hasCoupon);
    
    setColor(6); // Yellow
    cout << "\n+----------------------------+\n";
    cout << "¦       CUSTOMER RECEIPT     ¦\n";
    cout << "+----------------------------+\n";
    setColor(7);
    
    cout << "Name:: " << cust.name << "\n";
    cout << "Mob no:: " << cust.mobile << "\n";
    cout << "Address:: " << cust.address << "\n";
    cout << "Mode of Payment:: " 
         << (cust.paymentMode == 1 ? "Cash" : cust.paymentMode == 2 ? "Credit Card" : "Debit Card") << "\n";
    
    setColor(10); // Green
    cout << "Subtotal:: Rs" << total << "\n";
    cout << "Discount Applied:: Rs" << (cust.hasCoupon ? total * 0.5 : 0) << "\n";
    cout << "Tax (8%):: Rs" << (total - (cust.hasCoupon ? total * 0.5 : 0)) * 0.08 << "\n";
    cout << "Total Payable Price:: Rs" << finalAmount << "\n";
    setColor(7);
    
    time_t now = time(0);
    cout << "Current time:: " << ctime(&now);
}

// Function to display Thank You message
void displayThankYou() {
    setColor(14); // Yellow
    cout << "\n";
    cout << "  **********************************  \n";
    cout << "  *         THANK YOU!            *  \n";
    cout << "  *      FOR VISITING US!         *  \n";
    cout << "  *      SEE YOU AGAIN :)         *  \n";
    cout << "  **********************************  \n";
    setColor(7); // Reset color
}

// Function to display order history
void displayOrderHistory(OrderHistory orders[], int orderCount) {
    if (orderCount == 0) {
        setColor(12); // Red
        cout << "No orders found.\n";
        setColor(7);
        return;
    }

    setColor(14); // Yellow
    cout << "\n+----------------------------+\n";
    cout << "¦     ORDER HISTORY          ¦\n";
    cout << "+----------------------------+\n";
    setColor(7);

    for (int i = 0; i < orderCount; i++) {
        cout << "\nOrder #" << i + 1 << " | Date: " << ctime(&orders[i].orderTime);
        cout << "Customer: " << orders[i].cust.name << "\n";
        cout << "Total Amount: Rs" << orders[i].totalAmount << "\n";
    }

    setColor(7);
}

// Function to display the main menu with bold, emoji-style decorations
void displayMainMenuHeading() {
    setColor(14); // Yellow
    cout << "\n";
    cout << "  %%%%%%%%%%%%%%%%%%%%%%%%&*&*&*%%$$$$$$#######\n";
    cout << "  **                     MAIN MENU           **\n";
    cout << "  %%%%%%%%%%%%%%%%%%%%%%%%&*&*&*%%$$$$$$#######\n";
    setColor(7); // Reset color
}


void displayMainMenu() {
    displayMainMenuHeading();
    
    cout << "1. Display Menu\n";
    cout << "2. Order Something\n";
    cout << "3. Save Bill\n";
    cout << "4. View All Orders History\n";
    cout << "5. Exit\n";
}

int main() {
    // Define menu categories
    MenuItem starters[3] = {{"Spring Rolls", 5.5, 10}, {"Garlic Bread", 3.0, 15}, {"Nachos", 4.5, 12}};
    MenuItem mainCourse[3] = {{"Biryani", 8.0, 10}, {"Pasta", 7.5, 12}, {"Grilled Chicken", 10.0, 8}};
    MenuItem desserts[3] = {{"Brownie", 4.0, 10}, {"Ice Cream", 3.5, 12}, {"Pudding", 4.5, 9}};
    MenuItem beverages[3] = {{"Tea", 2.0, 20}, {"Coffee", 3.0, 18}, {"Fresh Juice", 4.5, 15}};

    OrderHistory orders[100]; // Array to store order history
    int orderCount = 0; // To keep track of the number of orders

    // Display Restaurant Name
    displayLogo();
    cout << "\nWelcome to The Great Feast Restaurant!\n";
    
    int choice;
    bool running = true;

    while (running) {
        displayMainMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // To handle newline character left in the buffer

        switch (choice) {
            case 1:
                displayMenu(starters, 3, "Starters");
                displayMenu(mainCourse, 3, "Main Course");
                displayMenu(desserts, 3, "Desserts");
                displayMenu(beverages, 3, "Beverages");
                break;

            case 2: {
                Customer cust;
                getCustomerDetails(cust);
                double total = 0;
                total += processOrder(starters, 3, "Starters");
                total += processOrder(mainCourse, 3, "Main Course");
                total += processOrder(desserts, 3, "Desserts");
                total += processOrder(beverages, 3, "Beverages");

                // Save the order history
                orders[orderCount].cust = cust;
                orders[orderCount].totalAmount = total;
                time(&orders[orderCount].orderTime);
                orderCount++;

                displayReceipt(cust, total);
                displayThankYou();
                break;
            }

            case 3:
                cout << "Saving bill...\n";
                break;

            case 4:
                displayOrderHistory(orders, orderCount);
                break;

            case 5:
                running = false;
                cout << "Exiting the program.\n";
                break;

            default:
                cout << "Invalid option. Please try again.\n";
                break;
        }
    }

    return 0;
}

