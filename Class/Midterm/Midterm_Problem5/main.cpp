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
    if (hrsWrkd > 20 && hrsWrkd <= 39) {
        gross = payRate * (20);//Calculates first 20 hours
        gross = (gross + ((hrsWrkd - 20) * (payRate * 1.5)));//Adds first two hours with excess of 20hrs but less than 39
        
    }

    
    //Output the check
    
    
    //Exit
    return 0;
}