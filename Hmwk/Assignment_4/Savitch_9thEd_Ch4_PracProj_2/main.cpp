/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 * Find user's hat, jacket, and waist size.
 * Created on April 8, 2018, 10:31 PM
 */

#include <iostream>
#include <cstdlib>

//Function Declaration
double hat(double weight, double height);
//Return hat size. First parameter is the weight in pounds
//second is height in inches ALL multiplied by 2.9

double jacket(double weight, double height, int age);
//return jacket size. First parameter is the weight in pounds
//second is height in inches and third is the age

double waist(double weight, double age);
//return waist size. First parameter is the weight in pounds
//second is height in inches

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int w, h, age, HAT, JACKET, WAIST;
    char ans('Y');
    
    //Start loop
    do {
        cout << "Enter your weight in pounds." <<endl;
        cin >> w;
        cout << "Enter your height in inches." <<endl;
        cin >> h;
        cout << "Enter your age as a whole number." <<endl;
        cin >> age;
        
        //Function Calls
            HAT = hat(w, h);
            JACKET = jacket(w, h, age);
            WAIST = waist(w, age);
            
            //Inputs to output
            cout << "The hat size is " << HAT << ", jacket size is " << JACKET << ", and the waist size is " << WAIST << "." <<endl;
            
        //Continue loop?
            cout << "Try another?" << endl;
            cin >> ans;
            
    } while (ans == 'y' || ans == 'Y');
    cout << "Goodbye." <<endl;
    return 0;
}

//Function Definition of hat
double hat(double weight, double height)
{
    return ((weight/height) * 2.9 );
}

//Function Definition of jacket
double jacket(double weight, double height, int age)
{
    int i;
    if (age >= 30)
    {
        if ((age % 10) != 0)
            age = age - (age % 10);
            i = (age - 30) / 10;
            return ((height * weight) / 288.0) + ((1.0 / 8.0) * i);
    }
}

//Function Definition of waist
double waist(double weight, double age)
{
    double h = weight / 5.7;
    if (age > 28) {
        h += (age - 28) / 2 * 0.1;
    }
    return h;
}