/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 * Artificial Sweetener Diet Soda
 * Created on March 11, 2018, 2:40 PM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    char ans;
    double mouse_mass(5), mouse_sweetener(35), soda_can(350), dieting_weight, dieter_sweetener, GRAMS(454), dieter_can_grams, dieter_gram, dieter_can;
    double const diet_soda_sweetener(0.001);
    
    do {
    cout << "Find out how much diet soda pop you can drink according to your weight."<<endl;
    cout << "Each can of diet soda contains 0.001% of artificial sweetener."<<endl;
    cout << "Please input your weight when you'll stop dieting"<<endl;
    cin >> dieting_weight;

    //Inputs to Outputs
    dieting_weight = dieting_weight * GRAMS;//convert pounds to grams
    dieter_sweetener = (mouse_mass / mouse_sweetener) * dieting_weight; //Find amount of grams of sweetener to kill dieter
    dieter_can_grams = dieter_sweetener / diet_soda_sweetener;
    dieter_can = dieter_can_grams / 350;
    cout << "The amount of Diet Soda Can's to kill the dieter is: " << dieter_can <<endl;
    cout << "Calculate again?"<<endl;
    cout << "Type y or Y to repeat"<<endl;
    cin >> ans;
    } while (ans == 'y'||ans == 'Y');
}

