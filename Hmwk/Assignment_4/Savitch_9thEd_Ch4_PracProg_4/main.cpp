/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 * Rate of Inflation of 1 Year
 * Created on April 7, 2018, 6:34 PM
 */

#include <iostream>
#include <cstdlib>

//Function declaration
double rate(int curr, int prev);
//Gauge the rate of inflation for the past year
//First parament is the current value, prev is the previous year value

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int current, previous;
    double inflation;
    char ans('y');
    
    do {
        cout << "Calculate the rate of inflation of an item for the past year." <<endl;
        cout << "Enter the price of the item currently." <<endl;
        cin >> current;
        cout << "Enter the price in previous year." <<endl;
        cin >> previous;
        
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(1);
        
        //Function call of rate
        inflation = rate(current, previous);
        
        cout << "The inflation rate for the item is %" << inflation << "." <<endl;
        
        //Continue loop?
        cout << "Try again?" <<endl;
        cin >> ans;
        
    } while (ans == 'y' || ans == 'Y');

        cout << "Goodbye." <<endl;
    
    return 0;
}

//Function definition for rate
double rate(int curr, int prev)
{
    double Arate;//Actual inflation rate
    Arate = (static_cast<double>(curr)-prev)/(prev) * 100;
    return Arate;
}

