/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 * Purpose: Calculate the military budget as a percentage of the federal budget
 * Created on February 20, 2018, 10:07 PM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    
    //Declare variables
    float milBdgt, fedBdgt, milBdgtPrcnt;
    const int PRCNT=100;//Conversion to percentage
    
    //Initialize variables
    milBdgt=639.1e09f;//Military budget = 6.391 Billion
    fedBdgt=4.094e12f;//Federal budget = 4.094 TRillion
    
    //Inputs to Outputs
    milBdgtPrcnt=milBdgt/fedBdgt*PRCNT;
    
    //Display Outputs to Monitor 
    cout<<"Military Budget = $639.1 Billion" <<endl;
    cout<<"Federal Budget = $4.094 Trillion" <<endl;
    
    cout.setf(ios::fixed);
    cout.precision(2);
        cout<<"Military Budget in Percentage = "<< milBdgtPrcnt << "%" <<endl;

    return 0;
}

