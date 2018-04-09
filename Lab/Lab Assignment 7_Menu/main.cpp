/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 *
 * Created on April 7, 2018, 11:23 PM
 */

#include <iostream>
#include <cstdlib>
#include <math.h>

//Function declaration
int LtoG(int liters);
//Returns the amount of gas in gallons after being converted from liters
//Liters is the amount entered at the start of the program

int car(int liters, int miles);
//Returns the mpg for the car. First parameter is the liters, then second is the miles.
//Liters is converted to gallons, and then divided by miles.

int sPrice(int stocks, int whole, int numer, int denom);
//Computes value of a user's stock. 1st parameter is total number of stocks.
//Whole = Whole-Dollar price of stock.
//Numer = numerator, and denom = denominator for the fraction portion.

double rate(int curr, int prev);
//Gauge the rate of inflation for the past year
//First parament is the current value, prev is the previous year value

double rate(int curr, int prev);
//Gauge the rate of inflation for the past year
//First parament is the current value, prev is the previous year value

double yrate(int price, double rate);
//Find price of items in upcoming consecutive two years
//First parameter is the current price of the year
//Second parameter is the inflation rate of the item in terms of %

float interest(float rate, float initial, int months);
//Computes interest on a credit card account. 1st parameter = interest rate.
//Initial = Initial account balance, last parameter the number of months

//Universal gravitational constant
const double G = (6.673 * pow(10.0, -8.0));

//Function Declaration
double gForce(double mass1, double mass2, double d);
//Find gravitational attraction force between 2 masses. 1st parameter is
//mass of 1st thing and 2nd is mass of the 2nd. d = distance between the two masses

double hat(double weight, double height);
//Return hat size. First parameter is the weight in pounds
//second is height in inches ALL multiplied by 2.9

double jacket(double weight, double height, int age);
//return jacket size. First parameter is the weight in pounds
//second is height in inches and third is the age

double waist(double weight, double age);
//return waist size. First parameter is the weight in pounds
//second is height in inches

double max(double x, double y);
//Returns the product of two numbers
//1st parameter is the first integer and 2nd parameter is the 2nd

double max(double x, double y ,double z);
//Returns the product after subtracting y from x.
//1st parameter is the first integer, 2nd parameter is the 2nd, 3rd parameter is the third

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    char choice;
    
    //Loop of the menu
    do {
        //Input values
        cout << "Choose one from the list." <<endl;
        cout << "Type 0 to calculate car gas efficiency." <<endl;
        cout << "Type 1 to calculate the superior car gas efficiency between two cars." <<endl;
        cout << "Type 2 to find the value of your stocks." <<endl;
        cout << "Type 3 to find rate of inflation for 1 year." <<endl;
        cout << "Type 4 to find rate of inflation for upcoming 2 years." <<endl;
        cout << "Type 5 to compute interest on a credit card." <<endl;
        cout << "Type 6 to find gravitational attraction force between two body of masses." <<endl;
        cout << "Type 7 to find Annual After-Tax Cost of a New House for the 1st Year." <<endl;
        cout << "Type 8 to find your hat, jacket, and waist size." <<endl;
        cout << "Type 9 to test an overloading function of 3 numbers." <<endl;
        cout << "Type any other character to exit." <<endl;
        cin >> choice;
        
        //Switch to determine the problem
        switch(choice){
            case '0':
            {
                int miles, gallons, liters, mpg;
                char ans('y');
    
                //Start loop
                do {
                cout << "Enter the liters of gas used during the trip." <<endl;
                cin >> liters;
        
                cout << "Enter the miles traveled during the trip." <<endl;
                cin >> miles;
        
                //Function Call for LtoG(Liters to Gallons)
                gallons = LtoG(liters);
                //Compute miles per gallon
                mpg = miles/gallons;
        
                //Display output from inputs
                cout << "Your car gets " << mpg << " miles/gallon when using" << endl <<
                liters << " liters of gas going for " << miles << " miles." <<endl;
    
                //Output to continue loop?
                cout << "Try another?: ";
                cin >> ans;      
        
            } while (ans == 'y' || ans == 'Y');
            //End of loop
    
            //Function Closing Output
            cout << "Goodbye." <<endl;
            break;
            }
        case '1':
        {
            int miles, miles2, gallons, liters, liters2, mpg, mpg2;
            char ans('y');
    
            //Start loop
                do {
                //First car
                cout << "Enter the liters of gas for the first car." <<endl;
                cin >> liters;
        
                cout << "Enter the miles traveled for the first car." <<endl;
                cin >> miles;
        
                //Second car
                cout << "Enter the liters of gas for the second car." <<endl;
                cin >> liters2;
        
                cout << "Enter the miles traveled for the second car." <<endl;
                cin >> miles2;
        
                //Function Call for car to get mpg
                mpg = car(liters, miles);//First car
                mpg2 = car(liters2, miles2);//Second car
        
                //Display output from inputs
                cout << "The first car gets " << mpg << " miles/gallon while using " << liters << " liters of gas going for " << miles << " miles" << endl <<
                        " and the second car gets " << mpg2 << " miles/gallon while using " << liters2 << " liters of gas going for " << miles2 << " miles." <<endl;
            
                //Function to determine what output for the more fuel efficient car
                    if (mpg < mpg2)
                        cout << "Car 2 is more fuel efficient." <<endl;
                    else if (mpg > mpg2)
                        cout << "Car 1 is more fuel efficient." <<endl;
                    else if (mpg = mpg2)
                        cout << "Both cars have the same fuel efficiency." <<endl;
    
                //Output to continue loop?
                cout << "Try another?: ";
                cin >> ans;      
        
            } while (ans == 'y' || ans == 'Y');
            //End of loop
    
            //Function Closing Output
            cout << "Goodbye." <<endl;
            break;
        }
        case '2':
        {
            //Declare variables
            int stock, x, y, z, stockval;//stock=total shares of stock, x=whole, y=numerator, z=denominator, stockval = stock value
            char ans('y');//Set ans to y to start the loop
    
            do {
                //Start of program
                //Gather inputs
                cout << "Enter the total of owned shares." <<endl;
                cin >> stock;
                cout << "Enter the whole-dollar portion of the price." <<endl;
                cin >> x;
                cout << "Enter the numerator for the fraction portion of the price." <<endl;
                cin >> y;
                cout << "Enter the denominator for the fraction portion of the price." <<endl;
                cin >> z;
        
                //Function call of sPrice
                stockval = sPrice(stock, x, y, z);
        
                cout.setf(ios::fixed);
                cout.setf(ios::showpoint);
                cout.precision(3);
                //Display outputs from inputs
                cout << "The value of your stock is " << stockval << "." <<endl;
        
                //Output to continue loop?
                cout << "Try another?: ";
                cin >> ans;   
            } while (ans == 'y' || ans == 'Y');
            //End of loop
    
            //Function Closing Output
            cout << "Goodbye." <<endl;
            break;
        }
        case '3':
        {
            //Declare variables
            int current, previous;
            double inflation;
            char ans('y');
    
            do {
                cout << "Calculate the rate of inflation of an item for the past year." <<endl;
                cout << "Enter the price of the item currently." <<endl;
                cin >> current;
                cout << "Enter the price in previous year." <<endl;
                cin >> previous;
        
                cout.setf(ios::fixed);
                cout.setf(ios::showpoint);
                cout.precision(1);
        
                //Function call of rate
                inflation = rate(current, previous);
        
                cout << "The inflation rate for the item is %" << inflation << "." <<endl;
        
                //Continue loop?
                cout << "Try again?" <<endl;
                cin >> ans;
        
            } while (ans == 'y' || ans == 'Y');

                cout << "Goodbye." <<endl;
            break;
        }
        case '4':
        {   
            //Declare variables
    int current, previous;
    double inflation, year1, year2;
    char ans('y');
    
            do {
                cout << "Calculate the rate of inflation of an item for the past year." <<endl;
                cout << "Enter the price of the item currently." <<endl;
                cin >> current;
                cout << "Enter the price in previous year." <<endl;
                cin >> previous;
                int price = current;//Set price = current to compute into second function without inputing again
        
                cout.setf(ios::fixed);
                cout.setf(ios::showpoint);
                cout.precision(1);
        
                //Function call of rate
                inflation = rate(current, previous);
        
                cout << "The inflation rate for the item is %" << inflation << "." <<endl;
        
                //Function call of yrate
                year1 = yrate(price, inflation);
                year2 = yrate(year1, inflation);
        
                cout.precision(2);//Show two digits after decimal
                //Output inflation price for next two years
                cout << "The estimated price of the item in one year is: $" << year1 << "." <<endl;
                cout << "The estimated price of the item in two years is:  $" << year2 << "." <<endl;
        
                //Continue loop?
                cout << "Try again?" <<endl;
                cin >> ans;
        
                    } while (ans == 'y' || ans == 'Y');

                cout << "Goodbye." <<endl;
            break;
        }
        case '5':
        {
            //Declare variables
            float rate, initial;
            int months;
            char ans('Y');
    
            do {
                cout << "Enter your interest rate in terms of an integer(0-100). ";
                cin >> rate;
                cout << "Enter your current account balance." <<endl;
                cin >> initial;
                cout << "How many months will you take to pay?" <<endl;
                cin >> months;
        
                //Function call interest
                float pay = interest(rate, initial, months);
        
                cout.setf(ios::fixed);
                cout.setf(ios::showpoint);
                cout.precision(2);
                cout << "Total owed is $" << pay <<endl;
                cout << "Interest is $" << pay-initial <<endl;//subtract initial starting from total pay for the interest
        
                //Continue the loop?
                cout << "Try again?" <<endl;
                cin >> ans;
                    } while (ans == 'y' || ans == 'Y');
                    cout << "Goodbye." <<endl;
            break;
        }
        case '6':
        {   
            //Declare variables
            double mass1, mass2, d, FORCE;//FORCE = actual force
            char ans('y');
    
            do {
                cout << "Enter the mass of the first body." <<endl;
                cin >> mass1;
                cout << "Enter the mass of the second body." <<endl;
                cin >> mass2;
                cout << "Enter the distance between the two bodies." <<endl;
                cin >>  d;
        
                //Function call of gForce
                FORCE = gForce(mass1, mass2, d);
        
                //Inputs to outputs
                cout << "The gravitational force between the two bodies is " << FORCE << " Newtons." <<endl;
        
                //Keep loop going
                cout << "Try again?" <<endl;
                cin >> ans;
        
            } while (ans == 'y' || ans == 'Y');
                cout << "Goodbye." <<endl;
            break;
        }
        case '7':
        {
            cout << "Unfinished." <<endl;
            break;
        }
        case '8':
        {   
            //Declare variables
            int w, h, age, HAT, JACKET, WAIST;
            char ans('Y');
    
            //Start loop
            do {
                cout << "Enter your weight in pounds." <<endl;
                cin >> w;
                cout << "Enter your height in inches." <<endl;
                cin >> h;
                cout << "Enter your age as a whole number." <<endl;
                cin >> age;
        
                //Function Calls
                    HAT = hat(w, h);
                    JACKET = jacket(w, h, age);
                    WAIST = waist(w, age);
            
                    //Inputs to output
                    cout << "The hat size is " << HAT << ", jacket size is " << JACKET << ", and the waist size is " << WAIST << "." <<endl;
            
                //Continue loop?
                 cout << "Try another?" << endl;
                    cin >> ans;
            
            } while (ans == 'y' || ans == 'Y');
            cout << "Goodbye." <<endl;
            break;
        }
        case '9':
        {   
            //Declare variables
            double x, y, z, max1, max2;//max1 = 1st function; max2 = 2nd function
            char ans('Y');

            do {
                cout << "Enter the first number." <<endl;
                cin >> x;
                cout << "Enter the second number." <<endl;
                cin >> y;
                cout << "Enter the third number." <<endl;
                cin >> z;
        
                //Function call for both math functions
                max1 = max(x, y);
                max2 = max(x, y, z);
        
                //Determine which function is larger
                if (max1 > max2)
                    cout << max1 <<endl;
                else
                    cout << max2 <<endl;
    
                //Continue the loop?
                cout << "Try another?" <<endl;
                cin >> ans;
            } while (ans == 'y' || ans == 'Y');
            cout << "Goodbye." <<endl;
            break;
        }
        default:
            cout << "You are exiting the menu." <<endl; 
        }
    } while(choice >= '0' && choice <= '9');
    
    return 0;
}

//Function Definition for LtoG
int LtoG(int liters)
{
    const double LperG = 0.264179; //Global constant for liters per gallon
    return (liters * LperG);
}

//Function Definition for car
int car(int liters, int miles)
{
    int gallons;
    const double LperG = 0.264179; //Global constant for liters per gallon
    gallons = (liters * LperG);
    return (gallons/miles);
}

//Function definition for sPrice
int sPrice(int stock, int whole, int numer, int denom)
{
    double fraction;//fraction to compute stock
    double realval;//Real value of the stock
    fraction = whole + (static_cast<double>(numer)/denom);
    realval = stock * fraction;
    return realval;
}

//Function definition for rate
double rate(int curr, int prev)
{
    double Arate;//Actual inflation rate
    Arate = (static_cast<double>(curr)-prev)/(prev) * 100;
    return Arate;
}

//Function definition for yrate
double yrate(int price, double rate)
{
    double price1, newper;//Value for item in 1 year; newper=percent divided by 100
    newper = rate / 100.0;
    price1 = price * newper + price;
    return price1;
}

//Function definition for interest
float interest(float rate, float initial, int months)
{
    float total, newrate;//total = total have to pay, newrate converted from percent to a decimal
    newrate = (rate/12) / 100;
    total = initial * pow(1 + newrate, months);
    return total;
}

//Function Definition of hat
double hat(double weight, double height)
{
    return ((weight/height) * 2.9 );
}

//Function Definition of jacket
double jacket(double weight, double height, int age)
{
    int i;
    if (age >= 30)
    {
        if ((age % 10) != 0)
            age = age - (age % 10);
            i = (age - 30) / 10;
            return ((height * weight) / 288.0) + ((1.0 / 8.0) * i);
    }
}

//Function Definition of waist
double waist(double weight, double age)
{
    double h = weight / 5.7;
    if (age > 28) {
        h += (age - 28) / 2 * 0.1;
    }
    return h;
}

//Function Declaration of gForce
double gForce(double mass1, double mass2, double d)
{
    double GAF;//Gravitational Attractive Force
    GAF = (G * mass1 * mass2) / pow(d, 2.0);
    return GAF;
}

//Function Definition for 1st function max
double max(double x, double y)
{
    return (x * y);
}

double max (double x, double y, double z)
{
    return ((x-y)*z);
}