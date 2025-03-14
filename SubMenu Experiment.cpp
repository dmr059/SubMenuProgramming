#include <iostream>

using namespace std;

// Function to handle menu validation (input checking)
int menuValidation() {
    int choice;

    while(true) {
        cout << "Enter your choice: ";
        
        // If the input is valid (a number is entered)
        if (cin >> choice) {
        	
            return choice;  // Return the valid choice
            
        } 
		
		else {
			
            cout << "Error: Please enter a number.\n";
            cin.clear(); // Clears error flag
            cin.ignore(10000, '\n'); // Ignores the rest of the invalid input
        
		}
        
    }
}

void subMenu_1() {
	
    int choice;

    cout << endl;
    cout << "--- SubMenu_1 ---" << endl;
    cout << "1. Option A" << endl;
    cout << "2. Option B" << endl;
    cout << "3. Back to Main Menu" << endl;

    choice = menuValidation();

    switch(choice) {
        case 1:
            cout << "You've selected option A." << endl;
            break;

        case 2:
            cout << "You've selected option B." << endl;
            break;

        case 3:
            cout << "Going back to Main Menu..." << endl;
            break;

        default:
            cout << endl;
            cout << "Invalid choice, please try again." << endl;
    }
}

void subMenu_2() {
    int choice;

    cout << endl;
    cout << "--- In subMenu_2 --- " << endl;
    cout << "1. Option X" << endl;
    cout << "2. Option Y" << endl;
    cout << "3. Back to Main Menu" << endl;

    choice = menuValidation();

    switch(choice) {
        case 1:
            cout << "You've selected option X." << endl;
            break;

        case 2:
            cout << "You've selected option Y." << endl;
            break;

        case 3:
            cout << "Returning to Main Menu..." << endl;
            break;

        default:
            cout << endl;
            cout << "Invalid menu option, please try again." << endl;
    }
}

int main() {
    int MainChoice;

    // Main Menu -- Constantly displays until option 3 is selected.
    do {
        cout << "--- Main Menu ---" << endl;
        cout << "1. Go to subMenu_1" << endl;
        cout << "2. Go to subMenu_2" << endl;
        cout << "3. Exit" << endl;

        MainChoice = menuValidation();

        switch(MainChoice) {
            case 1:
                subMenu_1();  // Calls subMenu_1
                break;

            case 2:
                subMenu_2();  // Calls subMenu_2
                break;

            case 3:
                cout << "Exiting program!" << endl;
                break;

            default:
                cout << endl;
                cout << "Error: Invalid menu selection." << endl;
        }

    } while (MainChoice != 3);  // Keep displaying the menu until option 3 is selected

    return 0;
}
