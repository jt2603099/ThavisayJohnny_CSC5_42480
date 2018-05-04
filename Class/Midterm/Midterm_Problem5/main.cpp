/* 
 * File:   main.cpp
 * Author: Johnny Thavisay
 * Created on April 28, 2018, 3:33 PM
 * Purpose:  Overtime
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float payRate;
    unsigned short hrsWrkd;
    float gross;
    
    //Input or initialize values Here
    cout<<"Paycheck Calculation."<<endl;
    cout<<"Input payRate in $'s/hour and hours worked"<<endl;
    cin>>payRate>>hrsWrkd;
    
    //Calculate Paycheck
    cout.setf(ios::showpoint);
    cout.setf(ios::fixed);
    cout.precision(2);
    
    if (hrsWrkd <= 20) {
        gross = payRate * hrsWrkd;
    }
    if (hrsWrkd > 20 && hrsWrkd <= 40) {
        gross = payRate * (20);//Calculates first 20 hours
        gross = gross + ((hrsWrkd - 20) * (payRate * 1.5));//Adds first 20 hours with excess of 20hrs but less than 40
    }
    if (hrsWrkd > 40) {
        gross = payRate * (20);
        gross = gross + (20 * (payRate * 1.5));//Adds first 20 hours with next 20hrs as OT
        gross = gross + ((hrsWrkd - 40) * (payRate * 2)); //Adds the final double OT amount
    }

    
    //Output the check
    cout << "$" << gross <<endl;
    
    //Exit
    return 0;
}