/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 *
 * Created on March 19, 2018, 9:43 PM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int celsius(100), fahrenheit;
    
    //This algorithm loops and decreases Celsius and computes it until it equals Fahrenheit
    while (celsius != (fahrenheit = (9.0/5.0) * celsius + 32)) {
        celsius--;
    }
        cout << celsius << " Celsius = " << fahrenheit << " Fahrenheit" <<endl;
    return 0;
}
