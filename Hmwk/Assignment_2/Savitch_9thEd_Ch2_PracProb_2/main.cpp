/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 *
 * Created on March 7, 2018, 9:18 PM
4 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int n, count_down(100);
    double r, guess, n_answer;
 
    //Program startup
    cout << "Let's compute the square root of a number using the Babylonian Algorithm" <<endl;
    cout << "Please enter a whole number to compute: ";
    cin >> n;
    
    guess = n/2;
    
    while (count_down > 0){
    r = n/guess;
    guess = (guess + r) / 2;
    if (guess <= (guess * 0.01)+ guess)
    n_answer=guess;
    else 
        r = n / guess;         
        guess = (guess + r) / 2;
        count_down-=1;
        cout << guess << endl;
}
    cout << "The square root of " << n << " is " << n_answer<<endl;

    return 0;
}

