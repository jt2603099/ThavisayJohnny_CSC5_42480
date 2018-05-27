/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 *
 * Created on May 26, 2018, 11:38 PM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int SIZE(10);

bool WHOWINS(int array[], int size, int players);

int main(int argc, char** argv) {
    //Declare variables
    int winNums[10] = {13579, 26791, 26792, 33445, 55555,
                      62483, 77777, 79422, 85647, 93121};
    //Player's number
    int userNum;
    
    cout << "Enter your number: ";
    cin >> userNum;
    
    bool result = WHOWINS(winNums, SIZE, userNum);
    
    //Verify if the player's number is true or not and output correct result
        if (result)
            cout << "One of the winning numbers is yours." <<endl;
        else
            cout << "your number is not a winning number." <<endl;
    
     return 0;
}

bool WHOWINS(int array[], int size, int players) {
    //Declare variables
    bool found = false;
    int index(0);
    
    while (index < size & !found) {
        if(array[index]==players) {
            found = true;
            index++;
        }
    }
    return found;
}