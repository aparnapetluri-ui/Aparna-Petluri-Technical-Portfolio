#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class User {
    public:
        string name;
        User();
        User(string name, string password, string username);
        void setUsername(string username);
        void setPassword(string password);
        void setName(string name);
        string getUsername() const;
        string getPassword() const;
        string getName() const;
        // when user logs out in login class, user uses saveTasks
        void saveTasks();
    private:
        string password;
        string username;
        TaskManager taskManager;  // I added this bc I wanted users to actually own the tasks through their own task manager
};

#endif
