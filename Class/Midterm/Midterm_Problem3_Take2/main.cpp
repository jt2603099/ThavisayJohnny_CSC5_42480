/* 
 * File:   main.cpp
 * Author: Johnny Thavisay
 * 4/19/2018 9:21 PM
 * Purpose:  Convert a number to English check amount
 */

//System Libraries Here
#include <iostream>
#include <string>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned short number;
    int digit1,
        digit2,
        digit3,
        digit4;
    //Input or initialize values Here
    cout<<"Input an integer [1-3000] convert to an English Check value."<<endl;
    cin>>number;
    
    //Calculate the 1000's, 100's, 10's and 1's
    digit1 = number / 1000;
    digit2 = (number / 100) % 10;
    digit3 = (number % 100);
    digit4 = number % 10;
         
    //Output the check value
    cout<<"and no/100's Dollars"<<endl;
    
    //Exit
    return 0;
}
