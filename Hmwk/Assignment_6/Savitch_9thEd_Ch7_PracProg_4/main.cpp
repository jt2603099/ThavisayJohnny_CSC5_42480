/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 *
 * Created on May 24, 2018, 1:25 AM
 */

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

string lookupName(string target, string name[], string phone[], int count);
//Pre-condition: array names & phoneNumbers are provided and initiated
//targetName will be retrieved by user and 
//count is the amount of elements in the phone book
//Post-condition: The proper number will be outputted according to targetName

int main(int argc, char** argv) {
    //Declare variables
    string names[] = {"Michael Myers", "Ash Williams", "Jack Torrance", "Freddy Krueger"};
    string phoneNumbers[] = {"333-8000", "333-2323", "333-6150", "339-7970"};
    string targetName, targetPhone;
    char c;
    
    do  {
        
        cout << "Enter a name to find the corresponding phone number." <<endl;
        cin >> targetName;
        getline(cin, targetName);
        
        targetPhone = lookupName(targetName, names, phoneNumbers, 4);
        
        if (targetPhone.length() > 0)
            cout << "The number is: " << targetPhone <<endl;
        else
            cout << "Name not found. " <<endl;
        cout << "Look up another name? (y/n)" <<endl;
        cin >> c;
        cin.ignore();
    } while (c == 'y' || c == 'Y');
    
    cout << "Goodbye." <<endl;
    
    return 0;
}

string lookupName(string target, string name[], string phone[], int count) {
    string number("");
    
    for (int i=0; i<count; i++)  {
        if (target == name[i])
            number = phone[i];
    }
    return number;
}