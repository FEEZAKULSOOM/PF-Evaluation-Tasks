#include <iostream>
#include <iomanip>
using namespace std;

// Structure for menu items
struct MenuItem {
    string name;
    double price;
};

// Function prototypes
void displayMenu(MenuItem menu[], int size);
double calculateTotal(double price, int quantity);
double calculateFinalBill(double total);

int main() {
    const int SIZE = 5;
    MenuItem menu[SIZE] = {
        {"Burger", 5.99},
        {"Pizza", 8.99},
        {"Pasta", 7.49},
        {"Salad", 4.99},
        {"Soda", 1.99}
    };
    
    int choice, quantity;
    double total = 0;
    
    do {
        cout << "\n========================================\n";
        cout << "            Restaurant Menu             \n";
        cout << "========================================\n";
        displayMenu(menu, SIZE);
        cout << "| 6. Exit                               |\n";
        cout << "========================================\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        if (choice == 6) break;
        
        if (choice < 1 || choice > SIZE) {
            cout << "\n========================================\n";
            cout << "| Invalid choice. Please try again!   |\n";
            cout << "========================================\n";
            continue;
        }
        
        cout << "Enter quantity: ";
        cin >> quantity;
        
        total += calculateTotal(menu[choice - 1].price, quantity);
        cout << "\n========================================\n";
        cout << "| Item added to the bill!              |\n";
        cout << "========================================\n";
        
    } while (true);
    
    double finalBill = calculateFinalBill(total);
    
    cout << "\n========================================\n";
    cout << "            Final Bill Summary          \n";
    cout << "========================================\n";
    cout << "| Subtotal:      $" << setw(8) << fixed << setprecision(2) << total << "   |\n";
    cout << "| Tax (10%):     $" << setw(8) << total * 0.10 << "   |\n";
    cout << "| Total Amount:  $" << setw(8) << finalBill << "   |\n";
    cout << "========================================\n";
    cout << "| Thank you for dining with us!        |\n";
    cout << "========================================\n";
    return 0;
}

// Function to display menu
void displayMenu(MenuItem menu[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "| " << i + 1 << ". " << setw(10) << left << menu[i].name 
             << " - $" << fixed << setprecision(2) << menu[i].price << " |\n";
    }
}

// Function to calculate the total cost of an item
double calculateTotal(double price, int quantity) {
    return price * quantity;
}

// Function to calculate final bill with tax
double calculateFinalBill(double total) {
    return total + (total * 0.10); // 10% tax
}
