/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 *
 * Created on May 27, 2018, 12:06 AM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

double median(int *arrptr, int n);

int main(int argc, char** argv) {
    //Declare variables
    int *array = new int[20];
    int i, n;
    double Median;
    
    cout << "Enter the size of the array:";
    cin >> n;
    cout << "Enter the elements  into the array:";
    for (i=0; i<n; i++) {
        cin >> *(array+i);
    }
    Median = median(array, n);
    
    cout << "Median is " << Median <<endl;
    
    return 0;
}

double median(int *arrptr, int n) {
    double median;
    if (n%2==0) {
        median = (*(arrptr+(n/2))+*(arrptr+(n/2+1)))/2;
    } else {
        median = *(arrptr+(n/2));
    }
    return median;
}