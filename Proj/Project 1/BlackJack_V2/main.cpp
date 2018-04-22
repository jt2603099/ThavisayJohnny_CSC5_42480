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
void winner21(int player, int cpu); //States the winner when either hits 21
int Hit(int); //Hits player cards if they decide
int random(int lower, int upper); //Generates random number when given lower and upper numbers

int main(int argc, char** argv) {
    
   
    //Declare variables
    //No doubles, floats okay
    string inFile = "GameData.txt"; //String name for input file
    string outFile = "GameStats.txt"; //String name for output file
        
    int player(0),
    cpu(0),
    hand(0),
    n(0); //Starting hand count
    char play; //Loop to play the game
    char HitStay('H'); //Char to hit or stay
    bool stay; //Bool to hit cards or stay
    
    //Initiate the File I/O
    ifstream in(inFile); //Opens input file given by inFile since the name was given in its parameter
    ofstream out(outFile); //Opens output file by outFile since the name was given in its parameter
    
    //Ask to play a game or not
    if (play != 'Y' || play != 'y' || play != 'N' || play != 'n') {
        cout << "Play blackjack versus a computer?" <<endl;
        cout << "Enter Y for yes, N for no: ";
        cin >> play;
        
        //Check if player decides not to play the game
        //End the program
        if (play == 'N' || play == 'n')
            return 0;
    }
    
    //Begin the game with a variable set for a do-while loop
    do {
         srand(time(0)); //Set random number seed generator
        //Give two random cards to the player and dealer
        //This loops until it gives two cards and sums the total
        while (n < 2) {
            n++;
            player += random(0,11); //Values 1 to 11
            cpu += random(0,11); //Values 1 to 11
        }
            cout << "Your starting hand is " << player <<endl;
            cout << "Computer's starting hand is " << cpu <<endl;
            out << "Player starting hand was: " <<  player <<endl;//Files Player starting hand
            out << "Computer's starting hand was: " << cpu <<endl;//Files CPU starting hand

            //Ask to hit or stay
            cout << "[H]it or [S]tay?: ";
            cin >> HitStay;
            if (HitStay == 'H' || HitStay == 'h')
                bool stay = false;
            else if (HitStay == 'S' || HitStay == 's')
                bool stay = true;

            //Hit
            if (stay != true) {
                do {
                    player += random(0,11); //Draw another card
                    cout << "Your hand is: " << player <<endl; //Iterates players hand starting from 3cards++ until said
                    out << "Your hand is: " << player <<endl; //Outputs to file
                    cout << "Hit? [Y]es or [N]o: "; 
                    cin >> HitStay;
                } while (HitStay == 'Y' || HitStay == 'y');
            }
            //Output final results
        winner(player, cpu);     
    //Ask to play another game    
    cout << "Play another game?" <<endl;
    cout << "(Y)es or (N)o: " <<endl;
    cin >> play;
    } while (play == 'Y' || play == 'y');		
			//If != 21, hit for more cards or stay
				//Hit, so add more cards to try to hit 21
					//If > 21 OR Stay, play dealer's card to determine who wins						
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

//States the winner if either hits 21
void winner21(int player, int cpu) {            
    if (player == 21)
        cout << "You win!" <<endl; //Player Wins with 21
    else if (cpu == 21)
        cout << "Computer wins!" <<endl; //CPU wins with 21
    return;
}
            
//Determines the winner
void winner(int player, int cpu) {
            if ((player < 21) && (player > cpu)) //Player wins
                cout << "You win!" <<endl;
            else if (player == cpu) //Player = CPU
                cout << "It's a tie!" <<endl;
            else 
                cout << "Computer wins!" <<endl; //CPU Wins
            return;
}