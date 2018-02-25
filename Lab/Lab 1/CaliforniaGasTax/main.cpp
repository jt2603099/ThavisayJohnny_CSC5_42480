/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 * Created on February 20, 2018, 8:14 PM
 * Purpose: Calculating California Gas Tax
 */

#include <iostream>
#include <cstdlib>

using namespace std;



int main(int argc, char** argv) {
    //Declare variables
    float   gsPrice,//Gas prices in $
            bsPrice,//Base gas price in $
            fedTax,//Federal tax in $/gallon
            stTax,//State tax in $/gallon
            stsTax,//State sales tax in $/gallon
            totTax,//Total tax paid /gallon of gas
            percTax,//Percentage of taxes paid
            profRange;//Profit range of Oil Company
    
    
    //Initialize variables
    gsPrice=3.09f;//$3.09/gallon
    fedTax=0.184f;//18.4 cents/gallon
    stTax=0.417f;//41.7 cents/gallon
    stsTax=0.0225f;//2.25% sales tax from base price
    profRange=0.065f;//6.5%/gallon profit range
    
    //Inputs to Outputs
    bsPrice=(gsPrice-fedTax-stTax)/(1+stsTax);//Base price for a gallon of gas
    totTax=gsPrice-bsPrice;//Total tax paid /gallon of gas
    percTax=(totTax/bsPrice)*100;//Percentage of taxes paid
    profRange*=100*bsPrice;
    
    
    //Display Outputs
    cout<<"Gas price = $"<< gsPrice <<"/gallon"<<endl;
    cout<<"Base price = $"<< bsPrice <<"/gallon"<<endl;
    cout<<"Total taxes = $"<< totTax <<"/gallon"<<endl;
    cout<<"Federal tax = $"<< fedTax <<"/gallon"<<endl;
    cout<<"State Sales tax = $"<<stsTax*100 <<"%"<<endl;
    cout<<"Percentage price due to tax gas = %"<< percTax <<endl;
    cout<<"Oil company profit range = "<< profRange <<"%"<<endl;

    return 0;
}

