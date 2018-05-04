/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 * Convert length in feet & inches to meters and centimeters
 * Created on May 4, 2018, 1:09 PM
 */

#include <iostream>
#include <cstdlib>

using namespace std;
void input(double& input1, double& input2);
//Retrieves two inputs for feet and inches

int convert(double& feet, double& inches);
//Converts feet and inches to meters and centimeters
//First parameter is feet, second is inches
//Returns meters and centimeters

void output(double m, double cm);
//Outputs the conversion
//First parameter is meters, second is centimeters

int main(int argc, char** argv) {
//Declare variables
    double main, secondary;
    char ans;
    do {
        cout << "Convert feet & inches to meters and centimeters." <<endl;
        input(main, secondary); //Calls for input function 
    } while (ans == 'Y' || ans == 'y');
    return 0;
}

void input(double& input1, double& input2 ) { 
    //Function Definition
    cout << "Input feet then inches." <<endl;
    cin >> input1 >> input2;
}

void output(double m, double cm) {
    
}
