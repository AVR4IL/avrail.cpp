#include <iostream>
#include <limits>
using namespace std;

int main() {
    float totalPrice = 0.0; // Initialize total price
    char continueOrder;
    double customerMoney;
    string name;

    cout << " ------AVI LUX FOODIE ------" << endl << endl;
    cout << "Welcome to AVI LUX FOODIE!\n";
    cout << "Please enter your name: ";
    cin >> name;

    cout << "---- Hello, " << name << "! Are you dining in or taking out? (d/t) ----: ";
    char diningOrTakeout;
    cin >> diningOrTakeout;

    // Error handling for dining/takeout choice
    while (diningOrTakeout != 'd' && diningOrTakeout != 't') {
        cout << "Invalid choice. Please enter 'd' for dine-in or 't' for takeout: ";
        cin >> diningOrTakeout;
    }

    cout << (diningOrTakeout == 'd' ? "You chose dine-in!\n" : "You chose takeout. Your food will be ready shortly!\n");

    // Food Menu
    cout << "\n-------- FOOD MENU --------\n";
    cout << "1. Burger Steak\n";
    cout << "2. French Fries\n";
    cout << "3. Chicken Nuggets\n";
    cout << "4. McChicken Sandwich\n";
    cout << "Enter your food order (1-4): ";
    int foodOrder;
    cin >> foodOrder;

    // Error handling for food order
    while (foodOrder < 1 || foodOrder > 4) {
        cout << "Invalid choice. Please enter a number between 1 and 4: ";
        cin >> foodOrder;
    }

    // Drink Menu
    cout << "\n-------- DRINK MENU --------\n";
    cout << "1. Coca-Cola\n";
    cout << "2. Sprite\n";
    cout << "3. Iced Tea\n";
    cout << "4. Fresh Lemonade\n";
    cout << "Enter your drink order (1-4): ";
    int drinkOrder;
    cin >> drinkOrder;

    // Error handling for drink order
    while (drinkOrder < 1 || drinkOrder > 4) {
        cout << "Invalid choice. Please enter a number between 1 and 4: ";
        cin >> drinkOrder;
    }

    // Assign names based on order
    string foodName;
    string drinkName;

    switch (foodOrder) {
        case 1:
            foodName = "Burger Steak";
            break;
        case 2:
            foodName = "French Fries";
            break;
        case 3:
            foodName = "Chicken Nuggets";
            break;
        case 4:
            foodName = "McChicken Sandwich";
            break;
    }

    switch (drinkOrder) {
        case 1:
            drinkName = "Coca-Cola";
            break;
        case 2:
            drinkName = "Sprite";
            break;
        case 3:
            drinkName = "Iced Tea";
            break;
        case 4:
            drinkName = "Fresh Lemonade";
            break;
    }

    // Display the orders of the customer
    cout << "\nYou ordered " << foodName << " and " << drinkName << ".\n";

    // Set total price for mix-and-match (assuming 75.00)
    totalPrice = 75.00;

    // Additional Items Loop
    cout << "\nDo you want to add more items to your order? (y/n): ";
    cin >> continueOrder;

    while (continueOrder == 'y' || continueOrder == 'Y') {
        cout << "\n-------- ADDITIONAL ITEMS --------\n";
        cout << "1. Add another food item\n";
        cout << "2. Add another drink\n";
        cout << "Enter your choice (1-2): ";
        int additionalChoice;
        cin >> additionalChoice;

        // Error handling for additional choice
        while (additionalChoice < 1 || additionalChoice > 2) {
            cout << "Invalid choice. Please enter 1 or 2: ";
            cin >> additionalChoice;
        }

        switch (additionalChoice) {
            case 1:
                // Food Menu with prices
                cout << "\n-------- FOOD MENU --------\n";
                cout << "1. Burger Steak - ₱50.00\n";
                cout << "2. French Fries - ₱30.00\n";
                cout << "3. Chicken Nuggets - ₱40.00\n";
                cout << "4. McChicken Sandwich - ₱45.00\n";
                cout << "Enter your food order (1-4): ";
                cin >> foodOrder;

                // Error handling for food order
                while (foodOrder < 1 || foodOrder > 4) {
                    cout << "Invalid choice. Please enter a number between 1 and 4: ";
                    cin >> foodOrder;
                }

                switch (foodOrder) {
                    case 1:
                        cout << "You ordered Burger Steak.\n";
                        totalPrice += 50.00;
                        break;
                    case 2:
                        cout << "You ordered French Fries.\n";
                        totalPrice += 30.00;
                        break;
                    case 3:
                        cout << "You ordered Chicken Nuggets.\n";
                        totalPrice += 40.00;
                        break;
                    case 4:
                        cout << "You ordered McChicken Sandwich.\n";
                        totalPrice += 45.00;
                        break;
                }
                break;

            case 2:
                // Drink Menu with prices
                cout << "\n-------- DRINK MENU --------\n";
                cout << "1. Coca-Cola - ₱20.00\n";
                cout << "2. Sprite - ₱20.00\n";
                cout << "3. Iced Tea - ₱25.00\n";
                cout << "4. Fresh Lemonade - ₱25.00\n";
                cout << "Enter your drink order (1-4): ";
                cin >> drinkOrder;

                // Error handling for drink order
                while (drinkOrder < 1 || drinkOrder > 4) {
                    cout << "Invalid choice. Please enter a number between 1 and 4: ";
                    cin >> drinkOrder;
                }

                switch (drinkOrder) {
                    case 1:
                        cout << "You ordered Coca-Cola.\n";
                        totalPrice += 20.00;
                        break;
                    case 2:
                        cout << "You ordered Sprite.\n";
                        totalPrice += 20.00;
                        break;
                    case 3:
                        cout << "You ordered Iced Tea.\n";
                        totalPrice += 25.00;
                        break;
                    case 4:
                        cout << "You ordered Fresh Lemonade.\n";
                        totalPrice += 25.00;
                        break;
                }
                break;
        }

        cout << "\nDo you want to add more items to your order? (y/n): ";
        while(!(cin >> continueOrder)){
            cin.clear() ;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nDo you want to add more items to your order? (y/n): ";
        }
        // Error handling for continue order choice
        while (continueOrder != 'y' && continueOrder != 'Y' && continueOrder != 'n' && continueOrder != 'N') {
            cout << "Invalid choice. Please enter 'y' for yes or 'n' for no: ";
            cin >> continueOrder;
        }
    }

    // Payment and Change Calculation
    cout << "\nYour total bill is ₱" << totalPrice << ".\n";
    cout << "Enter the amount you want to pay: ₱";
    cin >> customerMoney;

    // Error handling for payment amount
    while (customerMoney < totalPrice) {
        cout << "Insufficient amount. Please pay the full amount or more: ₱";
        cin >> customerMoney;
    }

    double change = customerMoney - totalPrice;
    cout << "Your change is ₱" << change << ".\n";
    cout << "Thank you for dining at AVI LUX FOODIE! Have a great day!\n";

    return 0;
}
