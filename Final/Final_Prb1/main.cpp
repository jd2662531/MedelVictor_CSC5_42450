/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on June 10, 2014, 10:08 AM
 * Final: Problem 1
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Starts Here
int main(int argc, char** argv) {
    //Declare Variable
     unsigned short number;
     unsigned short nuNum;
     int digits;
     cout<<"Reverse the order of your number.\n";
     cout<<"According to The Microsoft Developer Network an unsigned short value range of 0-65,535.\n\n";
     cout<<"Enter a number between 0 and 65,535\n";
     cout<<"Number: ";
     cin>>number;
      if(number>0&&number<=65535){   
          digits=((log10(number))+1); //Tells us how many digits are in the number
             nuNum=0;
             for (int i=0;i<digits;i++){
                  nuNum=nuNum*10; //Makes room for the next digit
                  nuNum=nuNum+(number % 10); //adds in the next digit
                  number=number/10; //Shift the digits to the right
             }  
             if(nuNum>65535){
                 cout<<"Your conversion is not possible.";
             }else if(nuNum<=65535){             
             cout<<"Your number has been reversed to: ";
             cout<<nuNum;
             }
      }else if(number>65535){
          cout<<"Your conversion is not possible.";
      }
    //Exit Stage Right
    return 0;
}

