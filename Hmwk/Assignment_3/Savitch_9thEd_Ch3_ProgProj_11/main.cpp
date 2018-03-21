/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 *
 * Created on March 20, 2018, 3:51 PM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int number, HUNDREDS, TENS, ONES, lowTEMP, highTEMP;
    bool number_147, valid;
    
    //Intro to program
    do {
        cout << "Enter the desired temperature for the oven between 0 and 999." <<endl;
        cin >> number; 
    } while (valid = false);
    if (number >= 0 && number <= 999) {
        valid = true;
        }   else
        valid = false;
    
    ONES = number % 10;
    TENS = (number / 10) % 10;
    HUNDREDS = number / 100;
    //Find if any of the digits equals to 1,4, and(or) 7 from the inputted number
    lowTEMP = number;
        if ((ONES == 1) || (ONES == 4) || (ONES == 7) || (TENS == 1) || (TENS == 4) || (TENS == 7) || (HUNDREDS == 1) || (HUNDREDS == 4) || (HUNDREDS == 7)) {
        number_147 = true;
    }   else
        number_147 = false;
        while (number_147) {
            lowTEMP--;
                if ((ONES == 1) || (ONES == 4) || (ONES == 7) || (TENS == 1) || (TENS == 4) || (TENS == 7) || (HUNDREDS == 1) || (HUNDREDS == 4) || (HUNDREDS == 7)) {
                number_147 = true;
                ONES = lowTEMP % 10 + 1;
                TENS = (lowTEMP / 10) % 10;
                HUNDREDS = lowTEMP / 100;
                } else
            number_147 = false;
    }
    
    highTEMP = number;
    ONES = highTEMP % 10;
    TENS = (highTEMP / 10) % 10;
    HUNDREDS = highTEMP / 100;
        if ((ONES == 1) || (ONES == 4) || (ONES == 7) || (TENS == 1) || (TENS == 4) || (TENS == 7) || (HUNDREDS == 1) || (HUNDREDS == 4) || (HUNDREDS == 7)) {
        number_147 = true;
        }   else 
        number_147 = false;
        while (number_147) {
            highTEMP++;
                if ((ONES == 1) || (ONES == 4) || (ONES == 7) || (TENS == 1) || (TENS == 4) || (TENS == 7) || (HUNDREDS == 1) || (HUNDREDS == 4) || (HUNDREDS == 7)) {
                number_147 = true;
                ONES = highTEMP % 10 - 1;
                TENS = (highTEMP / 10) % 10;
                HUNDREDS = highTEMP / 100;
                } else
            number_147 = false;
    }
            cout << "The nearest low temperature is " << lowTEMP <<endl;
            cout << "The nearest high temperature is " << highTEMP <<endl;
            return 0;
}


    

