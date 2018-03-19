/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 * Will the sphere sink or float in water?
 * Created on March 18, 2018, 10:40 PM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    char ans = 'y';
    double weight_sphere, radius_sphere, buoyantForce, sphereVolume, waterFluid(62.4), pi(3.14159);
    
    //Intro dialogue initializing program
    cout << "Determine if the sphere will sink or float in water." << endl;
    
    while (ans == 'y' || ans == 'Y') {
    
    cout << "First input the weight of the sphere in pounds then press enter: " <<endl;
    cin >> weight_sphere;
    cout << "Enter the radius of the sphere in feet then press enter: " <<endl;
    cin >> radius_sphere;
    
    //Find (V)olume of the sphere
    sphereVolume = ((4/3) * pi * (radius_sphere * radius_sphere * radius_sphere));
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    //Input volume into Buoyant Force formula
    buoyantForce = sphereVolume * waterFluid;
        if (buoyantForce >= weight_sphere) {
            cout << "The sphere will float." <<endl;
        } else {
            cout << "The sphere will sink." <<endl;
        }
    
    //Ask to run program again
    cout << "Try another? (y/n): ";
    cin >> ans;
    } 
    //End of program
    cout << "Goodbye." <<endl;
    return 0;
}

