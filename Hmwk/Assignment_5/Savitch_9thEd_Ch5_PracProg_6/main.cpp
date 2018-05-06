/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 * Convert kilograms & grams to pounds & ounces
 * Created on May 6, 2018, 3:19 PM
 */

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

void input(int& input1, int& input2);
//Retrieves user's inputted values to convert to Kilograms and grams
//First parameter is kilograms, second grams

void convert(int& input1, int& input2, float& conv1, float& conv2);
//Converts pounds & ounces to kilograms and grams
//First parameter is kilograms, second grams, third pounds, fourth ounces

void output(int input1, int input2, int conv1, float conv2);
//Outputs the results
//First and second parameter is what user inputted
//Third and fourth parameter is the new converted values

int main(int argc, char** argv) {
    //Declare variables
    int kg, grams; 
    float lb, ounces;
    char ans;
    
    do {
        
        input(kg, grams); //Calls input function
        convert(kg, grams, lb, ounces); //Converts the inputs to kg & g
        output(kg, grams, lb, ounces); //Calls output function
        
        cout << "Do another?" <<endl;
        cin >> ans;
        
    } while (ans == 'Y' || ans == 'y');
    
    cout << "Goodbye." <<endl;

    return 0;
}

void input(int& input1, int& input2) {
    //Start the beginning of the program
    cout << "Please enter kilograms then grams to convert to pounds and ounces." <<endl;
    cin >> input1 >> input2;
}

void convert(int& input1, int& input2, float& conv1, float& conv2) {
    //Declare variables
    float g(1000.0), oz(16.0), kg(2.2046), kg2;
    
    //Find in pounds
    kg2 = input2 / g; //Convert grams to kilograms
    conv1 = (input1 + kg2) * kg; //Add kg and grams then convert to pounds by * by (2.2046)
    
    //Find leftover in ounces
    conv2 = conv1 - floor(conv1); //Find remaining in ounces by subtracting round down value of pounds
    conv2 = conv2 * oz; //Convert the remaining into ounces
}

void output(int input1, int input2, int conv1, float conv2) {
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    cout << input1 << " kilograms and " << input2 << " grams = " << conv1 << " pounds and " << conv2 << " ounces." <<endl;
}