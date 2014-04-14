/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on April 13, 2014, 5:02 PM
 * CSC 5 (42450) | Project 1: 2 or 3 Card Game of 21
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std;

//Global Constants

//Function Prototypes
void dealCrd(int& crdValu, int& crdSuit, int& pTotal);

//Execution Starts Here
int main(int argc, char** argv) {
    //Random Seed and Variable Declaration
    srand(static_cast<unsigned int>(time(0))); 
    int value, suit,pTotal,rTotal,total,hTot,hrTot;
    char ans;
    hrTot=0;
    rTotal=0;  
    //Player's Initial Hand
    cout<<"You have been dealt a ";
    dealCrd(value, suit, total);
    cout<<" and a ";  
    pTotal=rTotal+value;
    rTotal=pTotal;
    dealCrd(value, suit, total);
    cout<<"\n";
    cout<<"\n";
    cout<<"Your score is: ";
    pTotal=rTotal+value;
    cout<<pTotal;
    cout<<"\n\n";    
   //House's Initial Hand
   cout<<"The house has been dealt a ";
   dealCrd(value, suit, total);
   hTot=hrTot+value;
   hrTot=hTot;
   cout<<" and a ";
   dealCrd(value, suit, total);
   hTot=hrTot+value;
   cout<<"\n\n";
   cout<<"The house's score is: ";
   cout<<hTot;
   cout<<"\n\n";
   //Option to Allow Player to Hit and Continue Playing
   if(pTotal<21){
    cout<<"Would you like another card?\n";
    cout<<"Enter y for yes, n for no: ";
    cin>>ans;
       if (ans=='y'||ans=='Y'){
           //Players Additional Card
           cout<<"\n";
           cout<<"You have been dealt a ";
           dealCrd(value, suit, total);
           pTotal=pTotal+value;
           cout<<"\n";
           cout<<"Your score is now: ";
           cout<<pTotal;
           cout<<"\n\n";
           //House's Additional Card
           cout<<"The house has been dealt a ";
           dealCrd(value, suit, total);
           hTot=hTot+value;
           cout<<"\n";
           cout<<"The house's score is now: ";
           cout<<hTot;
           cout<<"\n";
           if (pTotal==21){
               cout<<"Congratulations! You have won.";
           }else if (pTotal>21){
               cout<<"\n";
               cout<<"You've Lost";
               cout<<"\n";
           }else if (pTotal<21){
           }
       }else if((pTotal==21)||(hTot>21)||(pTotal>hTot)){
       cout<<"\n";
       cout<<"Congratulations! You have won.";
       cout<<"\n";
       } else if ((pTotal>21)||(hTot==21)||(hTot>pTotal)){
       cout<<"\n";
       cout<<"You've Lost";
       cout<<"\n";
       } else;
   }else if ((pTotal==21)||(hTot>21)||(pTotal>hTot)){
       cout<<"\n";
       cout<<"Congratulations! You have won.";
       cout<<"\n";
   }else if (pTotal>21||hTot>pTotal){
       cout<<"\n";
       cout<<"You've Lost";
       cout<<"\n";
   }     
    //Exit Stage Right
    return 0;
}
void dealCrd(int& crdValu, int& crdSuit, int& pTotal){
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
}
