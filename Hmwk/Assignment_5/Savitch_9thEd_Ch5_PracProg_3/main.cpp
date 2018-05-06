/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 * Convert length in meters and centimeters to feet & inches
 * Created on May 6, 2018, 12:23 AM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

void input(double& input1, double& input2);
//Retrieves two inputs for feet and inches

int convert(double& meters, double& cntmtrs, double& ft, double& in);
//Converts feet and inches to meters and centimeters
//First parameter is feet, second is inches
//Returns meters and centimeters

void output(double meters, double cntmtrs, double feet, double inches);
//Outputs the conversion
//First parameter is meters, second is centimeters

int main(int argc, char** argv) {
//Declare variables
    double main, secondary, feet, inches; //Main equals the meters inputted and secondary is centimeters
    char ans;
    do {
        cout << "Convert feet & inches to meters and centimeters." <<endl;
        input(main, secondary); //Calls for input function
        convert(main, secondary, feet, inches); //Calls for convert function to convert it to feet and ainches
        output(main, secondary, feet, inches); //Calls for output function for the output
        
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

int convert(double& meters, double& cntmtrs, double& feet, double& inches) {
    float ft(3.2808), in(12.0), newft, newin;
    //Find in feet
    newft = meters * ft; //Multiply meters by ft to convert to feet
    newin = cntmtrs * 0.01 * ft; //Converts centimeters to meters then multiply it by ft to convert it to feet
    feet = newft + newin;
    
    //Find in inches
    newft = newft * in;
    newin = newin * in;
    inches = newft + newin;
}
void output(double meters, double cntmtrs, double feet, double inches) {
    cout.setf(ios::showpoint);
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << meters << " meters and " << cntmtrs << " centimeters = " << feet << " feet or " << inches << " inches." <<endl;
}


