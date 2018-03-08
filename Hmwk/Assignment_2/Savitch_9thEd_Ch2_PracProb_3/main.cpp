/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 *
 * Created on March 7, 2018, 11:05 PM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    double mph_speed, mph_minutes, mph_minute, mph_seconds;
    
    cout << "Calculate the time in minutes and seconds from the entered mph."<<endl;
    cout << "Please enter the speed in mph: ";
    cin >> mph_speed;
    
    mph_minutes = 60 / mph_speed;
    mph_minute = mph_minutes;
    mph_seconds = ((mph_minutes - (int)mph_minutes) * 60);
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    cout << "Your speed is " << (int)mph_minutes << " minutes and " << mph_seconds << " seconds per mile.";

    return 0;
}

