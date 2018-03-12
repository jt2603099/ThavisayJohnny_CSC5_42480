/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 *
 * Created on March 11, 2018, 9:47 PM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    char ans;
    int capacity, more_capacity, less_capacity, max_capacity;
    
    do {
    cout << "Find out if your meeting room is exceeding fire law regulations capacity." <<endl;
    cout << "Enter the current capacity in the room: ";
    cin >> capacity;
    cout << "Enter the maximum capacity of the room: ";
    cin >> max_capacity;
    
    if (capacity <= max_capacity) {
        more_capacity = max_capacity - capacity;
        cout << "It is okay to hold the meeting and you can fit " << more_capacity << " more people." <<endl;
    } else {
        less_capacity = capacity - max_capacity;
        cout << "The current capacity exceeds fire law regulations and" <<endl; 
        cout << "you must remove " << less_capacity << " people from the meeting room."<<endl;
        }
    cout << "Run the program again?" <<endl;
    cout << "Enter 'y' for yes, 'n' for no." <<endl;
    cin >> ans;
    } while (ans == 'y' || ans == 'Y');
    return 0;
}

