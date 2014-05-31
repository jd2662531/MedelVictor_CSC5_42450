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

//Function Prototypes
void card(int [], int);
void cardSuit(int suit[], int n);
void dealCrd(int [], int [], int, int);

//Execution Starts Here
int main(int argc, char** argv) {
    //Random Seed and Variable Declaration
    srand(static_cast<unsigned int>(time(0)));
    const int VALUES=1, SUITS=1;
    int cards[VALUES], suit[SUITS];
    
    //Function Call
    
    //Randomly Selects Card One
    card(cards, VALUES);
    cardSuit(suit, SUITS);
    dealCrd(cards, suit, VALUES, SUITS);
    cout<<"\n";
    //Randomly Selects Card Two
    card(cards, VALUES);
    cardSuit(suit, SUITS);
    dealCrd(cards, suit, VALUES, SUITS);
    
    //Exit Stage Right
    return 0;
}

void card(int card[], int n){
    for(int i=0;i<n;i++){
        card[i]=rand()%13+1;
    }
}
void  cardSuit(int suit[], int s){
    for(int i=0;i<s;i++){
        suit[i]=rand()%4+1;
    }
}
void dealCrd(int card[], int suit[], int n, int s){
    for(int i=0;i<n;i++){
        cout<<card[i]<<" ";
    }
      for(int i=0;i<s;i++){
        cout<<suit[i]<<"*";
      }    
}