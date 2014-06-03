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
#include <string>
using namespace std;

//Global Constants


//Function Prototypes
void card(int [], int, string [], int);
void dealCrd(int [], int, string [], int);

//Execution Starts Here
int main(int argc, char** argv) {
    //Random Seed and Variable Declaration
    srand(static_cast<int>(time(0)));
    const int VALUES=1, SUITS=4;
    int cards[VALUES];
    string suit[SUITS]={"Hearts", "Diamonds", "Clubs", "Spades"};
    
    //Function Call
    //Randomly Selects Card One
    card(cards, VALUES, suit, SUITS);
    dealCrd(cards, VALUES, suit, SUITS);
    cout<<" | ";
    //Randomly Selects Card Two
    card(cards, VALUES, suit, SUITS);
    dealCrd(cards, VALUES, suit, SUITS);
    
    //Exit Stage Right
    return 0;
}
void card(int card[], int n, string suit[], int s){
    for(int i=0;i<n;i++){
        card[i]=rand()%13+1;
    }
       for(int i=0;i<s;i++){
           suit[i]=rand()%4+1;
    }
}
void dealCrd(int card[], int n, string suit[], int s){
    for(int i=0;i<n;i++){
        cout<<card[i]<<" ";
    }
      for(int i=0;i<s;i++){
          cout<<suit[i];
      }
}