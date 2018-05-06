/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 *
 * Created on May 6, 2018, 1:46 AM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

void input(int choice, float& input1, float& input2);
//Retrieve input to convert from feet and inches or meters and centimeters
//Retrieves two inputs for conversion

void convFI(float& ft, float& in, float& meters, float& cntmtrs);
//Converts feet and inches to meters and centimeters
//First parameter is feet, second is inches
//Returns meters and centimeters

void convMC(float& meters, float& cntmtrs, float& feet, float& inches);
//Converts meters and centimeters to feet or inches
//First parameter is feet, second is inches
//Returns meters and centimeters

void output(int choice, float input1, float input2, float output1, float output2);
//Outputs the conversion

int main(int argc, char** argv) {
    int choice;
    float input1, input2;
    char ans;
    
    do {
        //Calls the input function to begin the dialogue
        input(choice, input1, input2);
        
        //Asks to loop the program
        cout << "Try another?" <<endl;
        cin >> ans;
        
    } while (ans == 'Y' || ans == 'y');
    
    cout << "Goodbye." <<endl;
    
    return 0;
}

void input(int choice, float& input1, float& input2) {
    
    float conv1, conv2;//conv1-2 are the converted values to output
    cout << "Type 1 to convert feet & inches to meters and centimeters" <<endl;
    cout << "or 2 for meters & centimeters to feet & inches." <<endl;
    
    cin >> choice; //
    
    
    if (choice == 1) {
            //If choice = 1 calls the Feet & Inches conversion
            cout << "Type in the feet then inches." <<endl;
            cin >> input1 >> input2;
            convFI(input1, input2, conv1, conv2); 
            
        } else {
            //If choice = 2 calls the Meters & Centimeters conversion
            cout << "Type in the meters then centimters." <<endl;
            cin >> input1 >> input2;
            convMC(input1, input2, conv1, conv2);
        }
    
        //Call the output function
        output(choice, input1, input2, conv1, conv2);
}

void convFI(float& ft, float& in, float& meters, float& cntmtrs) {
    
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

void convMC(float& meters, float& cntmtrs, float& feet, float& inches) {
    
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

void output(int choice, float input1, float input2, float output1, float output2) {
    
    cout.setf(ios::showpoint);
    cout.setf(ios::fixed);
    cout.precision(2);
    
    if (choice == 1) {
        cout << input1 << " feet and " << input2 << " inches = " << output1 << " meters or " << output2 << " centimeters." <<endl;
    } else {
        cout << input1 << " meters and " << input2 << " centimeters = " << output1 << " feet or " << output2 << " inches." <<endl;
    }
}