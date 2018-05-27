/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 *
 * Created on May 27, 2018, 12:16 AM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

void bblSort(int arr[], int);
void slcSort(int arr[], int);

int main(int argc, char** argv) {
    //Declare variables
    int array1[8]={2,3,4,1,7,8,9,3};
    int array2[8]={2,3,4,1,7,8,9,3};
    int i;
    
    cout << "Elements of 1st array: "<<endl;
    for(i=0; i<8; i++)
        cout << " " << array1[i];
    cout <<endl;
    
    bblSort(array1, 8);
    
    cout << "Elements of 2nd array: "<<endl;
    for(i=0; i<8; i++)
        cout << " " << array2[i];
    cout <<endl;
    
    slcSort(array2, 8);
    
    return 0;
}

void slcSort(int arr[], int size) {
    int start, minIndex, minValue;
    
    cout << "Selection Sort:" <<endl;
    for (start=0; start<(size-1); start++) {
        minIndex = start;
        minValue= arr[start];
        for(int index = start+1; index < size; index++) {
            if (arr[index] < minValue)
            {
                minValue = arr[index];
                minIndex = index;
            } //End if
        } //End for
        arr[minIndex] = arr[start];
        arr[start] = minValue;
        
        for (int i=0; i<size; i++)
                cout << arr[i] << " ";
        cout <<endl;
    }
}
void bblSort(int arr[], int size) {
    bool swap;
    int temp;
    
    cout << "Bubble sort" <<endl;
    do {
        swap = false;
        for (int count = 0; count < (size-1); count++) {
            if (arr[count] > arr[count+1]) {
                temp = arr[count];
                arr[count] = arr[count+1];
                arr[count+1] = temp;
                swap = true;
            } //End if
        } //End for
        for (int i=0; i<size; i++) 
            cout << arr[i] << " ";
            cout << endl;
    } while (swap);
}