/* 
 * File:   main.cpp
 * Author: Johnny Thavisay
 * Created on April 29, 2018, 8:57 PM
 * Purpose:  Infinite Series
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
int fctrial(int x);
//Returns factorial of n
//No negative numbers

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float x,fx,term;
    int nterms;
    
    //Input or initialize values Here
    cout<<"Calculate a series f(x)=x-x^3/3!+x^5/5!-x^7/7!+......."<<endl;
    cout<<"Input x and the number of terms, output f(x)"<<endl;
    cin>>x>>nterms;
    
    //Calculate Sequence sum here
    for (nterms; nterms > 0; nterms--) {
        fx =
    }

    
    //Output the result here
    cout << fx <<endl;
    
    //Exit
    return 0;
}
int fctrial(int x) {
    float product = 1;
    while (x > 0) { 
        product = x * product;
        x--;
    }
    return product;
}