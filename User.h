//
// Created by tanzeem on 004815 AUG F 2018.
//

#ifndef USER_H
#define USER_H

#include <string>
#include <iostream>
#include <fstream>
#include <windows.h>
#include <iomanip>
#include "Log.h"

using namespace std;

class User {
public:
    void ListPcAll(); // List all Pc
    void ListPcByC(); // List Pc by category
    void ListPcByN(); // List Pc by company
    void PcInfor(); // See more information of one Pc
    void PrintUserArray(); // Output user information to User.txt
    void PrintPcArray(); // Output Pc information to Pc.txt
    void PrintCash(); // Output cash information to Cash.txt
    int IsAllDigit(const string& str); // Check if str is all made of digital number

    // Get different information of User
    string GetUsername() { return username; };
    string GetPassword() { return password; };
    int    GetStatus() { return status; };

    // Change different information of User
    void SetUsername(string name) { username = name; };
    void SetPassword(string pwd) { password = pwd; };
    void SetStatus(int number) { status = number; };

    // User choose to change his or her password
    void ChangePsw();

    // Virtual function : this function will be defined in each of its inheriting class
    virtual void Interface(string username) {};
private:
    int status; // Status : 3 for Customer, 2 for Staff, 1 for Administartor, 0 for Not exist
    string username;
    string password;
};

#endif