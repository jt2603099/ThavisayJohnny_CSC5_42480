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
    if (number >= 1000) {
    digit1 = number / 1000;
    digit2 = (number / 100) % 10;
    digit3 = (number % 100);
    digit4 = number % 10;
    }
    
    if (number >= 100 && number < 1000) {
    digit2 = (number / 100);
    digit3 = (number % 100);
    digit4 = number % 10;
    }
    
    if (number >= 10 && number < 100) {
        digit3 = number;
    digit4 = number % 10;
    }
    
    if (number >= 1 && number < 10) {
    digit4 = number;
    }
    
    switch(digit1){
        case 1:
            cout << "One Thousand ";
            break;
        case 2:
            cout << "Two Thousand ";
            break;
        case 3:
            cout << "Three Thousand ";
            break;
        default:
            break;
    }
    
    switch(digit2){
        case 1:
            cout << "One Hundred ";
            break;
        case 2:
            cout << "Two Hundred ";
            break;
        case 3:
            cout << "Three Hundred ";
            break;
        case 4:
            cout << "Four Hundred ";
            break;
        case 5:
            cout << "Five Hundred ";
            break;
        case 6:
            cout << "Six Hundred ";
            break;
        case 7:
            cout << "Seven Hundred ";
            break;
        case 8:
            cout << "Eight Hundred ";
            break;
        case 9:
            cout << "Nine Hundred ";
            break;
        default:
            break;   
    }
    if (digit3 >= 11 && digit3 <= 19) {
        switch(digit3){
            case 11:
                cout << "Eleven ";
                break;
            case 12:
                cout << "Twelve ";
                break;
            case 13:
                cout << "Thirteen ";
                break;
            case 14:
                cout << "Fourteen ";
                break;
            case 15:
                cout << "Fifteen ";
                break;
            case 16:
                cout << "Sixteen ";
                break;
            case 17:
                cout << "Seventeen ";
                break;
            case 18:
                cout << "Eighteen ";
                break;
            case 19:
                cout << "Nineteen ";
                break;
            default:
                break;   
        }
 } else {
     digit3 = digit3 / 10;
     switch(digit3) {
         case 2:
             cout << "Twenty ";
             break;
         case 3:
             cout << "Thirty ";
             break;
         case 4:
             cout << "Forty ";
             break;
         case 5:
             cout << "Fifty ";
             break;
         case 6:
             cout << "Sixty ";
             break;
         case 7:
             cout << "Seventy ";
             break;
         case 8:
             cout << "Eighty ";
             break;
         case 9:
             cout << "Ninety ";
             break;
         default:
             break;
     }
 }
    switch(digit4){
        case 1:
            cout << "One ";
            break;
        case 2:
            cout << "Two ";
            break;
        case 3:
            cout << "Three ";
            break;
        case 4:
            cout << "Four ";
            break;
        case 5:
            cout << "Five ";
            break;
        case 6:
            cout << "Six ";
            break;
        case 7:
            cout << "Seven ";
            break;
        case 8:
            cout << "Eight ";
            break;
        case 9:
            cout << "Nine ";
            break;
        default:
            break;
    }
         
    //Output the check value
    cout<<"and no/100's Dollars"<<endl;
    
    //Exit
    return 0;
}
