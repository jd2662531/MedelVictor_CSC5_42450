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
 const int COLS=2;

//Function Prototypes
void dealCrd(int card[][COLS], int n, int randSuit);
void prntCrd(int card[][COLS], int n, int randSuit);
int suit(int& randSuit);

//Execution Starts Here
int main(int argc, char** argv) {
    //Declare Variables
    srand(static_cast<unsigned int>(time(0)));
    int n=1;
    int card[n][COLS], randSuit=rand()%4+1;
    
    dealCrd(card, n, randSuit);
    prntCrd(card, n, randSuit);    
    //Exit Stage Right
    return 0;
}

void dealCrd(int card[][COLS], int n, int randSuit){
    for(int i=0;i<n;i++){
        card[i][0]=rand()%14+1;
        card[i][1]=suit(randSuit);
    }
}

void prntCrd(int card[][COLS], int n, int randSuit){    
    for (int i=0;i<n;i++){
       cout<<card[i][0];
       cout<<" of ";
        if(card[i][0]==0){
            cout<<"Hearts";
        }else if(card[i][0]==1){
            cout<<"Diamonds";
        }else if(card[i][0]==2){
            cout<<"Clubs";
        }else if(card[i][0]==3){
            cout<<"Spades";
        }
    }
}

int suit(int& randSuit){
    randSuit=rand()%4+1;
    
    return randSuit;
}