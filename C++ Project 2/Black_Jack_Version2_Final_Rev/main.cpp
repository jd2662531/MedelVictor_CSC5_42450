/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on June 1, 2014, 9:30 PM
 * CSC 5 (42450) | Project 2: Black Jack Game Version 2
 */

//System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <fstream>
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
    ifstream infile;
    ofstream outfile,outfile2;
    int choice;
    bool exitMnu=true;
    string next,name;
    //Loop until exit
    do{
        //Output Menu
        cout<<"\n";
        cout<<"Select From The Menu"<<endl;
        cout<<"\n";
        cout<<"1. Play Blackjack"<<endl;
        cout<<"2. Blackjack Game Overview"<<endl;
        cout<<"***Anything Else Exit Program***"<<endl;
        cout<<"\n";
        //Input your choice
        cout<<"Selection: ";
        cin>>choice;
        //Solve the problem chosen
        switch(choice){
            case 1:     
    //Initialize Player and House Running Totals
    hrTot=0;
    rTotal=0; 
    //Open File to write name
                         outfile2.open("output2.dat", ios::app);
                             if(outfile2.fail()){
                                cout<<"Input file failed to open.\n";
                                exit(1);
                            }
                         cout<<"Please enter your first name: ";
                         cin>>name;
                         outfile2<<name<<" ";
                         outfile2.close();
    //Open File to read welcome message
                         infile.open("input.dat");
                             if(infile.fail()){
                                cout<<"Input file failed to open.\n";
                                exit(1);
                            }
                         cout<<name<<" ";
                         while (infile>>next){
                             cout<<next<<" ";
                         }
                         infile.close();
                         cout<<endl<<endl;
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
                       //Open File to write results
                         outfile.open("output.dat", ios::app);
                             if(outfile.fail()){
                                cout<<"Input file failed to open.\n";
                                exit(1);
                            }
                       if(pTotal==21||(pTotal>hTotal&&pTotal<21)){
                           cout<<"\n";
                           cout<<"***Congratulations! You have won***";
                           outfile<<"Win"<<" "<<endl;
                           cout<<"\n";
                       }else if(hTotal>21&&pTotal<=21) {
                           cout<<"\n";
                           cout<<"***Congratulations! You have won***";
                           outfile<<"Win"<<" "<<endl;
                           cout<<"\n";
                       }else if(pTotal>21){
                           cout<<"\n";
                           cout<<"***Bust***";
                           outfile<<"Loss"<<" "<<endl;
                           cout<<"\n"; 
                       }else if(pTotal<hTotal&&hTotal<=21){
                           cout<<"\n";
                           cout<<"***House Wins***";
                           outfile<<"Loss"<<" "<<endl;
                           cout<<"\n";
                       }else if(pTotal==hTotal){
                           cout<<"\n";
                           cout<<"***Stand-Off/Draw, Play Again***";
                           outfile<<"Tie"<<" "<<endl;
                           cout<<"\n";
                       }
                         outfile.close();
                        //Exit Stage Right
                                break;
                                case 2:   
                              cout<<"\n";
                                cout<<"The object of the game is to beat the house \n";  
                                cout<<"by receiving a score of 21 or by getting a higher \n";
                                cout<<"score than the house without going over 21 with\n";
                                cout<<"any additional cards. The game begins by dealing\n";
                                cout<<"two cards to the player; after displaying your\n";
                                cout<<"score  and if your score is less than 21 you \n";
                                cout<<"will have the option to take another\n";
                                cout<<"card to add to your total score or hold with\n";
                                cout<<"your existing score. If you hold or go over 21\n";
                                cout<<"after choosing another card the program will \n";
                                cout<<"automatically display the house's hand and then\n";
                                cout<<"determine the outcome.\n\n";
                                cout<<"Multiple decks of cards are used with the following values:\n\n";
                                cout<<"Cards 2 through 10 = face value points\n";
                                cout<<"Jacks = 10 points\n";
                                cout<<"Queens = 10 Points\n";
                                cout<<"Kings = 10 Points\n";
                                cout<<"Aces = 1 or 11 depends on the player's total. If player's total \n";
                                cout<<"is less than ten points then they hold a value of eleven otherwise \n";
                                cout<<"the card will hold a value of one.\n";  
                                ;break;
                                default: exitMnu=false;
                            }
                        }while(exitMnu);
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
    cout<<right<<setw(2)<<card[randCard];
    cout<<" ";
    cout<<left<<setw(2)<<suit[randSuit];
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
