/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 *
 * Created on March 4, 2018, 8:36 PM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    char CHCTR;
    
    //Display outputs to monitor
    cout<<"Display a huge C composed of the character of your choice"<<endl;
    
    cout<<"Enter the character you would like."<<endl;
    cin>>CHCTR;
    
    //Display the big C formula
    cout<<"     "<<CHCTR<<CHCTR<<CHCTR<< endl;
    cout<<"    "<<CHCTR<<"   "<<CHCTR<< endl;
    cout<<"   "<<CHCTR<< endl;
    cout<<"   "<<CHCTR<< endl;
    cout<<"   "<<CHCTR<< endl;
    cout<<"   "<<CHCTR<< endl;
    cout<<"   "<<CHCTR<< endl;
    cout<<"    "<<CHCTR<<"   "<<CHCTR<< endl;
    cout<<"     "<<CHCTR<<CHCTR<<CHCTR<< endl;
    

    return 0;
}

