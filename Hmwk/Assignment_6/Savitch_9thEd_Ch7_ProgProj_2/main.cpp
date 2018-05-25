/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 * Read two hexadecimal numbers from user. Then find and display the sum up to 10 digits.
 * Created on May 24, 2018, 11:43 PM
 */

#include <iostream>
#include <cstdlib>

using namespace std;
//Constant Declaration
const int MAX_DIGITS(10);

//Function prototypes
void input(char hex[MAX_DIGITS]);

void output(char hex[MAX_DIGITS]);
//Pre-condition: Accepts an array of chars as a parameters
//Post-condition: Prints the chars in reverse order as a hexadecimal number

void hex_sum(char hex1[MAX_DIGITS], char hex2[MAX_DIGITS], char hex_sum[MAX_DIGITS]);
//Pre-condition: Reads 2 inputted hexadecimal values from the user
//Post-condition: Shows the sum of both numbers up to 10 digits

int main(int argc, char** argv) {
    //Declare variables
    char ans;
    char hex1[MAX_DIGITS]={'0'};
    char hex2[MAX_DIGITS]={'0'};
    char hexsum[MAX_DIGITS]={'0'};
    
    do {
        //Prompt user to enter two hexadecimal numbers
        cout << "Enter two hexadecimal numbers with the same number of digits (up to 10)." <<endl;
        //First input
        input(hex1);
        //Second input
        input(hex2);
        //Call the sum function
        hex_sum(hex1, hex2, hexsum);
        //Output the first, second, and sum of the hexadecimal numbers
        cout << "Sum of "; output(hex1); 
        cout << " and "; output(hex2); 
        cout << " is: "; output(hexsum); 
        cout <<endl;
        
        cout << "Try different numbers? (y/n)" <<endl;
        cin >> ans;
        cin.ignore();
    } while (ans == 'Y' || ans == 'y');
    cout << "Goodbye." <<endl;
    return 0;
}

void input(char hex[MAX_DIGITS]) {
    //Local variables
    char ch('0');
    int i(0);
    
    while ((ch=cin.peek()) !='i' && i < MAX_DIGITS) {
        //Store the current character into the array
        hex[i] = ch;
        i++;
        cin >> ch;
    }
    cin.ignore();
    //Reverse the digits
    for (int k=0; k<i/2; k++) {
        char temp = hex[k];
        hex[k]=hex[i - 1 - k];
        hex[i - 1 - k] = temp;
    }
}

void output(char hex[MAX_DIGITS]) {
    //Print the hexadecimal number
    for (int i=MAX_DIGITS-1; i >=0; i--) {
        if (hex[i] != 0)
            cout << hex[i];
    } //End for loop
}

void hex_sum(char hex1[MAX_DIGITS], char hex2[MAX_DIGITS], char hex_sum[MAX_DIGITS]) {
    // Local variables
    int num1, num2, sum;
    int carry1(0), carry2(0);
    char temp;
    
    for (int i=0; i < MAX_DIGITS; i++) {
        //Verify if the hexadigits is n between 0 and 9
        if (hex1[i] >= '0' && hex1[i] < '0' + 10) {
            //Get the hexadecimal from first array
            num1 = hex1[i] - '0';
        } else {
            //Convert current character to upper case
            temp = toupper(hex1[i]);
            //verify if the hexadigit is n between A and F
            if (temp >= 'A' && temp <= 'F') {
                //Get hexadecimal from the first array
                num1 = temp - 'A' + 10;
            } else {
                //Exit if an invalid character is found
                cout << "Invalid input!" <<endl;
                system("pause");
                exit(EXIT_FAILURE);
            }
        }
            //Verify if the current hexadigit is in between 0 and 9
            if (hex2[i] >= '0' && hex2[i] < '0' + 10) {
                //Get the hexadecimal from the second array
                num2  = hex2[i] - '0';
            } else {
                //Convert current character to upper case
                temp = toupper(hex2[i]);
                //Verify if the hexadigit is between 0 and 9
                if (temp >= 'A' && temp <= 'F') {
                    //Get the hexadecimal from the second array
                    num2 = temp - 'A' + 10;
                } else {
                    //Exit if an invalid character is found
                    cout << "Invalid input!" <<endl;
                    system("pause");
                    exit(EXIT_FAILURE);
                }
            }
                carry1 = carry2;
                //Calculate the value of sum
                sum = (num1 + num2 + carry1) % 16;
                //Calculate the value of carry 2
                carry2 = (num1 + num2 + carry1) / 16;
                //Verify if the sum is between 0 and 10
                if (sum >= 0 && sum < 10) {
                    hex_sum[i] = char('0' + sum);
                }
                //Verify if the sum is between 10 and 15
                else if (sum >= 10 && sum <= 15) {
                    hex_sum[i] = char('A' + sum - 10);
                }
    }
    //Verify if the result has more than 10 digits
    if (carry1 == 1 & carry2 == 1) {
        //Output the error message to the user
        cout << "!Addition Overflow!" <<endl;
        //Set all digits of the result to -1
        for (int i = MAX_DIGITS - 1; i>=0; i--) {
            hex_sum[i] = -1;
        }
    }
}