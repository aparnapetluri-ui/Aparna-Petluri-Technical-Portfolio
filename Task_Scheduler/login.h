#ifndef LOGIN_H
#define LOGIN_H

#include <string>
using namespace std;

#include "user.h"

class Login {
    private:

    public:
      void viewAccountHome();
      static void saveUser(User user); // when creating an account(creates user object) this function saves it to the txt
      void createAccount();
      bool validateUsers(const string& username, const string& password);
};

#endif
