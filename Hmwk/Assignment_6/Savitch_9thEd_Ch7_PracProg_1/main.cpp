/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 *
 * Created on May 22, 2018, 10:40 PM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

//Function prototype
void firstLast2(int a[], int count);
//Count is the declared size of array a
//Integers will be inputed
//Array is filled with inputted integers

int main(int argc, char** argv) {
    int array[] = {}, size;
    
    cout << "Enter how many elements the array should hold." <<endl;
    cin >> size;
    
    //Function call firstLast2 to run main program
    firstLast2(array, size);
    
    return 0;
}

void firstLast2(int a[], int count) {
    
    cout << "Enter your " << count << " numbers." <<endl; 
    
    for (int i=0; i<count; i++) {
        cin >> a[i]; 
    }
        if (a[0] == 2 || a[count-1] == 2) {
            cout << "true" <<endl;
        } else { 
            cout << "false" <<endl;
        }
    //Otherwise
}
