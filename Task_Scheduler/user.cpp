#include <iostream>
#include <string>

#include "user.h"
#include "TaskManager.h"

using namespace std;

User::User() { // default constructor
    name = "";
    password = "";
    username = "";
}

User::User(string name, string password, string username) { // parameterized constructor
    this->name = name;
    this->password = password;
    this->username = username;
}

void User::setUsername(string username) {  // setter for username
    this->username = username;
}

void User::setPassword(string password) { // setter for password
    this->password = password;
}

void User::setName(string name) { // setter for name
    this->name = name;
}

string User::getUsername() const { // getter for username
    return username;
}

string User::getPassword() const {
    return password;
}

string User::getName() const {
    return name;
}

void User::saveTasks() {
  const vector<Task>& tasks = taskManager.getTasks(); // taskManager class has a vector of tasks, this will call its getter
  TaskManager::saveTasks(this->username, tasks);
}
