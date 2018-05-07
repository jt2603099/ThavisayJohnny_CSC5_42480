/* 
 * File:   main.cpp
 * Author: Johnny Thavisay
 * Created on April 29, 2018, 9:07 PM
 * Purpose:  Histogram
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int digit1, digit2, digit3, digit4;
    
    //Input or initialize values Here
    cout<<"Create a histogram chart."<<endl;
    cout<<"Input 4 digits as characters."<<endl;
    cin >> digit1 >> digit2 >> digit3 >> digit4;

    
    //Histogram Here
    cout << digit4 << " ";
    if (digit4 > 0)
        for (int i = digit4; i > 0; i--) {
            cout << "*";
        } else {
            cout << " ";
        } 

    cout <<endl;
    cout << digit3 << " ";
    if (digit3 > 0)
        for (int i = digit3; i > 0; i--) {
            cout << "*";
        } else {
            cout << " ";
        }
    
    cout <<endl;
    cout << digit2 << " ";
    if (digit2 > 0)
        for (int i = digit2; i > 0; i--) {
            cout << "*";
        } else {
            cout << " ";
        }
    
    cout << endl;
    cout << digit1 << " ";
    if (digit1 > 0)
        for (int i = digit1; i > 0; i--) {
            cout << "*";
        } else {
        cout << " ";
        }
        
    //Exit
    return 0;
}