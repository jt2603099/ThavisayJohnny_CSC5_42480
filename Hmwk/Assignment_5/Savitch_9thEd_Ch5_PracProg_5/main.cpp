/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 * Convert pounds and ounces to kilograms and grams
 * Created on May 6, 2018, 1:38 PM
 */

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

void input(int& input1, int& input2);
//Retrieves user's inputted values to convert to Kilograms and grams
//First parameter is pounds, second ounces

void convert(int& input1, int& input2, float& conv1, float& conv2);
//Converts pounds & ounces to kilograms and grams
//First parameter is pounds, second ounces, third kilograms, fourth grams

void output(int input1, int input2, int conv1, float conv2);
//Outputs the results
//First and second parameter is what user inputted
//Third and fourth parameter is the new converted values

int main(int argc, char** argv) {
//Declare variables
    int lb, ounce;
    float kg, grams;
    char ans;
    
    do {
        
        input(lb, ounce); //Calls input function
        convert(lb, ounce, kg, grams); //Converts the inputs to kg & g
        output(lb, ounce, kg, grams); //Calls output function
        
        cout << "Do another?" <<endl;
        cin >> ans;
        
    } while (ans == 'Y' || ans == 'y');
    
    cout << "Goodbye." <<endl;
    
    return 0;
}

void input(int& input1, int& input2) {
    //Start the beginning of the program
    cout << "Please enter pounds then ounces to convert to kilograms and grams." <<endl;
    cin >> input1 >> input2;
    
}

void convert(int& input1, int& input2, float& conv1, float& conv2) {
    //Declare variables
    float kg(2.2046), g(1000.0), oz(16.0), lb2;
    //Convert to kg
    lb2 = input2 / oz;//Convert ounces to pounds
    conv1 = ((input1 + lb2) / kg); //Add pounds and oz(lbs equiv) together then converts to kilograms
    
    //Find grams
    conv2 = conv1 - floor(conv1); //Finds extra kg for conversion to grams
    conv2 = conv2 * g; //Converts the leftover kg to grams
    
}

void output(int input1, int input2, int conv1, float conv2) {
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    
    cout << input1 << " pounds and " << input2 << " ounces = " << conv1 << " kilograms and " << conv2 << " grams." <<endl;
}