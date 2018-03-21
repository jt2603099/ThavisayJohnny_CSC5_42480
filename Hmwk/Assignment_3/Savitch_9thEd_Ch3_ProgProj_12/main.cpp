/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 *
 * Created on March 20, 2018, 10:13 PM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int pile(23), player, computer, turn(1), check;
    bool game_on;

   cout << "Play 23 toothpick game versus a computer." << endl;        
   game_on = false;
   while (!game_on) {
       do   {
           cout << "Pick 1, 2, or 3 toothpicks to pickup from the pile." <<endl;
           cout << "There are " << pile << " toothpicks left." <<endl;
           cin >> player; 
           if (player < 1 || player > 3) {
               cout << "Pick only 1-3 toothpicks." <<endl;
            }
                } while (player < 1 || player > 3);
            if (player > 1 || player < 3) 
               pile = pile - player; //Update pile from player removing
                if (pile > 4){
                    computer = 4 - player;
                    pile = pile - computer;
                    cout << "The computer took " << computer << " toothpick(s)." << endl;
                    
                } else if (pile <= 4 && pile > 1) {
                    player = pile - 1;
                    pile = pile - computer;
                    cout << "The computer took " << computer << " toothpick(s)." << endl;
                    
                } else {
                    computer = 1;
                    pile = pile - computer;
                    cout << "The computer took " << computer << " toothpick(s)." << endl; 
                } 
                    
                while (pile <= 0) {    
                    if (turn % 2 == 0) {
                        check = 1;
                }   else {
                        check = 2; 
                }
                    if (check == 1) {
                        cout << "You win!" <<endl;
                    }   else if (check == 2)
                            cout << "The computer won!" <<endl;
                    game_on = true;
                }
                turn++;
   }
      return 0;
}



