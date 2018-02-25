/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jt2603099
 *
 * Created on February 21, 2018, 11:29 PM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) 
    {
    int fence_length, fence_width, totalLength;
    cout << "Press return after entering a number.\n";
    
    cout << "Enter the length in feet of your enclosure:\n";
    cin >> fence_length;
    
    cout << "Enter the width in feet of your enclosure:\n";
    cin >> fence_width;
    
    totalLength = fence_length * fence_width;
    
    cout << "If your enclosure is \n";
    cout << fence_length << "ft wide by ";
    cout << fence_width << "ft long, then\n";
    cout << "you will need " << totalLength << "ft of fence.";
    
    

    return 0;
}

