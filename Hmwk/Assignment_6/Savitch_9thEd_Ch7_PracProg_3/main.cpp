/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 *
 * Created on May 23, 2018, 10:13 PM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

void swapFrontBack(int a[], int count);
//Precondition: count <= declared size of array r
//The array elements a[0] - a[count-1] have values
//Post condition: The values of a[0] and a[count-1] should be swapped
//there is enough elements

int main(int argc, char** argv) {
    //Declare variables
    int array[]={}, size;
    char ans('y');
    
    do {
        cout << "Enter the number of elements the array can hold(At-least 2)." <<endl;
        cin >> size;
            if (size < 2) {
                cout << "ERROR: Enter number of elements more than 2!" <<endl;
                cin >> size;
            }
        swapFrontBack(array, size);
        
        //Ask to repeat loop
        cout <<endl;
        cout << "Try another array?" <<endl;
        cin >> ans;
    } while (ans == 'Y' || ans == 'y');
    
    cout << "Goodbye." <<endl;

    return 0;
}

void swapFrontBack(int a[], int count) {
    cout << "Enter your " << count << " numbers." <<endl;
    
    //Enter the number of elements
    for (int i=0; i<count; i++) {
        cin >> a[i];
    }
        int temp;
        temp = a[0];
        a[0] = a[count-1];
        a[count-1] = temp;
    {
        for (int k=0; k<count; k++)
        cout << a[k] << " ";
    }
}