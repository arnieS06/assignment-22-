#include <iostream>

std::string getLastName(std::string userFullName) {
    std::string lastName;

    for (int i = userFullName.find(" ") + 1; i < userFullName.length(); i++) {
        lastName += userFullName[i];
    }

    return lastName;
}