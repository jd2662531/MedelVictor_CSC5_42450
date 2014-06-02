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
int calc(int& randCard, int& valu);


//Execution Starts Here
int main(int argc, char** argv) {
    //Variable Declaration and Random Seed 
    srand(time(0));
    int valu, pTotal, rTotal, hTotal, hrTot;
    int randCard, randSuit;
    string suit[4]={"Hearts","Diamonds","Spades","Clubs"};
    string card[14]={"Ace","2","3","4","5","6","7","8","9","10","Ace","Jack","Queen","King"};  
    //Initialize Player and House Running Totals
    hrTot=0;
    rTotal=0; 
    //Function Call
    dealCrd(card,randCard,suit,randSuit);
    calc(randCard, valu);
        pTotal=rTotal+valu;
        rTotal=pTotal;
    cout<<" | ";
    dealCrd(card,randCard,suit,randSuit);
    calc(randCard, valu);
        pTotal=rTotal+valu;
        cout<<"\n\n";
        cout<<"Your score is: ";
        cout<<pTotal;
        cout<<"\n\n";
    
    //Exit Stage Right
    return 0;
}
void dealCrd(string card[], int& randCard, string suit[], int& randSuit){
    
    //Randomly Selects Card and Suit
    randSuit=rand()%4;
    randCard=rand()%14;
    //Outputs One Card
    cout<<card[randCard];
    cout<<" ";
    cout<<suit[randSuit];
 
}
int calc(int& randCard, int& valu){
    //Assigns Value to Card Dealt
     if(randCard==0){
        valu=1;
    }else if(randCard==1){
        valu=2;
    }else if(randCard==2){
        valu=3;
    }else if(randCard==3){
        valu=4;
    }else if(randCard==4){
        valu=5;
    }else if(randCard==5){
        valu=6;
    }else if(randCard==6){
        valu=7;
    }else if(randCard==7){
        valu=8;
    }else if(randCard==8){
        valu=9;
    }else if(randCard==9){
        valu=10;
    }else if(randCard==10){
        valu=11;
    }else if(randCard==11){
        valu=10;
    }else if(randCard==12){
        valu=10;
    }else if(randCard==13){
        valu=10;
    }
     return valu;
}