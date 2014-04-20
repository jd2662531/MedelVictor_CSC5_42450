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


//Execution Begins Here!
int main(int argc, char** argv) {  
    //Set the random number seed and declare variables
    srand(static_cast<unsigned int>(time(0))); 
    int pTotal, crdValu, crdSuit, crdValu2, crdSuit2;
    
    //CARD ONE
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
   //End of suit selection    
   //END OF CARD ONE         
   cout<<" and ";
     //CARD TWO
    //Randomly selects card values
    crdValu2=rand()%13+1;
    if (crdValu2==10){
        cout<<"Jack of ";
    }if (crdValu2==11||crdValu2==1){
        cout<<"Ace of ";
        if (pTotal<=10){            
            crdValu2=11;
        }else{
            crdValu2=1;
        }
    }if (crdValu2==12){
        cout<<"Queen of ";
        crdValu2=10;
    }if (crdValu2==13){
        cout<<"King of ";
        crdValu2=10;
    }if (crdValu2<=9){
        cout<<crdValu2;
        cout<<" of ";
    }
   //End of card value selection
    //Randomly selects suit
   crdSuit2=rand()%4+1;
   if(crdSuit2==1){
       cout<<"Clubs";
   }if(crdSuit2==2){
       cout<<"Diamonds";
   }if(crdSuit2==3){
       cout<<"Spades";
   }if (crdSuit2==4){
       cout<<"Hearts";
   }
   //End of suit selection    
   //END OF CARD TWO 
   cout<<"\n";
   pTotal=crdValu+crdValu2;
   cout<<pTotal;
   
    //Exit Stage Right
    return 0;
}



