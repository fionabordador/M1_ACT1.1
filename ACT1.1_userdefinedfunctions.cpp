#include <iostream>
using namespace std;

int main() {
    int choice;
    int num1, num2;
    char continueChoice;

    do {
        // Display menu
        cout << "================================================\n";
        cout << "           PLEASE CHOOSE AN OPERATION\n";
        cout << "================================================\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Modulus\n";

        // User choice
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        // Input values
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        // Selected operation
        switch (choice) {
        case 1:
            cout << "Result: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Result: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Result: " << num1 * num2 << endl;
            break;
        case 4:
            if (num2 != 0) {
                cout << "Result: " << static_cast<double>(num1) / num2 << endl;
            }
            else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        case 5:
            if (num2 != 0) {
                cout << "Result: " << num1 % num2 << endl;
            }
            else {
                cout << "Error: Modulus by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Invalid choice. Please choose a number between 1 and 5." << endl;
        }

        // Continuation
        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> continueChoice;

        system("cls");

    } while (continueChoice == 'y' || continueChoice == 'Y');

    cout << "Thank you for your cooperation. Goodbye!" << endl;


    return 0;
}
