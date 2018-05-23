/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 *
 * Created on May 23, 2018, 12:05 AM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

void countNum2s(int array[], int size);
//Precondition: Size is the number of elements in array
//Integers will be inputted into array
//Postcondition: Array is filled with inputted integers
//Will be used to count number of 2s in array

int main(int argc, char** argv) {
//Declare variables
    int array[] = {}, size;
    
    cout << "Enter the number of elements you want in the array." <<endl;
    cin >> size;
    
    countNum2s(array, size);
    
    return 0;
}

void countNum2s(int array[], int size) {
    int num2(2), count(0);
    
    cout << "Enter the " << size << " numbers." <<endl;
    
    for (int i=0; i<size; i++) { 
        cin >> array[i]; 
            if (array[i] == num2) {
                count++;
            }
    }
    cout << "The number "<< num2 << " was found " << count << " times." <<endl;
}