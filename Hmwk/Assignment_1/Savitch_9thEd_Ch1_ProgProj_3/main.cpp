/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 *
 * Created on February 24, 2018, 10:39 PM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    double  NCKL, DME, QRTER, totalCoins, number_of_nickels, number_of_dimes, number_of_quarters, totalNCKL, totalDME, totalQRTER;
    
    //Initialize variables
    NCKL=5;
    DME=10;
    QRTER=25;

    //Display Outputs to Monitor
    cout << "Let's find out the value of all your nickels, dimes, and quarters."<<endl;
    
    cout << "Enter the number of nickels you have:"<<endl;
    cin >> number_of_nickels;
    totalNCKL=NCKL * number_of_nickels;//Calculates total amount of nickels
    
    cout << "Now enter the number of dimes:"<<endl;
    cin >> number_of_dimes;
    totalDME=DME * number_of_dimes;//Calculates total amount of dimes
    
    cout << "Now enter the number of quarters:"<<endl;
    cin >> number_of_quarters;
    totalQRTER=QRTER * number_of_quarters;//Calculates total amount of quarters
    
    totalCoins=totalNCKL + totalDME + totalQRTER;//Calculates total amount of coins from the other three expressions
    cout << "The value of coins you entered is: " << totalCoins << " cents." << endl; 

    return 0;
}

