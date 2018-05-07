/* 
 * File:   main.cpp
 * Author: Johnny Thavisay
 * Created on April 29, 2018, 11:00 PM
 * Purpose:  Menu to be used in the Midterm, future homework and the Final
 *           Add System Libraries and Functions as needed.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants Only!

//Function Prototypes
void Menu();
int  getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set a Random number seed here.
    
    //Declare Main variables here.
    int inN;
    
    //Loop on each problem
    do{
        Menu();
        inN=getN();
        switch(inN){
            case 1:    problem1();break;
            case 2:    problem2();break;
            case 3:    problem3();break;
            case 4:    problem4();break;
            case 5:    problem5();break;
            case 6:    problem6();break;
            default:   def(inN);
	}
    }while(inN<7);

    //Exit Stage Right Here!
    return 0;
}

void Menu(){
    cout<<endl;
    cout<<"Type 1 to execute Problem 1"<<endl;
    cout<<"Type 2 to execute Problem 2"<<endl;
    cout<<"Type 3 to execute Problem 3"<<endl;
    cout<<"Type 4 to execute Problem 4"<<endl;
    cout<<"Type 5 to execute Problem 5"<<endl;
    cout<<"Type 6 to execute Problem 6"<<endl;
    cout<<"Type anything else to exit."<<endl<<endl;
}

int  getN(){
    int inN;
    cin>>inN;
    return inN;
}

void def(int inN){
    cout<<endl<<"Typing "<<inN<<" exits the program."<<endl;
}

void problem1(){
    
}

void problem2(){
    //Declare all Variables Here
    int digit1, digit2, digit3, digit4;
    
    //Input or initialize values Here
    cout<<"Create a histogram chart."<<endl;
    cout<<"Input 4 digits as characters."<<endl;
    cin >> digit1 >> digit2 >> digit3 >> digit4;

    
    //Histogram Here
    cout << digit4 << " ";
    if (digit4 > 0)
        for (int i = digit4; i > 0; i--) {
            cout << "*";
        } else {
            cout << " ";
        } 

    cout <<endl;
    cout << digit3 << " ";
    if (digit3 > 0)
        for (int i = digit3; i > 0; i--) {
            cout << "*";
        } else {
            cout << " ";
        }
    
    cout <<endl;
    cout << digit2 << " ";
    if (digit2 > 0)
        for (int i = digit2; i > 0; i--) {
            cout << "*";
        } else {
            cout << " ";
        }
    
    cout << endl;
    cout << digit1 << " ";
    if (digit1 > 0)
        for (int i = digit1; i > 0; i--) {
            cout << "*";
        } else {
        cout << " ";
        }
}

void problem3(){
     //Declare all Variables Here
    unsigned short number;
    int digit1,
        digit2,
        digit3,
        digit4;
    //Input or initialize values Here
    cout<<"Input an integer [1-3000] convert to an English Check value."<<endl;
    cin>>number;
    
    //Calculate the 1000's, 100's, 10's and 1's
    if (number >= 1000) {
    digit1 = number / 1000;
    }
    if (number >= 100) {
    digit2 = (number / 100) % 10;
    }
    if (number >= 10) {
    digit3 = (number % 100);
    }
    if (number >= 1) {
    digit4 = number % 10;
    }
    
    switch(digit1){
        case 1:
            cout << "One Thousand ";
            break;
        case 2:
            cout << "Two Thousand ";
            break;
        case 3:
            cout << "Three Thousand ";
            break;
        default:
            break;
    }
    
    switch(digit2){
        case 1:
            cout << "One Hundred ";
            break;
        case 2:
            cout << "Two Hundred ";
            break;
        case 3:
            cout << "Three Hundred ";
            break;
        case 4:
            cout << "Four Hundred ";
            break;
        case 5:
            cout << "Five Hundred ";
            break;
        case 6:
            cout << "Six Hundred ";
            break;
        case 7:
            cout << "Seven Hundred ";
            break;
        case 8:
            cout << "Eight Hundred ";
            break;
        case 9:
            cout << "Nine Hundred ";
            break;
        default:
            break;   
    }
    if (digit3 >= 11 && digit3 <= 19) {
        switch(digit3){
            case 11:
                cout << "Eleven ";
                break;
            case 12:
                cout << "Twelve ";
                break;
            case 13:
                cout << "Thirteen ";
                break;
            case 14:
                cout << "Fourteen ";
                break;
            case 15:
                cout << "Fifteen ";
                break;
            case 16:
                cout << "Sixteen ";
                break;
            case 17:
                cout << "Seventeen ";
                break;
            case 18:
                cout << "Eighteen ";
                break;
            case 19:
                cout << "Nineteen ";
                break;
            default:
                break;   
        }
 } else {
     digit3 = digit3 / 10;
     switch(digit3) {
         case 2:
             cout << "Twenty ";
             break;
         case 3:
             cout << "Thirty ";
             break;
         case 4:
             cout << "Forty ";
             break;
         case 5:
             cout << "Fifty ";
             break;
         case 6:
             cout << "Sixty ";
             break;
         case 7:
             cout << "Seventy ";
             break;
         case 8:
             cout << "Eighty ";
             break;
         case 9:
             cout << "Ninety ";
             break;
         default:
             break;
     }
 }
    switch(digit4){
        case 1:
            cout << "One ";
            break;
        case 2:
            cout << "Two ";
            break;
        case 3:
            cout << "Three ";
            break;
        case 4:
            cout << "Four ";
            break;
        case 5:
            cout << "Five ";
            break;
        case 6:
            cout << "Six ";
            break;
        case 7:
            cout << "Seven ";
            break;
        case 8:
            cout << "Eight ";
            break;
        case 9:
            cout << "Nine ";
            break;
        default:
            break;
    }
         
    //Output the check value
    cout<<"and no/100's Dollars"<<endl;
}

void problem4(){
    double total(char plan, int hours); 
    char package;
    unsigned short hours;
    double yourpay, packA, packB, packC, savingA, savingB, savingC;
    
    //Input or initialize values Here
    cout<<"ISP charges for service delivered."<<endl;
    cout<<"Input package A,B,C then hours used for the month"<<endl;
    cin>>package>>hours;
    package = toupper(package); //Convert package char to uppercase
    
    //Basic Charges
    yourpay = total(package, hours);
    packA = total('A', hours);
    packB = total('B', hours);
    packC = total('C', hours);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    //Output the Charge
    if ((yourpay <= packA) && (yourpay <= packB) && (yourpay <=packC))
    cout << "$" << yourpay << " " << package << " $0.00" <<endl;

    //Output the cheapest package and the savings
    savingA = yourpay - packA;
    savingB = yourpay - packB;
    savingC = yourpay - packC;
    if ((packA < yourpay) && (packA < packB) && (packA < packC) /*&& (savingA > savingB) && (savingA > savingC)*/) {
        cout << "$" << yourpay << " A " << "$" << savingA <<endl;
    }
    if ((packB < yourpay) && (packB < packC) && (packB < packA) /*&& (savingB > savingA) && (savingB > savingC)*/) {
        cout << "$" << yourpay << " B " << "$" << savingB <<endl;
    }
    if ((packC < yourpay) && (packC < packA) && (packC < packB) /*&& (savingC > savingB) && (savingC > savingA)*/) {
        cout << "$" << yourpay << " C " << "$" << savingC <<endl;
    }
    
}
double total(char plan, int hours) {
    double flat;
    switch (plan) {
            case 'A':
            flat = 16.99;
                if (hours > 10 && hours <= 20)
                    flat = (flat + ((hours - 10) * 0.95));
                if (hours > 20)
                    flat = ((flat + 9.50) + ((hours - 20) * 0.85));
            break;
        case 'B':
            flat = 26.99;
                if (hours > 20 && hours <= 30)
                    flat = (flat + ((hours - 10) * 0.74));
                if (hours > 30)
                    flat = ((flat + 7.40) + ((hours - 30) * 0.64));
            break;
        case 'C':
            flat = 36.99;
            break;
    } 
    return flat;
}

void problem5(){
    //Declare all Variables Here
    float payRate;
    unsigned short hrsWrkd;
    float gross;
    
    //Input or initialize values Here
    cout<<"Paycheck Calculation."<<endl;
    cout<<"Input payRate in $'s/hour and hours worked"<<endl;
    cin>>payRate>>hrsWrkd;
    
    //Calculate Paycheck
    cout.setf(ios::showpoint);
    cout.setf(ios::fixed);
    cout.precision(2);
    
    if (hrsWrkd <= 20) {
        gross = payRate * hrsWrkd;
    }
    if (hrsWrkd > 20 && hrsWrkd <= 40) {
        gross = payRate * (20);//Calculates first 20 hours
        gross = gross + ((hrsWrkd - 20) * (payRate * 1.5));//Adds first 20 hours with excess of 20hrs but less than 40
    }
    if (hrsWrkd > 40) {
        gross = payRate * (20);
        gross = gross + (20 * (payRate * 1.5));//Adds first 20 hours with next 20hrs as OT
        gross = gross + ((hrsWrkd - 40) * (payRate * 2)); //Adds the final double OT amount
    }

    
    //Output the check
    cout << "$" << gross <<endl;
}

void problem6(){
    
}