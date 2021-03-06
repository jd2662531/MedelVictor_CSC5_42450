/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on April 10, 2014, 8:27 PM
 * Purpose: Black Jack Game
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

//Global Constants

//Function Prototypes
int card(int crdValu, int pTotal);
int card(int crdSuit);

//Execution Begins Here!
int main(int argc, char** argv) {  
    //Set the random number seed and declare variables
    srand(static_cast<unsigned int>(time(0))); 
    int deal, card, crdValu, pTotal, crdSuit, rTotal;
    char ans;
            
    cout<<"\n";
    cout<<"You have been dealt the following cards: ";
    cout<<"\n";
    
    card(crdValu, pTotal);
    
    
    
    
    //Exit Stage Right
    return 0;
}
int card(int crdValu, int pTotal){
    int value;
    //Randomly selects card values
    crdValu=rand()%13+1;
    if (crdValu==10){
        cout<<"Jack of ";
    }if (crdValu==11||crdValu==1){
        cout<<"Ace of ";
        if (pTotal<=10){            
            crdValu=11;
        }else{
            crdValu=1;
        }
    }if (crdValu==12){
        cout<<"Queen of ";
        crdValu=10;
    }if (crdValu==13){
        cout<<"King of ";
        crdValu=10;
    }if (crdValu<=9){
        cout<<crdValu;
        cout<<" of ";
    }
    //End of card value selection   
   return (value);
}
int card(int crdSuit){
    int suit;
    //Randomly selects suit
   crdSuit=rand()%4+1;
   if(crdSuit==1){
       cout<<"Clubs";
   }if(crdSuit==2){
       cout<<"Diamonds";
   }if(crdSuit==3){
       cout<<"Spades";
   }if (crdSuit==4){
       cout<<"Hearts";
   }
   //End of Suit Selection
   return (suit);
}