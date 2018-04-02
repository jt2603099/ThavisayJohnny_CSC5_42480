/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 * Calculate miles a car will travel on x liters of gasoline
 * Created on March 28, 2018, 7:42 PM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

//Function declaration
int LtoG(int liters);
//Returns the amount of gas in gallons after being converted from liters
//Liters is the amount entered at the start of the program

int main(int argc, char** argv) {
    int miles, gallons, liters, mpg;
    char ans('y');
    
    //Start loop
    do {
        cout << "Enter the liters of gas used during the trip." <<endl;
        cin >> liters;
        
        cout << "Enter the miles traveled during the trip." <<endl;
        cin >> miles;
        
        //Function Call for LtoG(Liters to Gallons)
        gallons = LtoG(liters);
        //Compute miles per gallon
        mpg = miles/gallons;
        
        //Display output from inputs
        cout << "Your car gets " << mpg << " miles/gallon when using" << endl <<
                liters << " liters of gas going for " << miles << " miles." <<endl;
    
        //Output to continue loop?
        cout << "Try another?: ";
        cin >> ans;      
        
    } while (ans == 'y' || ans == 'Y');
    //End of loop
    
    //Function Closing Output
    cout << "Goodbye." <<endl;
    
    return 0;
}

//Function Definition for LtoG
int LtoG(int liters)
{
    const double LperG = 0.264179; //Global constant for liters per gallon
    return (liters * LperG);
}

