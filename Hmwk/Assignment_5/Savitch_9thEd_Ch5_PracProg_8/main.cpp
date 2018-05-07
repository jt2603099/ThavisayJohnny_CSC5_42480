/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 * Multiconversion program for height(ft, in, m, cm) and weight(lbs, oz, kg, g)
 * Created on May 6, 2018, 6:57 PM
 */

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

void input(int& choice, int& choice2, int& input1, int& input2);
//Retrieve input to decide on which conversion measurement to do
//Get 2nd input for which specific conversion
//Retrieves two inputs for conversion

void convFI(int& ft, int& in, float& meters, float& cntmtrs);
//Converts feet and inches to meters and centimeters
//First parameter is feet, second is inches
//Returns meters and centimeters

void convMC(int& meters, int& cntmtrs, float& feet, float& inches);
//Converts meters and centimeters to feet or inches
//First parameter is feet, second is inches
//Returns meters and centimeters

void convPO(int& pounds, int& ounces, float& conv1, float& conv2); //Pounds & Ounces
//Converts pounds and ounces to kilograms and grams
//First parameter is pounds, second is ounces
//Returns kilograms and grams

void convKG(int& kilo, int& grams, float& conv1, float& conv2); //Kilograms & Grams
//Converts kilograms and grams to pounds or ounces
//First parameter is pounds, second is ounces
//Returns pounds and ounces

void output(int choice, int choice2, float input1, float input2, int output1, float output2);
//Outputs the conversion

int main(int argc, char** argv) {
    int choice, choice2, input1, input2;
    float conv1, conv2;
    char ans;
    
    do {
        //Calls the input function to begin the dialogue
        input(choice, choice2, input1, input2);
        
        //Asks to loop the program
        cout << "Try another?" <<endl;
        cin >> ans;
        
    } while (ans == 'Y' || ans == 'y');
    
    cout << "Goodbye." <<endl;
    
    return 0;
}

void input(int& choice, int& choice2, int& input1, int& input2) {
    float conv1, conv2;
    cout << "Type 1 for length conversion or" <<endl;
    cout << "2 for weight conversions." <<endl;
    cin >> choice; 
    
    
    if (choice == 1) { //This is the height conversion
        cout << "Input 1 to convert feet & inches or " <<endl;
        cout << "2 to convert meters & centimeters." <<endl;
        cin >> choice2;
        
        if (choice2 == 1) {
            //If choice = 1 calls the Feet & Inches conversion
            cout << "Type in the feet then inches." <<endl;
            cin >> input1 >> input2;
            
            convFI(input1, input2, conv1, conv2); 

        } else {
            //If choice = 2 calls the Meters & Centimeters conversion
            cout << "Type in the meters then centimeters." <<endl;
            cin >> input1 >> input2;
            
            convMC(input1, input2, conv1, conv2);
        }    
    } 
    
    if (choice == 2) { //This is the weight conversion
        cout << "Input 1 to convert pounds & ounces or " <<endl;
        cout << "2 to convert kilograms & grams." <<endl;
        cin >> choice2;
        
        if (choice2 == 1) {
            //If choice = 1 calls the Pounds & Ounces conversion
            cout << "Type in the pounds then ounces." <<endl;
            cin >> input1 >> input2;
            
            convPO(input1, input2, conv1, conv2); 
            
        } else {
            //If choice = 2 calls the Kilograms & Grams conversion
            cout << "Type in the kilograms then grams." <<endl;
            cin >> input1 >> input2;
            
            convKG(input1, input2, conv1, conv2);
        }
    }
    
        //Calls for output function
        output(choice, choice2, input1, input2, conv1, conv2);
}

void convFI(int& ft, int& in, float& meters, float& cntmtrs) {
    
    float m(0.3048), cm(100.0), newm, newcm;
    //Find in meters
    newm = ft * m; //Multiplies value of feet by meters to convert feet into meters
    newcm = (in / 12) * m; //Divides by inches by 12 to convert to feet then multiply by meters which is the equivalent of inches to feet but in meters
    meters = newm + newcm; //Converted value in meters
    
    //Find in centimeters
    newm = newm * cm; //Multiplies value of feet by meters then by cm to convert feet into meters then into centimeters
    newcm = newcm * cm; //Divides by inches by 12 to convert to feet then multiply by meters then cm which is the equivalent of inches to feet but in centimeters
    cntmtrs = newm + newcm; //Adds converted values of feet and inches for total centimeters
}

void convMC(int& meters, int& cntmtrs, float& feet, float& inches) {
    
    float ft(3.2808), in(12.0), newft, newin;
    //Find in feet
    newft = meters * ft; //Multiply meters by ft to convert to feet
    newin = cntmtrs * 0.01 * ft; //Converts centimeters to meters then multiply it by ft to convert it to feet
    feet = newft + newin;
    
    //Find in inches
    newft = newft * in;
    newin = newin * in;
    inches = newft + newin;
}

void convPO(int& pounds, int& ounces, float& conv1, float& conv2) {
    
    //Declare variables
    float kg(2.2046), g(1000.0), oz(16.0), lb2; 
    //Convert to kg
    lb2 = ounces / oz;//Convert ounces to pounds
    conv1 = ((pounds + lb2) / kg); //Add pounds and oz(lbs equiv) together then converts to kilograms
    
    //Find grams
    conv2 = conv1 - floor(conv1); //Finds extra kg for conversion to grams
    conv2 = conv2 * g; //Converts the leftover kg to grams
    
}

void convKG(int& input1, int& input2, float& conv1, float& conv2) {
    
    //Declare variables
    float g(1000.0), oz(16.0), kg(2.2046), kg2;
    
    //Find in pounds
    kg2 = input2 / g; //Convert grams to kilograms
    conv1 = (input1 + kg2) * kg; //Add kg and grams then convert to pounds by * by (2.2046)
    
    //Find leftover in ounces
    conv2 = conv1 - floor(conv1); //Find remaining in ounces by subtracting round down value of pounds
    conv2 = conv2 * oz; //Convert the remaining into ounces
    
}

void output(int choice, int choice2, float input1, float input2, int output1, float output2) {
    
    if (choice == 1) {
        if (choice2 == 1) {
            cout << input1 << " feet and " << input2 << " inches = " << output1 << " meters or " << output2 << " centimeters." <<endl;
        } else {
            cout << input1 << " meters and " << input2 << " centimeters = " << output1 << " feet or " << output2 << " inches." <<endl;
            }
    } else {
        if (choice == 1) {
            cout << input1 << " pounds and " << input2 << " ounces = " << output1 << " kilograms and " << output2 << " grams." <<endl;
        } else {
            cout << input1 << " kilograms and " << input2 << " grams = " << output1 << " pounds and " << output2 << " ounces." <<endl;
            }
    }
}