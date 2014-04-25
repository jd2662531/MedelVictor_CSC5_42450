/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on April 23, 2014, 11:12 AM
 * CSC 5 42450 | Midterm | Problem 1
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Starts Here
int main(int argc, char** argv) {
    //Declare Variables
    int n;
    //Input number of lines desired
    cout<<"Enter how many lines would you like to output?\n";
    cin>>n;
    //Output lines and spaces to create diagonal
    for(int lines=1; lines<=n; lines++){
        for(int space=2; space<=lines; space++){
            cout<<" ";
        }
        cout<<lines;
        cout<<"\n";
    }
    //Exit Stage Right
    return 0;
}

