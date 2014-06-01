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
#include <string>
using namespace std;

//Global Constants


//Function Prototypes
void crdSuit( );

//Execution Starts Here
int main(int argc, char** argv) {
    srand(time(0));
    
    
    
    crdSuit( );
    
  
    
    //Exit Stage Right
    return 0;
}
void crdSuit( ){
    
    string suit[4]={"Hearts","Diamonds","Spades","Clubs"};
    int randSuit=rand()%4;
    cout<<suit[randSuit];
}