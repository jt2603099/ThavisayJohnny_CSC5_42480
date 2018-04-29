/* 
 * File:   main.cpp
 * Author: Johnny Thavisay
 * 4/19/2018 6:1 PM
 * Purpose:  ISP charges
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <ctype.h>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
double total(char plan, int hours); 
//Calculates the basic charge for any of the 3 packages
//1st value is the package to input, and 2nd value is the amount of hours used for the month

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char package;
    unsigned short hours;
    double yourpay, packA, packB, packC, savingA, savingB, savingC;
    
    //Input or initialize values Here
    cout<<"ISP charges for service delivered."<<endl;
    cout<<"Input package A,B,C then hours used for the month"<<endl;
    cin>>package>>hours;
    package = toupper(package); //Convert package char to uppercase
    
    //Basic Charges
    yourpay = total(package, hours);
    packA = total('A', hours);
    packB = total('B', hours);
    packC = total('C', hours);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    //Output the Charge
    if ((yourpay <= packA) && (yourpay <= packB) && (yourpay <=packC))
    cout << "$" << yourpay << " " << package << " $0.00" <<endl;

    //Output the cheapest package and the savings
    savingA = yourpay - packA;
    savingB = yourpay - packB;
    savingC = yourpay - packC;
    if ((packA < yourpay) && (packA < packB) && (packA < packC) /*&& (savingA > savingB) && (savingA > savingC)*/) {
        cout << "$" << yourpay << " A " << "$" << savingA <<endl;
    }
    if ((packB < yourpay) && (packB < packC) && (packB < packA) /*&& (savingB > savingA) && (savingB > savingC)*/) {
        cout << "$" << yourpay << " B " << "$" << savingB <<endl;
    }
    if ((packC < yourpay) && (packC < packA) && (packC < packB) /*&& (savingC > savingB) && (savingC > savingA)*/) {
        cout << "$" << yourpay << " C " << "$" << savingC <<endl;
    }
    
    //Exit
    return 0;
}
double total(char plan, int hours) {
    double flat;
    switch (plan) {
            case 'A':
            flat = 16.99;
                if (hours > 10 && hours <= 20)
                    flat = (flat + ((hours - 10) * 0.95));
                if (hours > 20)
                    flat = ((flat + 9.50) + ((hours - 20) * 0.85));
            break;
        case 'B':
            flat = 26.99;
                if (hours > 20 && hours <= 30)
                    flat = (flat + ((hours - 10) * 0.74));
                if (hours > 30)
                    flat = ((flat + 7.40) + ((hours - 30) * 0.64));
            break;
        case 'C':
            flat = 36.99;
            break;
    } 
    return flat;
}
