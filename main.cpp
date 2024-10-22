// Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "getLastName.h"
#include "getFirstName.h"
using namespace std;


int main() {
    string userFullName;

    cout << "Hello! what should I call you? -> ";
    getline(cin, userFullName);

    cout << "So your first name is " << getFirstName(userFullName) << "." << endl;

    cout << "So your last name is " << getLastName(userFullName) << ". Nice name!" << endl;

    return 0;

}
