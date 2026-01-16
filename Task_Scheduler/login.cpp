#include <iostream>
#include <string>
#include <fstream>

#include "login.h"
#include "user.h"

using namespace std;

// function for new users -- createAccount() 
// --> triggered when "Create a new Account" is selected on main page
void createAccount() {
   string username;
   string password;
   cout << "Create an account" << endl;
   cout << "Enter a username: " << endl;
   cin >> username;
   /* Is there also a way to check previously entered usernames? 
   to prompt the user to enter a new username if that one is already in the system */
   cout << "Enter a password: " << endl;
   cin >> password;

   // Adding this information to a txt file
   ofstream usersFile("users.txt");
   if (usersFile.is_open()) {  // making sure file is opended correctly
      usersFile << username << ": " << password << endl;
      usersFile.close();

   } else {
      throw runtime_error("File was unable to open.");
   }

   return;
}

// function to check if old users are in system -- validateUsers() 
// --> triggered when "Login to Existing Account" is selected on main page
bool validateUsers(const string& username, const string& password) {
   // using const string& to not alter original string, also only getting reference
   ifstream usersFile("users.txt");
   string inputUsername;
   string inputPassword;

   if (!usersFile) {
      throw runtime_error("File was unable to open.");
   }

   // file saves username -space- password: reading until no more pairs are found (user & password group)
   while (usersFile >> inputUsername >> inputPassword) {
      if (inputUsername == username && inputPassword == password) {
         return true;
      } else {
         return false;
      }
   }
}

// saves user information into the users.txt file, appends it
void Login::saveUser(User user) {
  ofstream userFiles("users.txt", ios::app);
  if (userFiles.is_open()) {
    userFiles << user.getUsername() << ": " << user.getPassword() << endl;
    userFiles.close();
  }
  else {
    throw runtime_error("File was unable to open.");
  }
}

void Login::viewAccountHome() {
    string seperators = "+==================================+";

    // Outputs the Home Page Title
    cout << seperators << endl << endl;
    cout << "             HOME PAGE             " << endl << endl;
    cout << seperators << endl << endl;

    // Outputs Welcome and Highest Priority Task
    cout << "Welcome " << "*USERNAME*" << "!" << endl << endl;
    cout << "HIGHEST PRIORITY TASK:" << endl << endl;
    // Add cout line (cout << getTaskName() << "(" << getTaskPriority() << ") - Due: " << getTaskDueDate() << endl << endl)

    // Outputs the existing task list (probably in default due date order)
    cout << "YOUR TASKS:" << endl << endl;
    /* for(unsigned i = 1; i <= taskvectorlength; ++i) {
        cout << i << ". " << getTaskName() << endl;
    }*/
    cout << endl;
    cout << seperators << endl << endl;

    // Outputs Task Manager Menu
    cout << "1. Add Tasks" << endl;
    cout << "2. Sort Tasks" << endl;
    cout << "3. Edit Tasks" << endl;
    cout << "4. Display Tasks" << endl;
    cout << "5. Delete Task" << endl;
    cout << "0. Logout" << endl << endl;

    cout << "Enter your choice [0-5]: _" << endl;
}
