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
 * []Fix game looping same results as last game
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
    
    srand(time(0)); //Set random number seed generator  
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
                    //Checks if either has 21
                    if (player == 21 || cpu == 21) {
                        if (player = 21) 
                            cout << "You win!" <<endl;
                        else if (cpu = 21)
                            cout << "Computer wins!" <<endl;
                        else if (player = cpu)
                            cout << "It's a tie!" <<endl;
                            cout << "Thanks for playing!" <<endl;
                            play = 'N'; //Ends the game loop                  
                    }           
                        //Ask to hit or stay
                        cout << "[H]it or [S]tay?: ";
                        cin >> HitStay;
                        if (HitStay == 'H' || HitStay == 'h')
                            stay = false;
                        else if (HitStay == 'S' || HitStay == 's')
                            stay = true;
                                //Player Hits
                                if (stay != true) {
                                    while ((HitStay == 'Y' || HitStay == 'y' || HitStay == 'H' || HitStay == 'h') && (player < 21)) {
                                        player += random(0,11); //Draw another card
                                            cout << "Your hand is: " << player <<endl; //Iterates players hand starting from 3cards++ until said
                                            out << "Your hand is: " << player <<endl; //Outputs to file
                                            cout << "Hit? [Y]es or [N]o: "; 
                                            cin >> HitStay;
                                        //End this loop if player has more than 21
                                        if (player > 21)
                                            stay = true;
                                    }
                                }

                                //Player Stays, CPU Hits
                                if (stay = true) {
                                    if (cpu < 21 && player < 21) {
                                        cpu += random(0,11); //Draw another card
                                        cout << "Computer has " << cpu <<endl;
                                        out << "Computer has " << cpu <<endl;
                                        cout << "You have " << player <<endl;
                                        out << "You have " << player <<endl;
                                    }
                                    if (cpu > 21) {
                                        stay = false; //Stops giving cpu cards if its cards reaches over 21
                                    }
                                }
                    //Output final results
                    cout << "You got " << player <<endl;
                    out << "You got " << player <<endl;
                    cout << "Computer got " << cpu <<endl;
                    out << "Computer got " << cpu <<endl;
                    winner(player, cpu); //Outputs the final results
                //Ask to play another game    
                cout << "Play another game?" <<endl;
                cout << "(Y)es or (N)o: " <<endl;
                cin >> play;
            } while (play == 'Y' || play == 'y');							
            //Close files and Exit stage
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
                cout << "You win!" <<endl; //Player Wins with 21
            else if (cpu == 21 || ((cpu > player) && (player < 21)))
                cout << "Computer wins!" <<endl; //CPU wins with 21
            else if ((player < 21) && (player > cpu) && (cpu < 21)) //Player wins
                cout << "You win!" <<endl;
            else if (player == cpu) //Player = CPU
                cout << "It's a tie!" <<endl;
            else 
                cout << "Computer wins!" <<endl; //CPU Wins
            return;
}