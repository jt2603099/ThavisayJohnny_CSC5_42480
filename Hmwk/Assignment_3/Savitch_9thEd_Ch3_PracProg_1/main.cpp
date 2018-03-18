/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 * Rock, Paper, Scissors
 * Created on March 17, 2018, 9:23 PM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    char user1, user2, ans;
    
    cout << "Two-User game of Rock, Paper Scissors." <<endl;
    
    do {
    //Player 1
    cout << "Use 'r' for Rock, 'p' for Paper, 's' for Scissor." <<endl;
    cout << "User 1, please enter a choice: " <<endl;
    cin >> user1;
    
    //Player 2
    cout << "User 2, please enter a choice: " <<endl;
    cin >> user2;
    
    switch (user1) {
        case 'r':
        case 'R':
            if (user2 == 'r' || user2 == 'R') 
            { 
                cout << "User 1 ties with User 2, Rock matches Rock." <<endl;
                break;
            }
            if (user2 == 'p' || user2 == 'P') 
            {
                cout << "User 2 is the winner, Paper beats Rock." <<endl;
                break;
            }
            if (user2 == 's' || user2 == 'S') 
            {
                cout << "User 1 is the winner, Rock beats Scissor." <<endl;
                break;
            }
        case 'p':
        case 'P':
            if (user2 == 'r' || user2 == 'R')
            {
                cout << "User 1 is the winner, Paper beats Rock." <<endl;
                break;
            }
            if (user2 == 'p' || user2 == 'P')
            {
                cout << "User 1 ties with User 1, Paper matches Paper." <<endl;
                break;
            }
            if (user2 == 's' || user2 == 'S')
            {
                cout << "User 2 is the winner, Scissor beats Paper." <<endl;
                break;
            }
        case 's':
        case 'S':
            if (user2 == 'r' || user2 == 'R')
            {
                cout << "User 2 is the winner, Rock beats Scissor." <<endl;
                break;
            }
            if (user2 == 'p' || user2 == 'P')
            {
                cout << "User 1 is the winner, Scissor beats Paper." <<endl;
                break;
            }
            if (user2 == 's' || user2 == 'S')
            {
                cout << "User 1 ties with User 2, Scissor matches Scissor." <<endl;
                break;
            }
                default: 
                cout << "Invalid entry, enter again." <<endl;
        }
    cout << "Play again?" <<endl;
    cout << "Use 'y' for yes, 'n' for no." <<endl;
    cin >> ans;
    } while (ans == 'y' || ans == 'Y');
    
    cout << "Goodbye." <<endl;
    
    return 0; 
}

