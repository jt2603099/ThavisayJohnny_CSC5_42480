/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 *
 * Created on May 26, 2018, 10:45 PM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

void lSearch(int array[], int COUNT);

int main(int argc, char** argv) {
    //Declare variables
    int COUNT(18);
    const int ARRAYSIZE(18);
    int array[ARRAYSIZE] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
                            8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
                            1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
    
    //Function Call
    lSearch(array, COUNT);
    
    return 0;
}

void lSearch(int array[], int COUNT) {
    int charge;
    bool found(false);
    
    cout << "Enter account charge number: " <<endl;
    cin >> charge;
    
    for (int i=0; i<COUNT; i++) {
        if (array[i] == charge) {
            found = true;
            break;
        }
    }
    if (found) {
        cout << " Number is valid " <<endl;
    } else {
        cout << " Number is invalid " <<endl;
    }
}