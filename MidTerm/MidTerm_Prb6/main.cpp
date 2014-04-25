/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on April 24, 2014, 12:50 AM
 * CSC 5 42450 | Midterm | Problem 6
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Starts Here
int main(int argc, char** argv) {
     //Declare Variables
    
    for(int n=2;n<=1475;n++)
        if (n%2==0||n%3==0||n%5==0){
            cout<<n;
            cout<<",";
        }
            
    
    
    //Exit Stage Right
    return 0;
}

