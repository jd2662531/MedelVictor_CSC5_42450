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
void card(int [], int, int[], int);
void dealCrd(int [], int [], int, int);

//Execution Starts Here
int main(int argc, char** argv) {
    //Random Seed and Variable Declaration
    srand(static_cast<unsigned int>(time(0)));
    const int VALUES=1, SUITS=1;
    int cards[VALUES], suit[SUITS];
    
    //Function Call
    //Randomly Selects Card One
    card(cards, VALUES, suit, SUITS);
    dealCrd(cards, suit, VALUES, SUITS);
    cout<<" | ";
    //Randomly Selects Card Two
    card(cards, VALUES, suit, SUITS);
    dealCrd(cards, suit, VALUES, SUITS);
    
    //Exit Stage Right
    return 0;
}
void card(int card[], int n, int suit[], int s){
    for(int i=0;i<n;i++){
        card[i]=rand()%13+1;
    }
       for(int i=0;i<s;i++){
           suit[i]=rand()%4+1;
    }
}
void dealCrd(int card[], int suit[], int n, int s){
    for(int i=0;i<n;i++){
        cout<<card[i]<<" ";
    }
      for(int i=0;i<s;i++){
          if(suit[i]==1){
              cout<<" of Hearts";
          }else if(suit[i]==2){
              cout<<" of Diamonds";
          }else if(suit[i]==3){
              cout<<" of Spades";
          }else if(suit[i]==4){
              cout<<" of Clubs";
          }
      }    
}