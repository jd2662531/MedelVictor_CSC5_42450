/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on April 23, 2014, 2:11 PM
 * CSC 5 42450 | Midterm | Problem 2
 */

#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int num, inNum;
    cout<<"\n";
   //Input amount of number you wish to graph
    cout<<"How many numbers would you like to input, up to five number only? ";
    cin>>num;
    if (num>=6){//Check to make sure that numbers requested are no more than 5
        do{
        cout<<"Enter up to five(5) numbers only: ";
        cin>>num;
        }while (num>=6);
    } 
    for (int k=0; k<num; k++){//Keep count of time program needs to loop
        cout<<"\n";
        //Enter selected number within range
        cout<<"Enter a number within the range of 3 and 27: \n";
        cin>>inNum;
        if (inNum<3||inNum>27){
        do{//Output numbers and *'s
        cout<<"Not within range enter a number within the range of 3 and 27: \n";
        cin>>inNum;
        }while(inNum<3||inNum>27);
        }
        for (int star=0; star<inNum; star++)
            cout<<"*";           
    }
    //Exit Stage Right
    return 0;
}

