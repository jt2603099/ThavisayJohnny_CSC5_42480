/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 * Average and Standard Deviation of Four Scores
 * Created on May 4, 2018, 12:16 PM
 */

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;
float Average(double s1, double s2, double s3, double s4);
//Average of four scores user inputs

float StdDev(double s1, double s2, double s3, double s4, double avg);
//First 4 parameters are what user inputs and avg contains the average
//of the four numbers
//Computes the standard deviation of the first four parameters

int main(int argc, char** argv) {
    double s1, s2, s3, s4;
    double avg, stdev;
    char ans('Y');
    
    cout << "Find the standard deviation of four scores." <<endl;
    
    do {
        cout << "Enter the four scores." <<endl;
        cin >> s1 >> s2 >> s3 >> s4;
        avg = Average(s1, s2, s3, s4); //Calls the average function to compute the average of the four scores
        stdev = StdDev(s1, s2, s3, s4, avg); //Calls to Standard Deviation function for the value
        
        cout << "The average is " << avg << " and the standard deviation is " << stdev << "." <<endl;
        
        cout << "Try four more numbers?" <<endl;
        cout << "Y or N" <<endl;
        cin >> ans;
    } while (ans == 'Y' || ans == 'y');
    
    cout << "Goodbye." <<endl;
    return 0;
}

float Average(double s1, double s2, double s3, double s4) {
    return (s1+s2+s3+s4)/4;
}

float StdDev(double s1, double s2, double s3, double s4, double avg) {
    return sqrt((pow(s1-avg, 2) + pow(s2-avg, 2) + pow(s3-avg, 2) + pow(s4-avg, 2)) / 4);
}
