/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 *
 * Created on March 18, 2018, 5:11 PM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int month, day;
    char ans = 'y'; //Start the loop with  yes
    enum month {JAN = 1, FEB = 2, MAR = 3, APR =4, MAY = 5, JUN = 6, JUL = 7, AUG = 8, SEP = 9, OCT = 10, NOV = 11, DEC = 12};
    
    //Intro dialogue to the program
    cout << "Learn your horoscope sign and horoscope." <<endl;
    
    //Initiate beginning of the loop
    while (ans == 'y' || ans == 'Y') {
    
        cout << "Please enter the month as its number corresponding to the month. eg. JAN=1: " <<endl;
        cin >> month;
    //Checks if month input is valid
    if ((month < 1) || (month > 12)) {
        cout << "Invalid entry. Try again." <<endl;
        continue;
    }
        cout << "Please enter the day: ";
        cin >> day;
    
    //Checks if day input is valid
    if ((day < 1) || (day > 31)) {
        cout << "Invalid entry try again." <<endl;
        continue;
    }
    
    //Pasts both conditions and continues with the program
    if ((month == MAR && day >= 21) || (month == APR && day <= 19)) {
        cout << "Your horoscope sign is Aries." <<endl;
        cout << "Be the first in what you think you should do." <<endl;
        cout << "Aries is most comfortable with other Aries, Leo, and Sagittarius." <<endl;
            if ((day-2) <= 20)
                cout << "Your birthday is on a cusp and adjacent with Pisces." <<endl;
            else if ((day+2) >= 20) 
                cout << "Your birthday is on a cusp and adjacent with Taurus." <<endl;
    } else if ((month == APR && day >= 20) || (month == MAY && day <= 20)) {
        cout << "Your horoscope sign is Taurus." <<endl;
        cout << "An opportunity is to come for you." <<endl;
        cout << "Taurus is most comfortable with other Taurus, Virgo, and Capricorn." <<endl;
            if ((day-2) <= 19)
                cout << "Your birthday is on a cusp and adjacent with Aries." <<endl;
            else if ((day+2) >= 21) 
                cout << "Your birthday is on a cusp and adjacent with Gemini." <<endl;
    } else if ((month == MAY && day >= 21) || (month == JUN && day <= 21)) {
        cout << "Your horoscope sign is Gemini." <<endl;
        cout << "Yesterday was the past, today is the beginning." <<endl;
        cout << "Gemini is most comfortable with other Gemini, Libra, and Aquarius." <<endl;
            if ((day-2) <= 20)
                cout << "Your birthday is on a cusp and adjacent with Taurus." <<endl;
            else if ((day+2) >= 22) 
                cout << "Your birthday is on a cusp and adjacent with Cancer." <<endl;
    } else if ((month == JUN && day >= 22) || (month == JUL && day <= 22)) {
        cout << "Your horoscope sign is Cancer." <<endl;
        cout << "Motivation and perseverance will fuel your dreams." <<endl;
        cout << "Cancer is most comfortable with other Cancer, Scorpio, and Pisces." <<endl;
            if ((day-2) <= 21)
                cout << "Your birthday is on a cusp and adjacent with Gemini." <<endl;
            else if ((day+2) >= 23) 
                cout << "Your birthday is on a cusp and adjacent with Leo." <<endl;
    } else if ((month == JUL && day >= 23) || (month == AUG && day <= 22)) {
        cout << "Your horoscope sign is Leo." <<endl;
        cout << "Personality is inspiring, and others will look up to you." <<endl;
        cout << "Leo is most comfortable with other Leo, Aries, and Sagitarrius." <<endl;
            if ((day-2) <= 22)
                cout << "Your birthday is on a cusp and adjacent with Cancer." <<endl;
            else if ((day+2) >= 23) 
                cout << "Your birthday is on a cusp and adjacent with Virgo." <<endl;
    } else if ((month == AUG && day >= 23) || (month == SEP && day <= 22)) {
        cout << "Your horoscope sign is Virgo." <<endl;
        cout << "Vicious is your name, if you take the blame." <<endl;
        cout << "Virgo is most comfortable with other Virgo, Taurus, and Capricorn." <<endl;
            if ((day-2) <= 22)
                cout << "Your birthday is on a cusp and adjacent with Leo." <<endl;
            else if ((day+2) >= 23) 
                cout << "Your birthday is on a cusp and adjacent with Libra." <<endl;
     } else if ((month == SEP && day >= 23) || (month == OCT && day <= 22)) {
         cout << "Your horoscope sign is Libra." <<endl;
         cout << "The only person you should be better than is you yesterday." <<endl;
         cout << "Libra is most comfortable with other Libra, Gemini, and Aquarius." <<endl;
            if ((day-2) <= 22)
                cout << "Your birthday is on a cusp and adjacent with Virgo." <<endl;
            else if ((day+2) >= 23) 
                cout << "Your birthday is on a cusp and adjacent with Scorpio." <<endl;
     } else if ((month == OCT && day >= 23) || (month == NOV && day <= 21)) {
         cout << "Your horoscope sign is Scorpio." <<endl;
         cout << "Listen to your heart, strike when you feel it's right." <<endl;
         cout << "Scorpio is most comfortable with other Scorpio, Cancer, and Pisces." <<endl;
            if ((day-2) <= 22)
                cout << "Your birthday is on a cusp and adjacent with Libra." <<endl;
            else if ((day+2) >= 22) 
                cout << "Your birthday is on a cusp and adjacent with Sagittarius." <<endl;
     } else if ((month == NOV && day >= 22) || (month == DEC && day <= 21)) {
         cout << "Your horoscope sign is Sagitarrius." <<endl;
         cout << "Love all, trust a few, believe in yourself." <<endl;
         cout << "Sagitarrius is most important with other Sagitarrius, Aries, and Leo." <<endl;
            if ((day-2) <= 21)
                cout << "Your birthday is on a cusp and adjacent with Scorpio." <<endl;
            else if ((day+2) >= 22) 
                cout << "Your birthday is on a cusp and adjacent with Capricorn." <<endl;
     } else if ((month == DEC & day >= 22) || (month == JAN && day <= 19)) {
         cout << "Your horoscope sign is a Capricorn." <<endl;
         cout << "You are only improving if the path was hard to overcome." <<endl;
         cout << "Capricorn is most comfortable with other Capricorn, Taurus, and Virgo." <<endl;
            if ((day-2) <= 21)
                cout << "Your birthday is on a cusp and adjacent with Sagittarius." <<endl;
            else if ((day+2) >= 20) 
                cout << "Your birthday is on a cusp and adjacent with Aquarius." <<endl;
     } else if ((month == JAN & day >= 20) || (month == FEB && day <= 18)) {
         cout << "Your horoscope sign is an Aquarius." <<endl;
         cout << "You may not have many friends, because the few you do, should keep close." <<endl;
         cout << "Aquarius is most comfortable with other Aquarius, Gemini, and Libra." <<endl;
            if ((day-2) <= 19)
                cout << "Your birthday is on a cusp and adjacent with Capricorn." <<endl;
            else if ((day+2) >= 19) 
                cout << "Your birthday is on a cusp and adjacent with Aquarius." <<endl;
     } else if ((month == FEB & day >= 19) || (month == MAR && day <= 20)) {
         cout << "Your horoscope sign is a Pisces." <<endl;
         cout << "Saying no can be hard. Don't be." <<endl;
         cout << "Pisces is most comfortable with other Pisces, Cancer, and Scorpio" <<endl;
            if ((day-2) <= 18)
                cout << "Your birthday is on a cusp and adjacent with Aquarius." <<endl;
            else if ((day+2) >= 21) 
                cout << "Your birthday is on a cusp and adjacent with Aries." <<endl;
     }
    cout << "Try again? (y/n): ";
    cin >> ans;
}
    cout << "Goodbye." <<endl;
    
    return 0;
}

