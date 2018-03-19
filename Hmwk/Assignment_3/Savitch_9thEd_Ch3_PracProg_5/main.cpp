/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 * Find and print all prime numbers between 3 and 100
 * Created on March 18, 2018, 7:09 PM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    bool prime = true;
    
    for (int n = 3; n < 100; n++) { //Iterate from 3
        prime = true; //Number is prime for now
        for (int i = 2; i < (n - 1); i++) //Check if numbers are prime, start from 2 then loop (n-1)
        {
            if ((n % i) == 0) //Divides by 2 then goes up each iteration if 'n' can divide evenly from any number i.
            {
                prime = false; //Number is not prime, will now iterate next number
                break;
            }       
        }
        if (prime == true) //Check for prime numbers to be outputted here
            cout << n <<endl;
    }
    return 0;
}

