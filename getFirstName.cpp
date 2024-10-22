#include <iostream>

std::string getFirstName(std::string userFullName) {
    std::string firstName;

    for (int i = 0; i < userFullName.find(" "); i++) {
        firstName += userFullName[i];
    }

    return firstName;
}