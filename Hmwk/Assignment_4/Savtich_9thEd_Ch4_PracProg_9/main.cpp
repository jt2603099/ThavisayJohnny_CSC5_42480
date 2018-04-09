/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 * Overloading Function Max that takes two and three variables
 * Created on April 8, 2018, 9:09 PM
 */

#include <iostream>
#include <cstdlib>

//Function Declaration of max
double max(double x, double y);
//Returns the product of two numbers
//1st parameter is the first integer and 2nd parameter is the 2nd

double max(double x, double y ,double z);
//Returns the product after subtracting y from x.
//1st parameter is the first integer, 2nd parameter is the 2nd, 3rd parameter is the third

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    double x, y, z, max1, max2;//max1 = 1st function; max2 = 2nd function
    char ans('Y');

    do {
        cout << "Enter the first number." <<endl;
        cin >> x;
        cout << "Enter the second number." <<endl;
        cin >> y;
        cout << "Enter the third number." <<endl;
        cin >> z;
        
        //Function call for both math functions
        max1 = max(x, y);
        max2 = max(x, y, z);
        
        //Determine which function is larger
        if (max1 > max2)
            cout << max1 <<endl;
        else
            cout << max2 <<endl;
    
        //Continue the loop?
        cout << "Try another?" <<endl;
        cin >> ans;
    } while (ans == 'y' || ans == 'Y');
    cout << "Goodbye." <<endl;
    
    return 0;
}

//Function Definition for 1st function max
double max(double x, double y)
{
    return (x * y);
}

double max (double x, double y, double z)
{
    return ((x-y)*z);
}
