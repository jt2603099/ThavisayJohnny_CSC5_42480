/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 * Compute the interest due, total amount due, and the minimum payment for a revolving credit account.
 * Created on March 18, 2018, 1:15 AM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    double balanceAccount, balance, minimumPAY, interest(0.015), interestEXTRA(0.01);
    char ans = 'y';
    
    cout << "This program will compute the interest due, total amount due, and the minimum payment for a revolving credit account." <<endl;
    while (ans == 'y' || ans == 'Y') {
    cout << "Enter your current account balance." <<endl;
    cin >> balanceAccount;
    
        cout.setf(ios::showpoint);
        cout.setf(ios::fixed);
        cout.precision(2);
    if (balanceAccount <= 1000) 
    {
        balance = (balanceAccount * interest) + balanceAccount;
        minimumPAY = balance / 10; //Divide by 10 to get 10%
        if (minimumPAY < 10.00)
            minimumPAY = 10.00;
        cout << "$" << balanceAccount << " balance is $" << balance << " total and $" << minimumPAY << " minimum payment." <<endl;
    } 
    else if (balanceAccount > 1000)
    {
        balance = ((balanceAccount - 1000) * interestEXTRA) + (1000 * interest) + balanceAccount;
        minimumPAY = balance / 10; //Divide by 10 to get 10%
        if (minimumPAY < 10.00)
            minimumPAY = 10.00;
        cout << "$" << balanceAccount << " balance is $" << balance << " total and $" << minimumPAY << " minimum payment." <<endl;
        
    } 
    cout << "Continue? Enter (y/n): ";
    cin >> ans;
    }
    cout << "Goodbye." <<endl;
    return 0;
}

