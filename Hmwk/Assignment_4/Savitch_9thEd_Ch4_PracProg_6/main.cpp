    /*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 * Compute interest on a credit card account
 * Created on April 7, 2018, 8:33 PM
 */

#include <iostream>
#include <cstdlib>
#include <math.h> 

//Function declaration of interest
 float interest(float rate, float initial, int months);
//Computes interest on a credit card account. 1st parameter = interest rate.
//Initial = Initial account balance, last parameter the number of months

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    float rate, initial;
    int months;
    char ans('Y');
    
    do {
        cout << "Enter your interest rate in terms of an integer(0-100). ";
        cin >> rate;
        cout << "Enter your current account balance." <<endl;
        cin >> initial;
        cout << "How many months will you take to pay?" <<endl;
        cin >> months;
        
        //Function call interest
        float pay = interest(rate, initial, months);
        
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
        cout << "Total owed is $" << pay <<endl;
        cout << "Interest is $" << pay-initial <<endl;//subtract initial starting from total pay for the interest
        
        //Continue the loop?
        cout << "Try again?" <<endl;
        cin >> ans;
    } while (ans == 'y' || ans == 'Y');
    
    return 0;
}

//Function definition for interest
float interest(float rate, float initial, int months)
{
    float total, newrate;//total = total have to pay, newrate converted from percent to a decimal
    newrate = (rate/12) / 100;
    total = initial * pow(1 + newrate, months);
    return total;
}
