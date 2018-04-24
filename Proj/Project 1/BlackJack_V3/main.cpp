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
 * []Fix game looping same results as last game when replaying []Saying no for Hit still Hits []End Hit Loop when Player > 21 []End Hit Loop when CPU is less than 21 but more than player
 * [x]Fixed cpu hitting, yet player hit instead(was using assignment '=' instead of '==') [x]Added more checks to decide winner(cpu winning > 21)
 */

#include <iostream> //Input Output Library
#include <cstdlib> //Srand/Rand
#include <string> //Strings
#include <fstream> //File I/O
#include <cmath> //Math Functions
#include <ctime> //Time
#include <iomanip> //Format
using namespace std;

//User Libraries
//Global Constants

//Function Declarations
int winner(int player, int cpu); //Compares player and computer's cards to determine winner
int Hit(int); //Hits player cards if they decide
int random(int lower, int upper); //Generates random number when given lower and upper numbers

int main(int argc, char** argv) {
    
    srand(time(0)); //Set random number seed generator  
    //Declare variables
    //No doubles, floats okay
    string inFile = "GameData.txt"; //String name for input file
    string outFile = "GameStats.txt"; //String name for output file
    string WINNER;
    int player(0),
    cpu(0),
    n(0); //Starting hand count
    char play; //Loop to play the game
    char HitStay('H'); //Char to hit or stay
    char Hit('H'); //If player decides to Hit
    bool stay; //Bool to hit cards or stay
    //Initiate the File I/O
    ifstream in(inFile); //Opens input file given by inFile since the name was given in its parameter
    ofstream out(outFile); //Opens output file by outFile since the name was given in its parameter
    
    //Ask to play a game or not
    while (play != 'Y' && play != 'y' && play != 'N' && play != 'n') {
        cout << "Play blackjack versus a computer?" <<endl;
        cout << "Enter Y for yes, N for no: ";
        cin >> play;
        in >> play;
            //Check if player decides not to play the game
            //End the program
            if (play == 'N' || play == 'n') {
                cout << "Goodbye." <<endl;
                return 0;
            }
    }
        //Begin the game with a variable set for a do-while loop
        do {
            //Give two random cards to the player and dealer
            //This loops until it gives two cards and sums the total
            while (n < 2) {
                ++n;
                player += random(0,11); //Values 1 to 11
                cpu += random(0,11); //Values 1 to 11
            }
                cout << "Your starting hand is: " << player <<endl;
                cout << "Computer's starting hand is: " << cpu <<endl;
                out << "Player starting hand was: " <<  player <<endl;//Files Player starting hand
                out << "Computer's starting hand was: " << cpu <<endl;//Files CPU starting hand
                cout << "------------------------------" <<endl;
                out << "------------------------------" <<endl;
                    //Checks if either has 21 or more
                    if (player >= 21 || cpu >= 21) {
                        if (player == 21) 
                            cout << "You win!" <<endl;
                        else if (cpu == 21)
                            cout << "Computer wins!" <<endl;
                        else if (player > 21 && cpu < 21)
                            cout << "Computer wins!" <<endl;
                        else if (cpu > 21 && player < 21)
                            cout << "You win!" <<endl;
                        else if (player = cpu)
                            cout << "It's a tie!" <<endl;
                            cout << "Thanks for playing!" <<endl;
                            play = 'R';
                    }           
                    if (play = 'Y' && player < 21 && cpu < 21) {
                        //Ask to hit or stay
                        cout << "[H]it or [S]tay?: ";
                        cin >> HitStay;
                        in >> HitStay;
                            switch (HitStay) {
                                case 'H':
                                case 'h':
                                case 'Y':
                                case 'y':
                                    stay = false;
                                    break;
                                case 'S':
                                case 's':
                                case 'N':
                                case 'n':
                                    stay = true;
                                    break;
                            }
                    }
                                    while (stay == false) /*&& (Hit == 'Y' || Hit == 'y' || Hit == 'H' || Hit == 'h'))*/ {
                                                //Player Hits
                                                player += random(0,11); //Draw another card                                     
                                                    cout << "You: " << player <<endl; //Iterates players hand starting from 3cards++ until said
                                                    out << "You: " << player <<endl; //Outputs to file
                                                    cout << "CPU: " << cpu <<endl; //Ouputs cpu's cards
                                                    out << "Your: " << cpu <<endl; //Outputs cpu's cards to file
                                                    cout << "------------------------------" <<endl;
                                                    out << "------------------------------" <<endl;
                                        if (cpu < 21 || Hit == 'N' || Hit == 'n') {
                                                //Player Stays, CPU Hits
                                                cpu += random(0,11);
                                                        }
                                        if (player > 21 || cpu > 21) 
                                            stay = true;
                                                    cout << "Hit? [Y]es or [N]o: "; 
                                                    cin >> Hit;
                                    }                             
                    cout << "------------------------------" <<endl;        
                    out << "------------------------------" <<endl;
                    cout << "You: " << player <<endl; //Output player cards after hitting cpu
                    cout << "Computer: " << cpu <<endl; //Output cpu cards after hitting cpu
                    out << "You: " << player <<endl; //Outputs results to file
                    out << "Computer: " << cpu <<endl; //Outputs results to file
                    cout << "------------------------------" <<endl;
                    out << "------------------------------" <<endl;
                        WINNER = winner(player, cpu); //Outputs the final results
                        out << WINNER; //Outputs winner to file
                //Ask to play another game    
                cout << "Play another game?" <<endl;
                cout << "(Y)es or (N)o: " <<endl;
                cin >> play;
                in >> play; 
            } while (play == 'Y' || play == 'y');							
            cout << "Thanks for playing!" <<endl;
            //Close files and Exit main
            in.close(); //Close input file
            out.close(); //Close output file
        return 0;
}
int random(int lower, int upper) {
    return rand() % (upper - lower + 1) + 1; 
    //I use 11 as upper and 0 as lower so the remaining values would be 0-10
    //but we add + 1 to shift the remaining values from 1-11
}  
//Determines the winner
int winner(int player, int cpu) {
            if (player == 21)
                cout << "You win!" <<endl; //Player Wins with 21
            else if (cpu == 21)
                cout << "Computer wins!" <<endl; //CPU wins with 21
            else if ((player < 21 && cpu < 21) && player == cpu) //Player = CPU
                cout << "It's a tie!" <<endl;
            else if (player < 21 && player > cpu) //Player < 21 and more than cpu
                cout << "You win!" <<endl;        //Player likely Hited
            else if (cpu > 21 && player < 21) //CPU loses if > 21 and Player < 21 
                cout << "You win!" <<endl;    //Player likely Stayed
            else if (cpu > 21 && player > 21)
                cout << "It's a tie" <<endl; //Tie when both are > 21
            else 
                cout << "Computer wins!" <<endl; //CPU Wins
}