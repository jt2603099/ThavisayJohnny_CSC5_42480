/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 * Calculate fuel efficiency via miles per gallon between two cars
 * Created on April 1, 2018, 10:19 PM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

//Function declaration
int car(int liters, int miles);
//Returns the mpg for the car. First parameter is the liters, then second is the miles.
//Liters is converted to gallons, and then divided by miles.

int main(int argc, char** argv) {
    int miles, miles2, gallons, liters, liters2, mpg, mpg2;
    char ans('y');
    
    //Start loop
    do {
        //First car
        cout << "Enter the liters of gas for the first car." <<endl;
        cin >> liters;
        
        cout << "Enter the miles traveled for the first car." <<endl;
        cin >> miles;
        
        //Second car
        cout << "Enter the liters of gas for the second car." <<endl;
        cin >> liters2;
        
        cout << "Enter the miles traveled for the second car." <<endl;
        cin >> miles2;
        
        //Function Call for car to get mpg
        mpg = car(liters, miles);//First car
        mpg2 = car(liters2, miles2);//Second car
        
        //Display output from inputs
        cout << "The first car gets " << mpg << " miles/gallon while using " << liters << " liters of gas going for " << miles << " miles" << endl <<
                " and the second car gets " << mpg2 << " miles/gallon while using " << liters2 << " liters of gas going for " << miles2 << " miles." <<endl;
            
        //Function to determine what output for the more fuel efficient car
            if (mpg < mpg2)
                cout << "Car 2 is more fuel efficient." <<endl;
            else if (mpg > mpg2)
                cout << "Car 1 is more fuel efficient." <<endl;
            else if (mpg = mpg2)
                cout << "Both cars have the same fuel efficiency." <<endl;
    
        //Output to continue loop?
        cout << "Try another?: ";
        cin >> ans;      
        
    } while (ans == 'y' || ans == 'Y');
    //End of loop
    
    //Function Closing Output
    cout << "Goodbye." <<endl;
    
    return 0;
}

//Function Definition for car
int car(int liters, int miles)
{
    int gallons;
    const double LperG = 0.264179; //Global constant for liters per gallon
    gallons = (liters * LperG);
    return (gallons/miles);
}
