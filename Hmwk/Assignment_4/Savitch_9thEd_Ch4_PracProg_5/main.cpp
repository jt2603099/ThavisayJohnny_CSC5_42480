/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 * Rate of Inflation in upcoming 2 years
 * Created on April 7, 2018, 7:32 PM
 */

#include <iostream>
#include <cstdlib>

//Function declaration
double rate(int curr, int prev);
//Gauge the rate of inflation for the past year
//First parament is the current value, prev is the previous year value

//Function declaration
double yrate(int price, double rate);
//Find price of items in upcoming consecutive two years
//First parameter is the current price of the year
//Second parameter is the inflation rate of the item in terms of %

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int current, previous;
    double inflation, year1, year2;
    char ans('y');
    
    do {
        cout << "Calculate the rate of inflation of an item for the past year." <<endl;
        cout << "Enter the price of the item currently." <<endl;
        cin >> current;
        cout << "Enter the price in previous year." <<endl;
        cin >> previous;
        int price = current;//Set price = current to compute into second function without inputing again
        
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(1);
        
        //Function call of rate
        inflation = rate(current, previous);
        
        cout << "The inflation rate for the item is %" << inflation << "." <<endl;
        
        //Function call of yrate
        year1 = yrate(price, inflation);
        year2 = yrate(year1, inflation);
        
        cout.precision(2);//Show two digits after decimal
        //Output inflation price for next two years
        cout << "The estimated price of the item in one year is: $" << year1 << "." <<endl;
        cout << "The estimated price of the item in two years is:  $" << year2 << "." <<endl;
        
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

//Function definition for yrate
double yrate(int price, double rate)
{
    double price1, newper;//Value for item in 1 year; newper=percent divided by 100
    newper = rate / 100.0;
    price1 = price * newper + price;
    return price1;
}
