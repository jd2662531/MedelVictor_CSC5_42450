/* 
 * File:   main.cpp
 * Author: Victor Medel
 *
 * Created on June 2, 2014, 10:15 PM
 */

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

//Global Constants
const int COLS=2; 

//Function Prototypes
void dealCrd(int card[][COLS], int& crdCnt, int suit[][COLS], int suitCnt);
void prntCrd(int card[][COLS], int& crdCnt, int suit[][COLS], int suitCnt);

//Execution Starts Here
int main(int argc, char** argv) {
    srand(static_cast<unsigned int>(time(0)));
    int crdCnt=1;
    int suitCnt=1;
    //string suit[randSuit]={"of Hearts","of Diamonds","of Spades","of Clubs"};
    //string card[randCard]={"Ace","2","3","4","5","6","7","8","9","10","Ace","Jack","Queen","King"}; 
    int card[crdCnt][COLS];
    int suit[suitCnt][COLS];
    
    dealCrd(card, crdCnt, suit, suitCnt);
    prntCrd(card, crdCnt, suit, suitCnt);
    
    //Exit Stage Right
    return 0;
}

void dealCrd(int card[][COLS], int& crdCnt, int suit[][COLS], int suitCnt){
    
    for(int rndCrd=0;rndCrd<crdCnt;rndCrd++){
        card[rndCrd][0]=rand()%14+1;
        for(int rndSuit=0;rndSuit<suitCnt;rndSuit++){
            suit[rndSuit][1]=rand()%4+1;
        }
    }
    
}
void prntCrd(int card[][COLS], int& crdCnt, int suit[][COLS], int suitCnt){
    for(int rndCrd=0;rndCrd<crdCnt;rndCrd++){
        cout<<card[rndCrd][0]<<" ";
        cout<<suit[suitCnt][1]<<"*";
        
    }
}