/* 
 * File:   main.cpp
 * Author: Victor Medel
 *
 * Created on June 3, 2014, 12:59 PM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;

//Global Constants
const int COLS=2;

//Function Prototypes


//Execution Starts Here
int main(int argc, char** argv) {
    
  
    //Exit Stage Right
    return 0;
}

void dealCrd(string card[][COLS], int& count){
    for(int rndCrd=0;rndCrd<14;rndCrd++)
        for(int rndSuit=0;rndSuit<4;rndSuit++){
            card[rndCrd][rndSuit]=0;
        }
   }