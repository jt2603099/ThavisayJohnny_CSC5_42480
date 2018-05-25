/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 *
 * Created on May 25, 2018, 1:40 AM
 */

#include <iostream>
#include <cstdlib>

using namespace std;
//Function prototype
void delete_repeats(char a[], int& pos);
//Pre-condition: array of characters filled in and the number of positions filled
//Calls findChar and sorts through array a for repeats then removes characters that are repeated
//Post-conditon: displays new phrase after removing repeats

bool findChar(char target, char a[], int size);

int main(int argc, char** argv) {
    //Declare variables
    char a[81] = "Refrigerate after opening. Shake well before serving.";
    int size(53);
    
    cout << "Before, size=" << size <<endl;
    for (int i=0; i<size; i++) {
        cout << a[i];
    }
    cout <<endl;
    
    //Displays phrase
    delete_repeats(a, size);
    cout << "After, size=" << size <<endl;
    //Displays new phrase
    for (int i=0; i<size; i++) {
        cout << a[i];
    }
    cout <<endl;
    return 0;
}

bool findChar(char target, char a[], int size) {
    for (int i=0; i<size; i++) {
        if (a[i] == target)
            return true;
    }
    return false;
}

void delete_repeats(char a[], int& pos) {
    //Local variables
    int new_size(0); //New char for new size of list of characters
    
    for (int i=0; i<pos; i++) {
        if (!findChar(a[i], a, new_size)) {
            //sorts and compares array to same array, when flagged as true
            //both the arrays being compared increases new_size to display the 
            //remaining characters that are not repeated
            a[new_size] = a[i];
            new_size++;
        }
    }
        pos = new_size;
}