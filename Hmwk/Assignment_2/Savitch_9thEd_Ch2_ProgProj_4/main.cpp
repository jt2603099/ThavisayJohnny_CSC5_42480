/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 * Consumer Loan
 * Created on March 11, 2018, 5:04 PM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    char ans;
    double facevalue, interest_rate, loan_duration, user_facevalue, time, monthly_payment;
    double const year(12.0), percent_convert(100.0);
    
    do {  
    cout << "Find the face value amount needed for a loan in accordance to the number of months." <<endl;
    cout << "Enter the loan amount you would like to receive: ";
    cin >> user_facevalue;
    cout << "Enter the interest rate of the loan: ";
    cin >> interest_rate;
    cout << "Enter the duration of the loan in months: ";
    cin >> loan_duration;
    
    //Formulas
    interest_rate = interest_rate / percent_convert;
    time = loan_duration / year;
    facevalue = user_facevalue / (1 - (interest_rate * time));
    monthly_payment = facevalue / loan_duration;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    cout << "The amount of money you need is $" <<  facevalue << endl;
    cout << "Your monthly payments will be $" << monthly_payment << endl;
    
    cout << "Do you wish to try again?" <<endl;
    cout << "Type y for yes, n for no." <<endl;
    cin >> ans;
    } while (ans == 'y' || ans == 'Y');

    cout << "Have a nice day." <<endl;
    
    return 0;
}

