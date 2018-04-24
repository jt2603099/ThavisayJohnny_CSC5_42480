/* 
 * File:   main.cpp
 * Author: Johnny Thavisay
 * 4/19/2018 6:1 PM
 * Purpose:  ISP charges
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
double total(char plan, short hours); 
//Calculates the basic charge for any of the 3 packages
//1st value is the package to input, and 2nd value is the amount of hours used for the month

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char package;
    string letter;
    unsigned short hours;
    double yourpay, //your pay value
           valueA = total('A', hours), //Computes cost with package A
           valueB = total('B', hours), //Computes cost with package B
           valueC = total('C', hours); //Computes cost with package C
    
    //Input or initialize values Here
    cout<<"ISP charges for service delivered."<<endl;
    cout<<"Input package A,B,C then hours used for the month"<<endl; 
    cin>>package>>hours;
    letter = package;
    
    
    //Basic Charges
    

    //Output the Charge and
    cout.setf(ios::showpoint);
    cout.setf(ios::fixed);
    cout.precision(2);
    yourpay = total(package,hours);
    cout << "$" << yourpay << " " << letter << " $0.00" <<endl;
    
    //Output the cheapest package and the savings
    if (valueA < yourpay) {
        cout << "$" << yourpay << " A " << yourpay-valueA <<endl;
    }
    else if (valueB < yourpay) {
        cout << "$" << yourpay << " B " << yourpay-valueB <<endl;
    }
    else if (valueC < yourpay) {
        cout << "$" << yourpay << " C " << yourpay-valueC  <<endl;
    }

        
    //Exit
    return 0;
}
double total(char plan, short hours) {
    cout.setf(ios::showpoint);
    cout.setf(ios::fixed);
    cout.precision(2);
    double flat;
    switch (plan) {
        case 'A':
        case 'a':
            flat = 16.99;
                if (hours > 10 && hours < 20)
                    flat = (flat + ((20 - hours) * 0.94));
                if (hours > 20)
                    flat = ((flat + 9.50) + ((hours - 20) * 0.85));
            break;
        case 'B':
        case 'b':
            flat = 26.99;
                if (hours > 20 && hours < 30)
                    flat = (flat + ((30 - hours) * 0.74));
                if (hours > 30)
                    flat = ((flat + 7.4) + ((hours - 30) * 0.64));
            break;
        case 'C':
        case 'c':
            flat = 36.99;
            break;
    }
    return flat;
}