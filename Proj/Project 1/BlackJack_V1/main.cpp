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
#include <ctime> //Time
using namespace std;

//User Libraries
//Global Constants

//Function Declarations
void winner(int player, int cpu); //Compares player and computer's cards to determine winner
int Hit(int); //Hits player cards if they decide
int random(int lower, int upper); //Generates random number when given lower and upper numbers

int main(int argc, char** argv) {
    
    srand(time(0)); //Set random number seed generator
    //Declare variables
    //No doubles, floats okay
    string inFile = "GameData.txt"; //String name for input file
    string outFile = "GameStats.txt"; //String name for output file
        int player(0),
            cpu(0),
            hand(0),
            n(0);
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
        //Give two random cards to the player and dealer
        //This loops until it gives two cards and sums the total
        while (n < 2) {
            n++;
            player += random(0,11); //Values 1 to 11
            cpu += random(0,11); //Values 1 to 11
        }
            cout << "Your starting hand is " << player <<endl; 
            cout << "Computer's starting hand is " << cpu <<endl;
            out << "Player starting hand was: " <<  player <<endl;
            out << "Computer's starting hand was: " << cpu <<endl;
        
        winner(player, cpu);
        cout << winner <<endl;
        
    cout << "Play another game?" <<endl;
    cout << "(Y)es or (N)o: " <<endl;
    cin >> play;
    } while (play == 'Y' || play == 'y');
				
				
			
			
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

int random(int lower, int upper) {
    return (rand() % (upper - lower + 1)) + lower; 
    //I use 11 as upper and 0 as lower so the remaining values would be 0-10
    //but we add + to shift the remaining values from 1-11
}

//Determines the winner
void winner(int player, int cpu) {
            if (player == 21)
                cout << "You win!" <<endl;
            else if (cpu == 21)
                cout << "Computer wins!" <<endl;
            else if ((player < 21) && (player > cpu))
                cout << "You win!" <<endl;
            else if (player == cpu)
                cout << "It's a tie!" <<endl;
            else
                cout << "Computer wins!" <<endl;
            return;
}