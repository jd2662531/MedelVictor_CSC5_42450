/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on May 29, 2014, 6:20 PM
 * CSC 5 (42450) | Project 2: Black Jack Game Version 2
 * 
 */

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//Global Constants
const int COLS=2; //Card Number and Suit

//Function Prototypes
void dealCrd(int[], int);
void crdSuit(int [], int);
void prntCrd(int [], int[], int);

//Execution Starts Here
int main(int argc, char** argv) {
    //Random Seed and Variable Declaration
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variable
    int DECK=13, SUITS=4;
    int crdValu[DECK];
    int suit[SUITS];
    
    
    
    //Function Call
    dealCrd(crdValu,DECK);
    crdSuit(suit,SUITS);
    prntCrd(crdValu, suit, DECK);
    
    
    
    //Exit Stage Right
    return 0;
}

void dealCrd(int crdValu[], int n){
    for(int i=0;i<n;i++){
        crdValu[i]=rand()%13+1;
    }
}

void crdSuit(int suit[], int s){
   //Randomly selects suit
    for(int i=0;i<s;i++){
        suit[i]=rand()%4+1;
    }
  //End of Suit Selection 
}
