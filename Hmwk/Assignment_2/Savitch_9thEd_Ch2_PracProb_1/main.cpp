/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 *
 * Created on March 7, 2018, 8:49 PM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    double metric_ton,//metric ton value 
           ounces_of_cereal,//amount of cereal
           ounces_to_ton,//value from getting ounces to ton 
           boxes_needed;//boxes needed to reach 1 ton of cereal
    
    //Declare variables
    metric_ton=35273.92;//terms of ounces from tons
    

    cout << "Enter the weight of your cereal in ounces" <<endl;
    cin >> ounces_of_cereal;
    
    //Find weight in tons from converting from ounces
    ounces_to_ton = ounces_of_cereal / metric_ton; 
    
    //Output weight of cereal in ounces
    if (ounces_to_ton > 1)
    cout << "The weight of your cereal is " << ounces_to_ton << " tons" <<endl;
    else
    cout << "The weight of your cereal is " << ounces_to_ton << " ton" <<endl;

    //Find number of boxes of cereal to yield 1 metric ton
    boxes_needed = metric_ton / ounces_to_ton; //Divide the value of a metric ton by the weight of cereal in metric ton to find number of boxes needed
    
    cout.setf(ios::fixed);
    cout << "You will need " << boxes_needed << " boxes of cereal to yield 1 ton.";
            
    return 0;
}

