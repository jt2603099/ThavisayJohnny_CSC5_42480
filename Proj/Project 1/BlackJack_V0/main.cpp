/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 * Simulate a blackjack game between two computers
 * Created on April 15, 2018, 7:41 PM
 */

#include <iostream> //Input Output Library
#include <cstdlib> //Srand/Rand
#include <string> //Strings
#include <fstream> //File I/O
#include <cmath> //Math Functions

using namespace std;

//User Libraries
//Global Constants

//Function Declarations
int Hit();

int main(int argc, char** argv) {
    //Declare variables
    //No doubles, floats okay
    string inFile = "GameData.txt"; //String name for input file
    string outFile = "GameStats.txt"; //String name for output file
    int player(0), //set player and computer(dealer) to have 0 cards
        dealer(0),
        hand(0); //Set starting hand to 0 
    char play('Y'); //Loop to play the game
    bool stay(true); //Bool to hit cards or stay
    
    //Initiate the File I/O
    ifstream in(inFile); //Opens input file given by inFile since the name was given in its parameter
    ofstream out(outFile); //Opens output file by outFile since the name was given in its parameter
	
	//Ask to play a game or not
    cout << "Play blackjack versus a computer?" <<endl;
    cout << "Enter Y for yes, N for no: ";
    cin >> play;
    //Begin the game with a variable set for a do-while loop
    do {
        int i;
        int (i=0, i=2, i++){
            hand = i 
        }
        
        cout << "Your total value is " << hand <<endl;
        cout <<
    } while (play == 'Y' || play == 'y');
		
			//Give two random cards to the player
				//Values 1 to 11
				//Values 1 to 11
			//Sum both cards
			//If value = 21(Player wins!)
			//If != 21, hit for more cards or stay
				//Hit, so add more cards to try to hit 21
					//If > 21 OR Stay, play dealer's card to determine who wins
						//If Dealer > 21 && User Stays, User Wins
						//If Dealer < 21 && Dealer > User, Dealer Wins
						//If Dealer = User, Tie
						
	//Output most recent game information to file
	
	//Close files and Exit stage
        //Test if output file works
        out << "Testing if this works" <<endl;
        in.close(); //Close input file
        out.close(); //Close output file
    return 0;
}

//Function Definition for Hit
int Hit() {
    Hit = 1 + (rand() % 11); 
    return Hit;
}
