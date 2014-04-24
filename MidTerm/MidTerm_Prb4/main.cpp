/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on April 23, 2014, 7:39 PM
 * CSC 5 42450 | Midterm | Problem 4
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Starts Here
int main(int argc, char** argv) {
    //Declare Variables
    float payRate, hrsWrk, minWrk, grssPy, totHrs;
    //Output quick instructions
    cout<<"Calculate your gross pay.\n\n";
    cout<<"Round hours worked to the nearest 15 minutes.\n";
    cout<<"Hours and minutes worked will be entered separately.\n";
    //Input hours worked and pay rate.
    cout<<"\n";
    cout<<"Hours Worked: ";
    cin>>hrsWrk;
    cout<<"Minutes Worked: ";
    cin>>minWrk;
    totHrs=hrsWrk+(minWrk/60);
    cout<<"Pay Rate: ";
    cin>>payRate;
    //Set decimal accuracy
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    //Output gross pay, determined by hours worked
    if (totHrs<=20){
        grssPy=totHrs*payRate;
        cout<<"Your gross pay is: $";
        cout<<grssPy;
    }if (totHrs>20&&totHrs<=40){
        grssPy=(((totHrs-20)*(payRate*1.5))+(payRate*20));
        cout<<"Your gross pay is: $";
        cout<<grssPy;
    }if (totHrs>40){
        grssPy=(20*payRate)+(20*(payRate*1.5))+((totHrs-40)*(payRate*2));
        cout<<"Your gross pay is: $";
        cout<<grssPy;
    }    
    //Exit Stage Right
    return 0;
}

