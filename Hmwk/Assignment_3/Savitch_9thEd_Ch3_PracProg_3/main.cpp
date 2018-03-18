    /*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 * Astrology Program
 * Created on March 18, 2018, 12:27 PM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int month, day;
    char ans = 'y'; //Start the loop with  yes
    enum month { JAN = 1, FEB = 2, MAR = 3, APR =4, MAY = 5, JUN = 6, JUL = 7, AUG = 8, SEP = 9, OCT = 10, NOV = 11, DEC = 12};
    
    while (ans == 'y' || ans == 'Y') {
    cout << "Learn your horoscope sign and horoscope." <<endl;
    cout << "Please enter the month as the first THREE letters or its corresponding number. eg. JAN=1: " <<endl;
    cin >> month;
    cout << "Please enter the day: ";
    cin >> day;
    if ((month == MAR && day >= 21) || (month == APR && day <= 19))
    
    if (month )

    return 0;
}

