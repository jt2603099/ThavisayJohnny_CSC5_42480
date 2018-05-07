/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 * Area of an arbitrary triangle
 * Created on May 6, 2018, 9:44 PM
 */

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

void input(int& input1, int& input2, int& input3);
//User chose to run the program
//Each parameter is the length of each side

void shape(int input1, int input2, int input3, float& area, float& prmtr);
//Calculates area and perimeter of triangle from the 3 parameters in input function
//Check if input1 + input2 = input3
//If not, not a legal triangle

void output(int input1, int input2, int input3, float area, float prmtr);
//Output the results after calculating area and perimeter

int main(int argc, char** argv) {
    //Declare variables
    int input1, input2, input3, input12, input32; //input12 is a^2+b^2 & input32 is c^2
    float area, prmtr;
    char ans;
    
    do {
        //Call for input function
        input(input1, input2, input3);
        
        //Checks for legal triangle
        input12 = pow(input1, 2.0) + pow(input2, 2.0); //a^2 + b^2 pythagorean theorem
        input32 = pow(input3, 2.0); //c^2 pythagorean theorem
        
        if (input32 != input12) {
            cout << "Not a valid triangle!" <<endl;
            break;
        }
        
        //Valid triangle gets computed
        //Call shape function to calculate area and perimeter
        shape(input1, input2, input3, area, prmtr);
        
        //Call output function to display the results
        output(input1, input2, input3, area, prmtr);
        
    } while (ans == 'Y' || ans == 'y');
    
    return 0;
}

void input(int& input1, int& input2, int& input3) {
    
    cout << "Enter first number: ";
    cin >> input1;
    cout << "Second number: ";
    cin >> input2;
    cout << "Third number: ";
    cin >> input3;
    
}

void shape(int input1, int input2, int input3, float& area, float& prmtr) {
    //Declare variables
    float s; //s is the semi-perimeter
    
    s = (input1 + input2 + input3) / 2;
    area = sqrt(s * (s-input1)*(s-input2)*(s-input3));
    prmtr = input1 + input2 + input3;
    
}

void output(int input1, int input2, int input3, float area, float prmtr) {
    
    cout << input1 << "," << input2 << "," << input3 << " has ";
    cout << area << " = area and " << prmtr << " = perimeter." <<endl;
    
}