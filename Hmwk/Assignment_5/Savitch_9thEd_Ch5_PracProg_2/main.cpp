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

int convert(double& ft, double& in, double& meters, double& cntmtrs);
//Converts feet and inches to meters and centimeters
//First parameter is feet, second is inches
//Returns meters and centimeters

void output(double ft, double in, double meters, double cntmtrs);
//Outputs the conversion
//First parameter is meters, second is centimeters

int main(int argc, char** argv) {
//Declare variables
    double main, secondary, meters, cnmtrs; //Main equals the foot inputted and secondary is inches
    char ans;
    do {
        cout << "Convert feet & inches to meters and centimeters." <<endl;
        input(main, secondary); //Calls for input function
        convert(main, secondary, meters, cnmtrs); //Calls for convert function to convert it to meters and centimeters
        output(main, secondary, meters, cnmtrs); //Calls for output function for the output
        
        cout << "Try another?" <<endl;
        cin >> ans;
    } while (ans == 'Y' || ans == 'y');
    
    cout << "Goodbye." <<endl;
    return 0;
}

void input(double& input1, double& input2 ) { 
    //Function Definition
    cout << "Input feet then inches." <<endl;
    cin >> input1 >> input2;
}

int convert(double& ft, double& in, double& meters, double& cntmtrs) {
    float m(0.3048), cm(100.0), newm, newcm;
    //Find in meters
    newm = ft * m; //Multiplies value of feet by meters to convert feet into meters
    newcm = (in / 12) * m; //Divides by inches by 12 to convert to feet then multiply by meters which is the equivalent of inches to feet but in meters
    meters = newm + newcm; //Converted value in meters
    
    //Find in centimeters
    newm = newm * cm; //Multiplies value of feet by meters then by cm to convert feet into meters then into centimeters
    newcm = newcm * cm; //Divides by inches by 12 to convert to feet then multiply by meters then cm which is the equivalent of inches to feet but in centimeters
    cntmtrs = newm + newcm; //Adds converted values of feet and inches for total centimeters
}
void output(double ft, double in, double meters, double cntmtrs) {
    cout.setf(ios::showpoint);
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << ft << " feet and " << in << " inches = " << meters << " meters or " << cntmtrs << " centimeters." <<endl;
}
