/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 * Calculate long distance calls
 * Created on March 20, 2018, 10:19 AM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    char ans('y');
    string day;
    int MINUTES, startTime;
    double cost;
    const double DAY(0.40), NIGHT(0.25), WEEKEND(0.15);
    
    //Introduction greeting to the program
    cout << "Find out how much your long distance call costs." <<endl;
   
    
    while (ans == 'y' || ans == 'Y') {
    
    cout << "First enter the first two letters of the day the call started (Example: Tu for Tuesday)" <<endl;
    cin >> day;
    cout << "Enter the time the call started in 24-hour notation without the colon." <<endl;
    cout << "Example: 600 for 6a.m. in the morning" <<endl;
    cin >> startTime;
    cout << "Enter the length of the call in minutes." <<endl;
    cin >> MINUTES;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    //Find cost of time from Monday - Friday from 8a.m to 6p.m (0800-1800)
        if ((day == "Mo" || day == "MO" || day == "mo" || day == "Tu" || day == "TU" || day == "tu" || day == "We" || day == "WE" || day == "we" || day == "Th" || day == "TH" || day == "th" || day == "Fr" || day == "FR" || day == "fr") && (startTime >= 800 && startTime <= 1800)) {
            cost = MINUTES * DAY;
            cout << "The cost of your " << MINUTES << " minutes call on " << day << " is $" << cost << endl;
        } else {
            cost = MINUTES * NIGHT;
            cout << "The cost of your " << MINUTES << " minutes call on " << day << " is $" << cost << endl;
            }   if (day == "Sa" || day == "SA" || day == "sa" || day == "Su" || day == "SU" || day == "su") {
                cost = MINUTES * WEEKEND;
                }
    cout << "Try another call? (y/n): "; 
    cin >> ans;
    
}   
    cout << "Goodbye." <<endl;
    return 0;
}

