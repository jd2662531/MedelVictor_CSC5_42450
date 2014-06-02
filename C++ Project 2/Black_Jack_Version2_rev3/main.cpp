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
#include <iomanip>
using namespace std;

//Global Constants


//Function Prototypes
void dealCrd(string card[], int& randCard, string suit[], int& randSuit);
void prntCrd(string card[], int& randCard, string suit[], int& randSuit);
int calc(int& randCard, int& valu);


//Execution Starts Here
int main(int argc, char** argv) {
    //Variable Declaration and Random Seed 
    srand(time(0));
    int valu, pTotal, rTotal, hTotal, hrTot;
    int randCard, randSuit;
    string suit[4]={"of Hearts","of Diamonds","of Spades","of Clubs"};
    string card[14]={"Ace","2","3","4","5","6","7","8","9","10","Ace","Jack","Queen","King"};  
    char ans;
    //Initialize Player and House Running Totals
    hrTot=0;
    rTotal=0; 
    //Function Call
    dealCrd(card,randCard,suit,randSuit);
    prntCrd(card,randCard,suit,randSuit);
    calc(randCard, valu);
    //Ace Re-Adjustment
    if(valu==1){
        valu=11;
    }
    //End of Ace Re-Adjustment
        pTotal=rTotal+valu;
        rTotal=pTotal;
    cout<<" | ";
    dealCrd(card,randCard,suit,randSuit);
    prntCrd(card,randCard,suit,randSuit);
    calc(randCard, valu);
    //Ace Re-Adjustment for Additional Cards
    if(rTotal>10&&valu==11){
        valu=1;
    }else if(rTotal<=10&&valu==1){
        valu=11;
    }
    //End of Ace Re-Adjustment   
        pTotal=rTotal+valu;
        cout<<"\n\n";
        cout<<"Your score is: ";
        cout<<pTotal;
        cout<<"\n";
    
        
         //Option to Allow Player to Hit and Continue Playing
                        //Three additional cards always exceed a score of 21
                       if(pTotal<21){
                        cout<<"Would you like another card?\n";
                        cout<<"Enter y for yes, anything else for no: ";
                        cin>>ans;
                           if (ans=='y'||ans=='Y'){
                               //Players Additional Cards
                               cout<<"\n";
                               cout<<"You have been dealt a ";
                               dealCrd(card,randCard,suit,randSuit);
                               prntCrd(card,randCard,suit,randSuit);
                               calc(randCard, valu);
                               //Ace Re-Adjustment for Additional Cards
                                if(pTotal>10&&valu==11){
                                    valu=1;
                                }else if(pTotal<=10&&valu==1){
                                    valu=11;
                                }
                                //End of Ace Re-Adjustment           
                               pTotal=pTotal+valu;
                               cout<<"\n";
                               cout<<"Your score is now: ";
                               cout<<pTotal;
                               cout<<"\n\n";
                                    if (pTotal<21){
                                         cout<<"Would you like another card?\n";
                                         cout<<"Enter y for yes, anything else for no: ";
                                         cin>>ans;
                                         if (ans=='y'||ans=='Y'){
                                              //Players Additional Card
                                               cout<<"\n";
                                               cout<<"You have been dealt a ";
                                               dealCrd(card,randCard,suit,randSuit);
                                               prntCrd(card,randCard,suit,randSuit);
                                               calc(randCard, valu);
                                               //Ace Re-Adjustment for Additional Cards
                                                if(pTotal>10&&valu==11){
                                                    valu=1;
                                                }else if(pTotal<=10&&valu==1){
                                                    valu=11;
                                                }
                                                //End of Ace Re-Adjustment 
                                               pTotal=pTotal+valu;
                                   cout<<"\n";
                                   cout<<"Your score is now: ";
                                   cout<<pTotal;
                                   cout<<"\n\n";
                                   if (pTotal<21){
                                     cout<<"Would you like another card?\n";
                                     cout<<"Enter y for yes, anything else for no: ";
                                     cin>>ans;
                                     if (ans=='y'||ans=='Y'){
                                      //Players Additional Card
                                       cout<<"\n";
                                       cout<<"You have been dealt a ";
                                       dealCrd(card,randCard,suit,randSuit);
                                       prntCrd(card,randCard,suit,randSuit);
                                       calc(randCard, valu);
                                       //Ace Re-Adjustment for Additional Cards
                                        if(pTotal>10&&valu==11){
                                            valu=1;
                                        }else if(pTotal<=10&&valu==1){
                                            valu=11;
                                        }
                                        //End of Ace Re-Adjustment       
                                       pTotal=pTotal+valu;
                                   cout<<"\n";
                                   cout<<"Your score is now: ";
                                   cout<<pTotal;
                                   cout<<"\n\n";
                                   //Fourth Card Option for the Risk Taker
                                   if(pTotal<21){
                                       cout<<"Would you like another card?\n";
                                     cout<<"Enter y for yes, anything else for no: ";
                                     cin>>ans;
                                     if (ans=='y'||ans=='Y'){
                                      //Players Additional Card
                                       cout<<"\n";
                                       cout<<"You have been dealt a ";
                                       dealCrd(card,randCard,suit,randSuit);
                                       prntCrd(card,randCard,suit,randSuit);
                                       calc(randCard, valu);
                                       //Ace Re-Adjustment for Additional Cards
                                        if(pTotal>10&&valu==11){
                                            valu=1;
                                        }else if(pTotal<=10&&valu==1){
                                            valu=11;
                                        }
                                        //End of Ace Re-Adjustment       
                                       pTotal=pTotal+valu;
                                   cout<<"\n";
                                   cout<<"Your score is now: ";
                                   cout<<pTotal;
                                   cout<<"\n\n";
                                     }
                                   }
                                 }  
                               }
                                 }  
                               }
                            }else;
                       }   
        
                       //House's Hand
                       cout<<"\n";
                       cout<<"The house has been dealt the following cards: ";
                       cout<<"\n";
                               dealCrd(card,randCard,suit,randSuit);
                               prntCrd(card,randCard,suit,randSuit);
                               calc(randCard, valu);
                               //Ace Re-Adjustment for Additional Cards
                                if(hTotal>10&&valu==11){
                                    valu=1;
                                }else if(hTotal<=10&&valu==1){
                                    valu=11;
                                }
                                //End of Ace Re-Adjustment  
                       hTotal=hrTot+valu;
                       hrTot=hTotal;
                       do{
                       cout<<" | ";
                               dealCrd(card,randCard,suit,randSuit);
                               prntCrd(card,randCard,suit,randSuit);
                               calc(randCard, valu);
                               //Ace Re-Adjustment for Additional Cards
                                if(hTotal>10&&valu==11){
                                    valu=1;
                                }else if(hTotal<=10&&valu==1){
                                    valu=11;
                                }
                                //End of Ace Re-Adjustment  
                       hTotal=hTotal+valu;
                       
                       //Based on Blackjack Rules House continues to deal 
                       //itself a card if total score is less than 16
                       }while(hTotal<16);
                       cout<<"\n";
                       cout<<"The house's score is: ";
                       cout<<hTotal;
                       cout<<"\n";
                       //Outcome Output
                       if(pTotal==21||(pTotal>hTotal&&pTotal<21)){
                           cout<<"\n";
                           cout<<"Congratulations! You have won";
                           cout<<"\n";
                       }else if(hTotal>21&&pTotal<=21) {
                           cout<<"\n";
                           cout<<"Congratulations! You have won";
                           cout<<"\n";
                       }else if(pTotal>21){
                           cout<<"\n";
                           cout<<"Bust";
                           cout<<"\n"; 
                       }else if(pTotal<hTotal&&hTotal<=21){
                          cout<<"\n";
                           cout<<"House Wins";
                           cout<<"\n";
                       }else if(pTotal==hTotal){
                           cout<<"\n";
                           cout<<"Stand-Off/Draw, Play Again";
                           cout<<"\n";
                       }
    //Exit Stage Right
    return 0;
}
void dealCrd(string card[], int& randCard, string suit[], int& randSuit){
    //Randomly Selects Card and Suit
    randSuit=rand()%4;
    randCard=rand()%14; 
}
void prntCrd(string card[], int& randCard, string suit[], int& randSuit){
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