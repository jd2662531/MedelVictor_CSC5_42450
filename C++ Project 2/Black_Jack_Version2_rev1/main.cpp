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
void dealCrd(int[][COLS], int);
void crdSuit(int [], int);

//Execution Starts Here
int main(int argc, char** argv) {
    //Random Seed and Variable Declaration
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variable
    int crdValu[13][COLS]= {1,2,3,4,5,6,7,8,9,10,10,10,11};
    
    
    
    
    //Exit Stage Right
    return 0;
}

void dealCrd(int crdValu[][COLS], int n, int suit){
    for(int i=0;i<n;i++){
        crdValu[i][0]=rand()%13+1;
        
    }
}

void crdSuit(int suit[], int n){
   //Randomly selects suit
    for(int i=0;i<n;i++){
        suit[i]=rand()%4+1;
    
        if(suit[i]==1){
           cout<<"Clubs";
       }if(suit[i]==2){
           cout<<"Diamonds";
       }if(suit[i]==3){
           cout<<"Spades";
       }if (suit[i]==4){
           cout<<"Hearts";
       }
    }
  //End of Suit Selection 
}

