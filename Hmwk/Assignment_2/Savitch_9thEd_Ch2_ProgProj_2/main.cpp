/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 * Retroactive Pay 6 Month Calculator
 * Created on March 11, 2018, 3:57 PM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    char ans;
    double annual_slry, new_annual_slry, retroactive_pay, new_monthly_slry;
    double const pay_increase(0.076);
    
    do {
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);    
    cout << "Calculate 7.5% increase of the inputed annual salary for the next 6 months"<<endl;
    cout << "Enter your annual salary: "<<endl;
    cin >> annual_slry;
    
    //Inputs to outputs
    retroactive_pay = (annual_slry * 1.076) / 2;
    new_annual_slry = annual_slry + retroactive_pay;
    new_monthly_slry = new_annual_slry / 12 / 2; //Divide by 12 to get 12 month salary, then divide by 2 to get monthly salary
    
    //Output the results
    cout << "Your retroactive pay is $" << retroactive_pay <<endl;
    cout << "Your new annual salary is $" << new_annual_slry <<endl;
    cout << "Your new monthly salary is $" << new_monthly_slry << " for the next 6 months."<<endl;
    } while (ans == 'y' || ans == 'Y');

    return 0;
}

