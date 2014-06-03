/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on May 29, 2014, 6:20 PM
 * CSC 5 (42450) | Project 2: Black Jack Game Version 2
 * 
 */

//System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

//Global Constants


//Function Prototypes
void dealCrd(string card[], int& randCard, string suit[], int& randSuit);



//Execution Starts Here
int main(int argc, char** argv) {
    //Variable Declaration and Random Seed 
    srand(time(0));
    int totl;
    int randCard, randSuit;
    string suit[4]={"Hearts","Diamonds","Spades","Clubs"};
    string card[14]={"Ace","2","3","4","5","6","7","8","9","10","Ace","Jack","Queen","King"};    
    //Function Call
    
    dealCrd(card,randCard,suit,randSuit);
    cout<<" | ";
    dealCrd(card,randCard,suit,randSuit);
    cout<<"\ntotal:";
    
    
    //Exit Stage Right
    return 0;
}
void dealCrd(string card[], int& randCard, string suit[], int& randSuit){
    randSuit=rand()%4;
    randCard=rand()%14;
    cout<<card[randCard];
    cout<<" ";
    cout<<suit[randSuit];
}
