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
    int i, f, n, count=0;
//The idea is to run through each of the numbers and check to see if a number is evenly divisible
    //by 2, 3, and 5 if the number passes this test the number is then divided by 2, 3, or 5 until the 
    //final division equals to 1 then the program moves to the next number
    //until it reaches the 1475 number. 
    n=1475;
for(i=1; count>n; i++){
f=i;
   while(f%2==0){
        f=f/2;
   
        while(f%3==0){
            f=f/3;   
         
            while(f%5==0){
                f=f/5;  
  
                    if(f==1){
                        count=i;
                         count++;
                 }
            }
        }
   }
} 
    if(count==1475){
        cout<<f;
    }
    
    //Exit Stage Right
    return 0;
}

