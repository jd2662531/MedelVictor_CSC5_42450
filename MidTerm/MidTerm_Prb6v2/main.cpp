/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on April 25, 2014, 8:47 PM
 * CSC 5 42450 | Midterm | Problem 6v2
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
//Declare Variables
    int count=0, n, p;
    do{
        
    bool funNum;
    if(n%2==0||n%3==0||n%5==0){
       funNum=true;
    }
       
    bool prmNum=true;
    for(p=2; n<p; p++){
        if(n%p==0){
            prmNum=false;
        }
    }  
    int k=2, i;
    for(i=6; i<k; i++){
        if (prmNum&&k%1==0)
            funNum=false;
}
  
    }while(count<1476);
    cout<<n;
    //This version of problem 6 also does the same as the previous version with the 
    //exception of dividing out the number to equal one.
    //I was not sure how to implement this with this version
    //Exit Stage Right
    return 0;
}