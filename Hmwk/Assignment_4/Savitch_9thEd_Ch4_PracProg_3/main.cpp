/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 * Find out the value of your stock
 * Created on April 7, 2018, 5:46 PM
 */

#include <iostream>
#include <cstdlib>

//Function Declaration of sPrice
int sPrice(int stocks, int whole, int numer, int denom);
//Computes value of a user's stock. 1st parameter is total number of stocks.
//Whole = Whole-Dollar price of stock.
//Numer = numerator, and denom = denominator for the fraction portion.

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int stock, x, y, z, stockval;//stock=total shares of stock, x=whole, y=numerator, z=denominator, stockval = stock value
    char ans('y');//Set ans to y to start the loop
    
    do {
        //Start of program
        //Gather inputs
        cout << "Enter the total of owned shares." <<endl;
        cin >> stock;
        cout << "Enter the whole-dollar portion of the price." <<endl;
        cin >> x;
        cout << "Enter the numerator for the fraction portion of the price." <<endl;
        cin >> y;
        cout << "Enter the denominator for the fraction portion of the price." <<endl;
        cin >> z;
        
        //Function call of sPrice
        stockval = sPrice(stock, x, y, z);
        
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(3);
        //Display outputs from inputs
        cout << "The value of your stock is " << stockval << "." <<endl;
        
        //Output to continue loop?
        cout << "Try another?: ";
        cin >> ans;   
    } while (ans == 'y' || ans == 'Y');
    //End of loop
    
    //Function Closing Output
    cout << "Goodbye." <<endl;
    
    return 0;
}

//Function definition for sPrice
int sPrice(int stock, int whole, int numer, int denom)
{
    double fraction;//fraction to compute stock
    double realval;//Real value of the stock
    fraction = whole + (static_cast<double>(numer)/denom);
    realval = stock * fraction;
    return realval;
}

