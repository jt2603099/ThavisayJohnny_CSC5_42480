/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 *
 * Created on March 8, 2018, 12:14 AM
 */

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    string first_name_or_last_name_instructor, your_name, a_food, number_between_100_and_120, an_adjective, a_color, an_animal;
    
    //Dialogue to the game
    cout <<"Let's play a game of Mad Lib."<<endl;
    cout <<"Enter the first or last name of your instructor"<<endl;
    cin >> first_name_or_last_name_instructor;
    
    cout <<"Enter your name"<<endl;
    cin >> your_name;
    
    cout <<"Enter a food"<<endl;
    cin >> a_food;
    
    cout <<"Enter a number between 100 and 120"<<endl;
    cin >> number_between_100_and_120;
    
    cout <<"Enter an adjective"<<endl;
    cin >> an_adjective;
    
    cout <<"Enter a color"<<endl;
    cin >> a_color;
    
    cout <<"Enter an animal"<<endl;
    cin >> an_animal;
    
    cout <<"Here is your story."<<endl<<endl;
    
    //Outputs to monitor
    cout << "Dear Instructor " << first_name_or_last_name_instructor << ","<<endl<<endl;
    cout << "I am sorry that I am unable to turn in my homework at this time. First,"<<endl;
    cout << "I ate a rotten " << a_food << ", which made me turn " << a_color << " and extremely ill. I"<<endl;
    cout << "came down with a fever of " << number_between_100_and_120 << ". Next, my " << an_adjective << "pet"<<endl;
    cout << an_animal << "must have smelled the remains of the " << a_food << "on my homework,"<<endl;
    cout << "because he ate it. I am currently rewriting my homework and hope you"<<endl;
    cout << "will accept it late."<<endl<<endl;
    cout << "Sincerely,"<<endl;
    cout << your_name;
    
    
    
    

    return 0;
}

