/* 
 * File:   main.cpp
 * Author: Victor Medel
 *
 * Created on June 3, 2014, 12:59 PM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

//Global Constants
 

//Function Prototypes


//Execution Starts Here
int main(int argc, char** argv) {
    //Declare Variables
   
    
    int randCard=14, randSuit=4;
    int suit[randSuit];
    int card[randCard];
    
    
    //dealCrd(card,randCard,suit,randSuit);
    //prntCrd(card,randCard,suit,randSuit);
    
    //Randomly Selects Card and Suit
    randSuit=rand()%4;
    randCard=rand()%14;
    card[randCard];
    suit[randSuit];

    //Outputs One Card
    cout<<right<<setw(2)<<card[randCard];
    cout<<" ";
    cout<<left<<setw(2)<<suit[randSuit];

    
    //Exit Stage Right
    return 0;
}

