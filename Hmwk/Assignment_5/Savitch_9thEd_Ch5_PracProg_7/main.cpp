/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 *
 * Created on May 6, 2018, 6:29 PM
 */

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

void input(int choice, int& input1, int& input2);
//Retrieve input to convert from pounds and ounces or kilograms and grams
//Retrieves two inputs for conversion

void convPO(int& pounds, int& ounces, float& conv1, float& conv2); //Pounds & Ounces
//Converts pounds and ounces to kilograms and grams
//First parameter is pounds, second is ounces
//Returns kilograms and grams

void convKG(int& kilo, int& grams, float& conv1, float& conv2); //Kilograms & Grams
//Converts kilograms and grams to pounds or ounces
//First parameter is pounds, second is ounces
//Returns pounds and ounces

void output(int choice, int input1, int input2, int output1, float output2);
//Outputs the conversion

int main(int argc, char** argv) {
    //Declare variables
    int choice, input1, input2;
    char ans;
    
    do {
        //Calls the input function to begin the dialogue
        input(choice, input1, input2);
        
        //Asks to loop the program
        cout << "Try another?" <<endl;
        cin >> ans;
        
    } while (ans == 'Y' || ans == 'y');
    
    cout << "Goodbye." <<endl;
    
    return 0;
}

void input(int choice, int& input1, int& input2) {
    //Declare variables
    float conv1, conv2;//conv1-2 are the converted values to output
    
    cout << "Type 1 to convert pounds & ounces to kilograms and grams" <<endl;
    cout << "or 2 for kilograms & grams to pounds & ounces." <<endl;
    
    cin >> choice; 
    
    
    if (choice == 1) {
            //If choice = 1 calls the Pounds & Ounces conversion
            cout << "Type in the pounds then ounces." <<endl;
            cin >> input1 >> input2;
            convPO(input1, input2, conv1, conv2); 
            
        } else {
            //If choice = 2 calls the Kilograms & Grams conversion
            cout << "Type in the kilograms then centimeters." <<endl;
            cin >> input1 >> input2;
            convKG(input1, input2, conv1, conv2);
        }
    
        //Call the output function
        output(choice, input1, input2, conv1, conv2);
}

void convPO(int& input1, int& input2, float& conv1, float& conv2) {
    
    //Declare variables
    float kg(2.2046), g(1000.0), oz(16.0), lb2; 
    //Convert to kg
    lb2 = input2 / oz;//Convert ounces to pounds
    conv1 = ((input1 + lb2) / kg); //Add pounds and oz(lbs equiv) together then converts to kilograms
    
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

void output(int choice, int input1, int input2, int output1, float output2) {
    
    cout.setf(ios::showpoint);
    cout.setf(ios::fixed);
    cout.precision(2);
    
    if (choice == 1) {
        cout << input1 << " pounds and " << input2 << " ounces = " << output1 << " kilograms or " << output2 << " grams." <<endl;
    } else {
        cout << input1 << " kilograms and " << input2 << " grams = " << output1 << " pounds or " << output2 << " ounces." <<endl;
    }
    
}

