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
string thous(int thous);
string hundred(int hundred);
string tens(int tens);
string ones(int ones);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned short number;
    int digit1,
        digit2,
        digit3,
        digit4;
    //Input or initialize values Here
    do {
    cout<<"Input an integer [1-3000] convert to an English Check value."<<endl;
    cin>>number;
    } while (number < 1 || number > 3000);
    

    
    //Calculate the 1000's, 100's, 10's and 1's
    if (number >= 1000) {
    digit1 = number / 1000;
    }
    if (number >= 100) {
    digit2 = (number / 100) % 10;
    }
    if (number >= 10) {
    digit3 = (number % 100);
    }
    if (number >= 1) {
    digit4 = number % 10;
    }
         
    //Output the check value
    cout << thous(digit1) << hundred(digit2) << tens(digit3) << ones(digit4);
    cout<<"and no/100's Dollars"<<endl;
    
    //Exit
    return 0;
}
string thous(int thous) {
    if (thous == 1)
        return "One Thousand ";
    if (thous == 2)
        return "Two Thousand ";
    if (thous == 3)
        return "Three Thousand ";
    if (thous == 4)
        return "Four Thousand ";
    if (thous == 5)
        return "Five Thousand ";
    if (thous == 6)
        return "Six Thousand ";
    if (thous == 7)
        return "Seven Thousand ";
    if (thous == 8)
        return "Eight Thousand ";
    if (thous == 9)
        return "Nine Thousand ";
}
string hundred(int hundred) {
    if (hundred == 1)
        return "One Hundred ";
    if (hundred == 2)
        return "Two Hundred ";
    if (hundred == 3)
        return "Three Hundred ";
    if (hundred == 4)
        return "Four Hundred ";
    if (hundred == 5)
        return "Five Hundred ";
    if (hundred == 6)
        return "Six Hundred ";
    if (hundred == 7)
        return "Seven Hundred ";
    if (hundred == 8)
        return "Eight Hundred ";
    if (hundred == 9)
        return "Nine Hundred ";
}
string tens(int tens) {
    if (tens == 11)
        return "Eleven";
        if (tens == 12)
            return "Twelve";
            if (tens == 13)
                return "Thirteen";
                if (tens == 14)
                    return "Fourteen";
                    if (tens == 15)
                        return "Fifteen";
                        if (tens == 16)
                            return "Sixteen";
                            if (tens == 17)
                                return "Seventeen";
                                if (tens == 18)
                                    return "Eighteen";
                                    if (tens == 19)
                                        return "Nineteen";
    //If tens number is bigger than 19 just find the tens place digit
    if (tens > 19) {
        tens = tens / 10;
    if (tens == 2)
        return  "Twenty ";
    if (tens == 3)
        return "Thirty ";
    if (tens == 4)
        return "Forty ";
    if (tens == 5)
        return "Fifty ";
    if (tens == 6)
        return "Sixty ";
    if (tens == 7)
        return "Seventy ";
    if (tens == 8)
        return "Eighty ";
    if (tens == 9)
        return "Ninety ";
    }
}
string ones(int ones) {
    if (ones == 1)
        return "One ";
    if (ones == 2)
        return  "Two ";
    if (ones == 3)
        return "Three ";
    if (ones == 4)
        return "Four ";
    if (ones == 5)
        return "Five ";
    if (ones == 6)
        return "Six ";
    if (ones == 7)
        return "Seven ";
    if (ones == 8)
        return "Eight ";
    if (ones == 9)
        return "Nine ";                   
}