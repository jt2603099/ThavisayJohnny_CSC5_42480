/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 *
 * Created on February 24, 2018, 9:52 PM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) 
    {
    int number_of_pods, peas_per_pod, total_peas_mult, total_peas_add;
    
    cout << "Hello.";
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of pods:\n";
    
    cin >> number_of_pods;
    
    cout << "Enter the number of peas in a pod:\n";
    cin >> peas_per_pod;
    total_peas_mult = number_of_pods * peas_per_pod;
    total_peas_add = number_of_pods + peas_per_pod;
    cout << "If you have ";
    cout << number_of_pods;
    cout << " pea pods\n";
    cout << "and ";
    cout << peas_per_pod;
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << total_peas_mult;
    cout << " peas in all the pods or\n";
    cout << "you have " << total_peas_add << " peas and pods total.\n";
    
    return 0;
}

