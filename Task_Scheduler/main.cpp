#include <iostream>
#include <string>
#include "user.h"

using namespace std;

int main() {
    // Create/Login to account interaction occurs here
    // string username = whatever is inputted/created
    
    // username.viewAccountHome();

    // Takes in user's choice
    int userChoice;
    cin >> userChoice;
    // Checks that the user entered a valid choice
    while (userChoice < 0 || userChoice > 5) {
        cout << "Please enter a valid choice [0-5]: " << endl;
        cin >> userChoice;
    }

    // User Menu
    if (userChoice == 1) {  // Add Tasks
        // username.AddTasks()

    } else if (userChoice == 2) {  // Sort Tasks
        // username.SortTasks()

    } else if (userChoice == 3) {  // Edit Tasks
        // username.EditTasks()

    } else if (userChoice == 4) {  // Display Tasks
        // userName.DisplayTasks()

    } else if (userChoice == 5) {  // Delete Task
        // userName.DeleteTask()

    }

    return 0;
}
