/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 * Gravitational Attraction Force
 * Created on April 8, 2018, 8:22 PM
 */

#include <iostream>
#include <cstdlib>  
#include <math.h>

using namespace std;

//Declare global constant
//Universal gravitational constant
const double G = (6.673 * pow(10.0, -8.0));

//Function Declaration
double gForce(double mass1, double mass2, double d);
//Find gravitational attraction force between 2 masses. 1st parameter is
//mass of 1st thing and 2nd is mass of the 2nd. d = distance between the two masses

int main(int argc, char** argv) {
    //Declare variables
    double mass1, mass2, d, FORCE;//FORCE = actual force
    char ans('y');
    
    do {
        cout << "Enter the mass of the first body." <<endl;
        cin >> mass1;
        cout << "Enter the mass of the second body." <<endl;
        cin >> mass2;
        cout << "Enter the distance between the two bodies." <<endl;
        cin >>  d;
        
        //Function call of gForce
        FORCE = gForce(mass1, mass2, d);
        
        //Inputs to outputs
        cout << "The gravitational force between the two bodies is " << FORCE << " Newtons." <<endl;
        
        //Keep loop going
        cout << "Try again?" <<endl;
        cin >> ans;
        
    } while (ans == 'y' || ans == 'Y');
    cout << "Goodbye." <<endl;

    return 0;
}

//Function Declaration of gForce
double gForce(double mass1, double mass2, double d)
{
    double GAF;//Gravitational Attractive Force
    GAF = (G * mass1 * mass2) / pow(d, 2.0);
    return GAF;
}

