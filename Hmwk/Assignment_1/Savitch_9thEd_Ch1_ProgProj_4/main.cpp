/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 *
 * Created on March 4, 2018, 7:42 PM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    // Declare variables
    int DISTANCE, ACCELERATION, TIME;
    
    // Initialize variables
    ACCELERATION=32;//Because it's 32 feet per second due to gravity
    
    //        
    // Display outputs to Monitor
    //
    cout << "Let's find out how far this object will drop in freefall."<<endl;
    
    cout << "Enter the time in seconds:"<<endl;
    cin >> TIME;
    
    //Equation to find the distance
    DISTANCE=(ACCELERATION * (TIME * TIME)) / 2;//Time is multiplied by itself to be considered raising it to the second power
    
    //Display the end result
    cout << "The object will drop for " << DISTANCE << " seconds.";
    

    return 0;
}

