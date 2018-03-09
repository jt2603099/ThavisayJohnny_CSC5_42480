/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 *
 * Created on March 9, 2018, 1:50 PM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main (int argc, char** argv) {
    //Declare variables
    double radius, vm, pi;
    
    pi=3.1415;
    radius=0.0;
    
    
    //Output to monitor to begin program
    cout << "Enter radius of a sphere." <<endl;
    cin >> radius;
    
    //Equation to find the volume of a sphere
    vm = ((4.0 / 3.0) * pi * (radius * radius * radius));
    
    //Output the volume to monitor
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);
    cout << "The radius is " << vm <<endl;
    

    return 0;
}

