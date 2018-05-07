/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 *
 * Created on May 6, 2018, 10:19 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//User Libraries

//Global Constants Only!

//Function Prototypes
void Menu();
int  getN();
void def(int);
void problem1();
    float Average(double s1, double s2, double s3, double s4);
    //Average of four scores user inputs

    float StdDev(double s1, double s2, double s3, double s4, double avg);
    //First 4 parameters are what user inputs and avg contains the average
    //of the four numbers
    //Computes the standard deviation of the first four parameters
void problem2();
    void input2(double& input1, double& input2);
    //Retrieves two inputs for feet and inches

    void convert2(double& ft, double& in, double& meters, double& cntmtrs);
    //Converts feet and inches to meters and centimeters
    //First parameter is feet, second is inches
    //Returns meters and centimeters

    void output2(double ft, double in, double meters, double cntmtrs);
    //Outputs the conversion
    //First parameter is feet, second is inches, third meters, fourth centimeters
void problem3();
    void input3(double& input1, double& input2);
    //Retrieves two inputs for feet and inches

    void convert3(double& meters, double& cntmtrs, double& feet, double& inches);
    //Converts meters and centimeters to feet and inches
    //First parameter is feet, second is inches
    //Returns meters and centimeters

    void output3(double meters, double cntmtrs, double feet, double inches);
    //Outputs the conversion
    //First parameter is meters, second is centimeters, third feet, fourth inches
void problem4();
    void input4(int choice, float& input1, float& input2);
    //Retrieve input to convert from feet and inches or meters and centimeters
    //Retrieves two inputs for conversion

    void convFI4(float& ft, float& in, float& meters, float& cntmtrs);
    //Converts feet and inches to meters and centimeters
    //First parameter is feet, second is inches
    //Returns meters and centimeters

    void convMC4(float& meters, float& cntmtrs, float& feet, float& inches);
    //Converts meters and centimeters to feet or inches
    //First parameter is feet, second is inches
    //Returns meters and centimeters

    void output4(int choice, float input1, float input2, int output1, float output2);
    //Outputs the conversion
void problem5();
    void input5(int& input1, int& input2);
    //Retrieves user's inputted values to convert to Kilograms and grams
    //First parameter is pounds, second ounces

    void convert5(int& input1, int& input2, float& conv1, float& conv2);
    //Converts pounds & ounces to kilograms and grams
    //First parameter is pounds, second ounces, third kilograms, fourth grams

    void output5(int input1, int input2, int conv1, float conv2);
    //Outputs the results
    //First and second parameter is what user inputted
    //Third and fourth parameter is the new converted values
void problem6();
    void input6(int& input1, int& input2);
    //Retrieves user's inputted values to convert to Kilograms and grams
    //First parameter is kilograms, second grams

    void convert6(int& input1, int& input2, float& conv1, float& conv2);
    //Converts pounds & ounces to kilograms and grams
    //First parameter is kilograms, second grams, third pounds, fourth ounces

    void output6(int input1, int input2, int conv1, float conv2);
    //Outputs the results
    //First and second parameter is what user inputted
    //Third and fourth parameter is the new converted values
void problem7();
    void input7(int choice, int& input1, int& input2);
    //Retrieve input to convert from pounds and ounces or kilograms and grams
    //Retrieves two inputs for conversion

    void convPO7(int& pounds, int& ounces, float& conv1, float& conv2); //Pounds & Ounces
    //Converts pounds and ounces to kilograms and grams
    //First parameter is pounds, second is ounces
    //Returns kilograms and grams

    void convKG7(int& kilo, int& grams, float& conv1, float& conv2); //Kilograms & Grams
    //Converts kilograms and grams to pounds or ounces
    //First parameter is pounds, second is ounces
    //Returns pounds and ounces

    void output7(int choice, int input1, int input2, int output1, float output2);
    //Outputs the conversion
void problem8();
    void input8(int& choice, int& choice2, int& input1, int& input2);
    //Retrieve input to decide on which conversion measurement to do
    //Get 2nd input for which specific conversion
    //Retrieves two inputs for conversion

    void convFI8(int& ft, int& in, float& meters, float& cntmtrs);
    //Converts feet and inches to meters and centimeters
    //First parameter is feet, second is inches
    //Returns meters and centimeters

    void convMC8(int& meters, int& cntmtrs, float& feet, float& inches);
    //Converts meters and centimeters to feet or inches
    //First parameter is feet, second is inches
    //Returns meters and centimeters

    void convPO8(int& pounds, int& ounces, float& conv1, float& conv2); //Pounds & Ounces
    //Converts pounds and ounces to kilograms and grams
    //First parameter is pounds, second is ounces
    //Returns kilograms and grams

    void convKG8(int& kilo, int& grams, float& conv1, float& conv2); //Kilograms & Grams
    //Converts kilograms and grams to pounds or ounces
    //First parameter is pounds, second is ounces
    //Returns pounds and ounces

    void output8(int choice, int choice2, float input1, float input2, int output1, float output2);
    //Outputs the conversion
void problem9();
    void input9(int& input1, int& input2, int& input3);
    //User chose to run the program
    //Each parameter is the length of each side

    void shape9(int input1, int input2, int input3, float& area, float& prmtr);
    //Calculates area and perimeter of triangle from the 3 parameters in input function
    //Check if input1 + input2 = input3
    //If not, not a legal triangle

    void output9(int input1, int input2, int input3, float area, float prmtr);
    //Output the results after calculating area and perimeter

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
            case 7:    problem7();break;
            case 8:    problem8();break;
            case 9:    problem9();break;
            default:   def(inN);
	}
    }while(inN >= 1 && inN <= 9);

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
    cout<<"Type 7 to execute Problem 7"<<endl;
    cout<<"Type 8 to execute Problem 8"<<endl;
    cout<<"Type 9 to execute Problem 9"<<endl;
    cout<<"Type 0 to exit."<<endl<<endl;
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
    double s1, s2, s3, s4;
    double avg, stdev;
    char ans('Y');
    
    cout << "Find the standard deviation of four scores." <<endl;
    
    do {
        cout << "Enter the four scores." <<endl;
        cin >> s1 >> s2 >> s3 >> s4;
        avg = Average(s1, s2, s3, s4); //Calls the average function to compute the average of the four scores
        stdev = StdDev(s1, s2, s3, s4, avg); //Calls to Standard Deviation function for the value
        
        cout << "The average is " << avg << " and the standard deviation is " << stdev << "." <<endl;
        
        cout << "Try four more numbers?" <<endl;
        cout << "Y or N" <<endl;
        cin >> ans;
    } while (ans == 'Y' || ans == 'y');
    
    cout << "Goodbye." <<endl;
}

float Average(double s1, double s2, double s3, double s4) {
    return (s1+s2+s3+s4)/4;
}

float StdDev(double s1, double s2, double s3, double s4, double avg) {
    return sqrt((pow(s1-avg, 2) + pow(s2-avg, 2) + pow(s3-avg, 2) + pow(s4-avg, 2)) / 4);
}

void problem2(){
    //Declare variables
    double main, secondary, meters, cnmtrs; //Main equals the foot inputted and secondary is inches
    char ans;
    do {
        cout << "Convert feet & inches to meters and centimeters." <<endl;
        input2(main, secondary); //Calls for input function
        convert2(main, secondary, meters, cnmtrs); //Calls for convert function to convert it to meters and centimeters
        output2(main, secondary, meters, cnmtrs); //Calls for output function for the output
        
        cout << "Try another?" <<endl;
        cin >> ans;
    } while (ans == 'Y' || ans == 'y');
    
    cout << "Goodbye." <<endl;
}

void input2(double& input1, double& input2 ) { 
    //Function Definition
    cout << "Input feet then inches." <<endl;
    cin >> input1 >> input2;
}

void convert2(double& ft, double& in, double& meters, double& cntmtrs) {
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
void output2(double ft, double in, double meters, double cntmtrs) {
    cout.setf(ios::showpoint);
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << ft << " feet and " << in << " inches = " << meters << " meters or " << cntmtrs << " centimeters." <<endl;
}


void problem3(){
    //Declare variables
    double main, secondary, feet, inches; //Main equals the meters inputted and secondary is centimeters
    char ans;
    do {
        cout << "Convert feet & inches to meters and centimeters." <<endl;
        input3(main, secondary); //Calls for input function
        convert3(main, secondary, feet, inches); //Calls for convert function to convert it to feet and ainches
        output3(main, secondary, feet, inches); //Calls for output function for the output
        
        cout << "Try another?" <<endl;
        cin >> ans;
    } while (ans == 'Y' || ans == 'y');
    
    cout << "Goodbye." <<endl;
}

void input3(double& input1, double& input2 ) { 
    //Function Definition
    cout << "Input feet then inches." <<endl;
    cin >> input1 >> input2;
}

void convert3(double& meters, double& cntmtrs, double& feet, double& inches) {
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
void output3(double meters, double cntmtrs, double feet, double inches) {
    cout.setf(ios::showpoint);
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << meters << " meters and " << cntmtrs << " centimeters = " << feet << " feet or " << inches << " inches." <<endl;
}

void problem4(){
    int choice;
    float input1, input2;
    char ans;
    
    do {
        //Calls the input function to begin the dialogue
        input4(choice, input1, input2);
        
        //Asks to loop the program
        cout << "Try another?" <<endl;
        cin >> ans;
        
    } while (ans == 'Y' || ans == 'y');
    
    cout << "Goodbye." <<endl;
    
}

void input4(int choice, float& input1, float& input2) {
    
    float conv1, conv2;//conv1-2 are the converted values to output
    cout << "Type 1 to convert feet & inches to meters and centimeters" <<endl;
    cout << "or 2 for meters & centimeters to feet & inches." <<endl;
    
    cin >> choice; //
    
    
    if (choice == 1) {
            //If choice = 1 calls the Feet & Inches conversion
            cout << "Type in the feet then inches." <<endl;
            cin >> input1 >> input2;
            convFI4(input1, input2, conv1, conv2); 
            
        } else {
            //If choice = 2 calls the Meters & Centimeters conversion
            cout << "Type in the meters then centimters." <<endl;
            cin >> input1 >> input2;
            convMC4(input1, input2, conv1, conv2);
        }
    
        //Call the output function
        output4(choice, input1, input2, conv1, conv2);
}

void convFI4(float& ft, float& in, float& meters, float& cntmtrs) {
    
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

void convMC4(float& meters, float& cntmtrs, float& feet, float& inches) {
    
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

void output4(int choice, float input1, float input2, int output1, float output2) {
    
    cout.setf(ios::showpoint);
    cout.setf(ios::fixed);
    cout.precision(2);
    
    if (choice == 1) {
        cout << input1 << " feet and " << input2 << " inches = " << output1 << " meters or " << output2 << " centimeters." <<endl;
    } else {
        cout << input1 << " meters and " << input2 << " centimeters = " << output1 << " feet or " << output2 << " inches." <<endl;
    }
}

void problem5(){
    //Declare variables
    int lb, ounce;
    float kg, grams;
    char ans;
    
    do {
        
        input5(lb, ounce); //Calls input function
        convert5(lb, ounce, kg, grams); //Converts the inputs to kg & g
        output5(lb, ounce, kg, grams); //Calls output function
        
        cout << "Do another?" <<endl;
        cin >> ans;
        
    } while (ans == 'Y' || ans == 'y');
    
    cout << "Goodbye." <<endl;
    
}

void input5(int& input1, int& input2) {
    //Start the beginning of the program
    cout << "Please enter pounds then ounces to convert to kilograms and grams." <<endl;
    cin >> input1 >> input2;
    
}

void convert5(int& input1, int& input2, float& conv1, float& conv2) {
    //Declare variables
    float kg(2.2046), g(1000.0), oz(16.0), lb2;
    //Convert to kg
    lb2 = input2 / oz;//Convert ounces to pounds
    conv1 = ((input1 + lb2) / kg); //Add pounds and oz(lbs equiv) together then converts to kilograms
    
    //Find grams
    conv2 = conv1 - floor(conv1); //Finds extra kg for conversion to grams
    conv2 = conv2 * g; //Converts the leftover kg to grams
    
}

void output5(int input1, int input2, int conv1, float conv2) {
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    
    cout << input1 << " pounds and " << input2 << " ounces = " << conv1 << " kilograms and " << conv2 << " grams." <<endl;
}

void problem6(){
    //Declare variables
    int kg, grams; 
    float lb, ounces;
    char ans;
    
    do {
        
        input6(kg, grams); //Calls input function
        convert6(kg, grams, lb, ounces); //Converts the inputs to kg & g
        output6(kg, grams, lb, ounces); //Calls output function
        
        cout << "Do another?" <<endl;
        cin >> ans;
        
    } while (ans == 'Y' || ans == 'y');
    
    cout << "Goodbye." <<endl;

}

void input6(int& input1, int& input2) {
    //Start the beginning of the program
    cout << "Please enter kilograms then grams to convert to pounds and ounces." <<endl;
    cin >> input1 >> input2;
}

void convert6(int& input1, int& input2, float& conv1, float& conv2) {
    //Declare variables
    float g(1000.0), oz(16.0), kg(2.2046), kg2;
    
    //Find in pounds
    kg2 = input2 / g; //Convert grams to kilograms
    conv1 = (input1 + kg2) * kg; //Add kg and grams then convert to pounds by * by (2.2046)
    
    //Find leftover in ounces
    conv2 = conv1 - floor(conv1); //Find remaining in ounces by subtracting round down value of pounds
    conv2 = conv2 * oz; //Convert the remaining into ounces
}

void output6(int input1, int input2, int conv1, float conv2) {
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(4);
    
    cout << input1 << " kilograms and " << input2 << " grams = " << conv1 << " pounds and " << conv2 << " ounces." <<endl;
}

void problem7(){
    //Declare variables
    int choice, input1, input2;
    char ans;
    
    do {
        //Calls the input function to begin the dialogue
        input7(choice, input1, input2);
        
        //Asks to loop the program
        cout << "Try another?" <<endl;
        cin >> ans;
        
    } while (ans == 'Y' || ans == 'y');
    
    cout << "Goodbye." <<endl;
    
}

void input7(int choice, int& input1, int& input2) {
    //Declare variables
    float conv1, conv2;//conv1-2 are the converted values to output
    
    cout << "Type 1 to convert pounds & ounces to kilograms and grams" <<endl;
    cout << "or 2 for kilograms & grams to pounds & ounces." <<endl;
    
    cin >> choice; 
    
    
    if (choice == 1) {
            //If choice = 1 calls the Pounds & Ounces conversion
            cout << "Type in the pounds then ounces." <<endl;
            cin >> input1 >> input2;
            convPO7(input1, input2, conv1, conv2); 
            
        } else {
            //If choice = 2 calls the Kilograms & Grams conversion
            cout << "Type in the kilograms then centimeters." <<endl;
            cin >> input1 >> input2;
            convKG7(input1, input2, conv1, conv2);
        }
    
        //Call the output function
        output7(choice, input1, input2, conv1, conv2);
}

void convPO7(int& input1, int& input2, float& conv1, float& conv2) {
    
    //Declare variables
    float kg(2.2046), g(1000.0), oz(16.0), lb2; 
    //Convert to kg
    lb2 = input2 / oz;//Convert ounces to pounds
    conv1 = ((input1 + lb2) / kg); //Add pounds and oz(lbs equiv) together then converts to kilograms
    
    //Find grams
    conv2 = conv1 - floor(conv1); //Finds extra kg for conversion to grams
    conv2 = conv2 * g; //Converts the leftover kg to grams
    
}

void convKG7(int& input1, int& input2, float& conv1, float& conv2) {
    
    //Declare variables
    float g(1000.0), oz(16.0), kg(2.2046), kg2;
    
    //Find in pounds
    kg2 = input2 / g; //Convert grams to kilograms
    conv1 = (input1 + kg2) * kg; //Add kg and grams then convert to pounds by * by (2.2046)
    
    //Find leftover in ounces
    conv2 = conv1 - floor(conv1); //Find remaining in ounces by subtracting round down value of pounds
    conv2 = conv2 * oz; //Convert the remaining into ounces
    
}

void output7(int choice, int input1, int input2, int output1, float output2) {
    
    cout.setf(ios::showpoint);
    cout.setf(ios::fixed);
    cout.precision(2);
    
    if (choice == 1) {
        cout << input1 << " pounds and " << input2 << " ounces = " << output1 << " kilograms or " << output2 << " grams." <<endl;
    } else {
        cout << input1 << " kilograms and " << input2 << " grams = " << output1 << " pounds or " << output2 << " ounces." <<endl;
    }
    
}

void problem8(){
    int choice, choice2, input1, input2;
    float conv1, conv2;
    char ans;
    
    do {
        //Calls the input function to begin the dialogue
        input8(choice, choice2, input1, input2);
        
        //Asks to loop the program
        cout << "Try another?" <<endl;
        cin >> ans;
        
    } while (ans == 'Y' || ans == 'y');
    
    cout << "Goodbye." <<endl;
    
}

void input8(int& choice, int& choice2, int& input1, int& input2) {
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
            
            convFI8(input1, input2, conv1, conv2); 

        } else {
            //If choice = 2 calls the Meters & Centimeters conversion
            cout << "Type in the meters then centimeters." <<endl;
            cin >> input1 >> input2;
            
            convMC8(input1, input2, conv1, conv2);
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
            
            convPO8(input1, input2, conv1, conv2); 
            
        } else {
            //If choice = 2 calls the Kilograms & Grams conversion
            cout << "Type in the kilograms then grams." <<endl;
            cin >> input1 >> input2;
            
            convKG8(input1, input2, conv1, conv2);
        }
    }
    
        //Calls for output function
        output8(choice, choice2, input1, input2, conv1, conv2);
}

void convFI8(int& ft, int& in, float& meters, float& cntmtrs) {
    
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

void convMC8(int& meters, int& cntmtrs, float& feet, float& inches) {
    
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

void convPO8(int& pounds, int& ounces, float& conv1, float& conv2) {
    
    //Declare variables
    float kg(2.2046), g(1000.0), oz(16.0), lb2; 
    //Convert to kg
    lb2 = ounces / oz;//Convert ounces to pounds
    conv1 = ((pounds + lb2) / kg); //Add pounds and oz(lbs equiv) together then converts to kilograms
    
    //Find grams
    conv2 = conv1 - floor(conv1); //Finds extra kg for conversion to grams
    conv2 = conv2 * g; //Converts the leftover kg to grams
    
}

void convKG8(int& input1, int& input2, float& conv1, float& conv2) {
    
    //Declare variables
    float g(1000.0), oz(16.0), kg(2.2046), kg2;
    
    //Find in pounds
    kg2 = input2 / g; //Convert grams to kilograms
    conv1 = (input1 + kg2) * kg; //Add kg and grams then convert to pounds by * by (2.2046)
    
    //Find leftover in ounces
    conv2 = conv1 - floor(conv1); //Find remaining in ounces by subtracting round down value of pounds
    conv2 = conv2 * oz; //Convert the remaining into ounces
    
}

void output8(int choice, int choice2, float input1, float input2, int output1, float output2) {
    
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

void problem9(){
    //Declare variables
    int input1, input2, input3, input12, input32; //input12 is a^2+b^2 & input32 is c^2
    float area, prmtr;
    char ans;
    
    do {
        //Call for input function
        input9(input1, input2, input3);
        
        //Checks for legal triangle
        input12 = pow(input1, 2.0) + pow(input2, 2.0); //a^2 + b^2 pythagorean theorem
        input32 = pow(input3, 2.0); //c^2 pythagorean theorem
        
        if (input32 != input12) {
            cout << "Not a valid triangle!" <<endl;
            break;
        }
        
        //Valid triangle gets computed
        //Call shape function to calculate area and perimeter
        shape9(input1, input2, input3, area, prmtr);
        
        //Call output function to display the results
        output9(input1, input2, input3, area, prmtr);
        
    } while (ans == 'Y' || ans == 'y');
    
}

void input9(int& input1, int& input2, int& input3) {
    
    cout << "Enter first number: ";
    cin >> input1;
    cout << "Second number: ";
    cin >> input2;
    cout << "Third number: ";
    cin >> input3;
    
}

void shape9(int input1, int input2, int input3, float& area, float& prmtr) {
    //Declare variables
    float s; //s is the semi-perimeter
    
    s = (input1 + input2 + input3) / 2;
    area = sqrt(s * (s-input1)*(s-input2)*(s-input3));
    prmtr = input1 + input2 + input3;
    
}

void output9(int input1, int input2, int input3, float area, float prmtr) {
    
    cout << input1 << "," << input2 << "," << input3 << " has ";
    cout << area << " = area and " << prmtr << " = perimeter." <<endl;
    
}